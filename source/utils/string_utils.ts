namespace utils{
  export function clean(text:string):string{
    let cleaned = "";
      for (let i = 0; i < text.length; i++) {
        let c = text.charAt(i);
        if (
          (c >= "A" && c <= "Z") ||
          (c >= "a" && c <= "z") ||
          (c >= "0" && c <= "9") ||
          c == " "
        ) {
          cleaned += c;
        }
      }
      if(!isNaN(parseInt(cleaned[0]))){
        cleaned = "_" + cleaned;
      }
      return cleaned.toLowerCase();
  }
}