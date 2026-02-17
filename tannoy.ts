/** * Provides access to the Mews Tannoy Prototype */
//% color=#FF8243 weight=100 icon="\uf238"
namespace tannoy {
  //% block="Announce Station: $station"
  //% shim=tannoy::announceStation
  export function announceStation(station: Station): void {
    console.log("Announcing Station: " + station);
  }

  //% block="Announce Time: $hours : $mins"
  //% shim=tannoy::announceTime
  export function announceTime(hours: number, mins: number): void {
    console.log("Announcing Time: " + hours + ":" + mins);
  }
}
