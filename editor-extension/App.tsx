
import * as React from 'react';
import { Container, Segment, Button, Header } from "semantic-ui-react";
import { pxt, PXTClient } from '../lib/pxtextensions';
import * as util from "./lib/util";
import { PXTComponentProps } from './PXTExtension';

export interface IApp {
    setUserFiles(props: PXTComponentProps): void;
}

export interface AppProps {
    client: PXTClient;
    target: string;
    hosted: boolean;
}

export interface AppState {
    dirty?: boolean;
    shown?: boolean;

    code?: string;
    json?: string;
    jres?: string;
    asm?: string;

    userCode?:string;
}

export class App extends React.Component<AppProps, AppState> implements IApp {
    private debounceSerialized: any;

    constructor(props: AppProps) {
        super(props);

        this.state = {
        }

        this.deserialize = this.deserialize.bind(this);
        this.serialize = this.serialize.bind(this);
        this.debounceSerialized = util.debounce(this.serialize, 500);
        this.handleExport = this.handleExport.bind(this);

        this.props.client.on('read', this.deserialize);
        this.props.client.on('readuser', this.deserialize);
        this.props.client.on('hidden', () => {
            this.serialize();
            this.setState({ shown: false });
        });
        this.props.client.on('shown', () => this.setState({ shown: true }));
        this.props.client.on('written', () => this.setState({ dirty: false }));
    }

    private deserialize(resp: pxt.extensions.ReadResponse) {
        if (!resp) return;
        const code = resp.code;
        const json = resp.json !== undefined && util.JSONtryParse(resp.json);
        const jres = resp.jres !== undefined && util.JSONtryParse(resp.jres);
        const asm = resp.asm;
        console.debug('reading ', resp);
        this.setState({ code, json, jres, asm, dirty: false });
    }

    private serialize() {
        // PXT allows us to write to files in the project 
        // [extension_name].ts/json/jres/asm 
        const { code, json, jres, asm, dirty } = this.state;
        if (!dirty) return;

        pxt.extensions.write(this.props.client, code, json, jres, asm);
        // 'written' event unset the dirty flag
    }

    private handleExport() {
        const { code, json, jres, asm } = this.state;
        if (code)
            util.browserDownloadText(code, "extension.ts");
        if (json)
            util.browserDownloadText(json, "extension.json");
        if (jres)
            util.browserDownloadText(jres, "extension.jres");
        if (asm)
            util.browserDownloadText(asm, "extension.asm");
    }

    setUserFiles(props: PXTComponentProps) {
        // check if state is different
        const { code, json, jres, asm } = props;
        if ((code !== undefined && code != this.state.code)
            || (json !== undefined && json != this.state.json)
            || (jres !== undefined && jres != this.state.jres)
            || (asm !== undefined && asm != this.state.asm)) {
            this.setState({ code, json, jres, asm, dirty: true }, this.debounceSerialized);
        }
    }

    render() {
        const {code, json, jres, asm } = this.state;
        return (
            <div className="App">
                <Header as="h5" className="center aligned">&nbsp;</Header>
                <Header as="h1" className="center aligned">Audio precompiled. Return to MakeCode and download hex.</Header>
                <Header as="h3" className="center aligned">Ensure you re-precompile after making any changes.</Header>
                <Header as="h5" className="center aligned">&nbsp;</Header>
                <Segment>
                    <Header as="h4">Code:</Header>
                    <pre>{code}</pre>

                    <Header as="h4">JSON:</Header>
                    <pre>{JSON.stringify(json, null, 2)}</pre>

                    <Header as="h4">JRES:</Header>
                    <pre>{JSON.stringify(jres, null, 2)}</pre>

                    <Header as="h4">ASM:</Header>
                    <pre>{asm}</pre>
                </Segment>
            </div>
        );
    }
}