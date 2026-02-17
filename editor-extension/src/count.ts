import * as pxtc from "pxt-core";

async function countBlocks() {
    const host = (window as any).pxtTargetBundle;

    const resp = await pxt.editor.getProjectTextAsync();
    const ts = resp["main.ts"];

    const blocksInfo = pxt.blocks.compileInfo();
    const compiled = await pxtc.decompileToBlocks("main.ts", ts, blocksInfo);

    const counts: Record<string, number> = {};

    compiled.blocks.forEach(block => {
        const op = block.type;
        counts[op] = (counts[op] || 0) + 1;
    });

    return counts;
}