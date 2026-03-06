// Auto-generated. Do not edit.


    /**
     * Updates the ready flag to indicate the system is ready for another word.
     */

declare namespace tts {

    /**
     * Plays a word through the Text-To-Speech System.
     * @param speak_text The name of the word being spoken in the data_map.
     * @param display_text How the word should be displayed on the screen
     */
    //% shim=tts::announceWord
    function announceWord(display_text: string, audio_data: Buffer, sample_rate: int32, size: int32): void;
}

// Auto-generated. Do not edit. Really.
