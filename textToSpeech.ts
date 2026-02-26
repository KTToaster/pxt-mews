/**
 * Provides access to the Mews Text To Speech System
 */
//% color=#FF8243 weight=100 icon="\uf238"
namespace textToSpeech {
  let words:string[];

  //% block="Say: $text"
  export function say(text:string): void {
    words = text.split(" ");
    words.forEach(word => {
      announceWord(utils.clean(word), word);
    });
  }

  //% shim=tts::announceWord
  function announceWord(speak_text:string, display_text:string): void{
    console.log(display_text);
  }
}
