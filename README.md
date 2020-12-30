## Sarrera


**Traktorinoa.h** liburutegia L298P driverra gomandatzeko sorturiko arduino liburutegia da. 

This is a **Traktorinoa.h** Arduino library created to use the L298P motor shield.


![L298P Irudia](https://github.com/axpirina/Traktorinoa/blob/main/L298P.png "L298P")

## Instalazioa
- Eskuinean dagoen ``` CODE ``` jartzen duen botoian sakatu eta ```.ZIP ``` formatuan jaitsi artxiboa.
- Arduino IDEan ```Include Library``` eta ```Add .ZIP``` aurkitu eta txertatu.

## Kodea
Hemen daukazue liburutegiari deia egiteko adibide kodea. 

```c++
#include <Traktorinoa.h>

Traktorinoa niretraktorinoa;

void setup() {

}

void loop() {
  niretraktorinoa.aurrera();
}
```

## License

This library it is release into open source license for any query you can write me at axpirina@oteitzalp.com
 follow me on [github Axpirina ](https://www.github.com/axpirina )
 

## Funtzioak 
|Elements| Quantity | 
|---|---|
| .aurrera();| A eta B motorrak aurrerantz mugitzen ditu. *FORWARD* | 
| .atzera();| A eta B motorrak atzerantz mugitzen ditu. *BACKWARD* | 
| .geratu();| A eta B motorrak gelditzen ditu. *STOP* | 
| .eskuinera();| A aurrerantz eta B atzerantz. *TURN RIGHT* | 
| .ezkerrera();| A atzerantz eta B aurrerantz. *TURN LEFT* | 
| .abestu();| Bozgorailutik soilu bat erreproduzitzen du. SONG from *BUZZER* | 


## Pinout (Just in case you wanna use it apart from library)

![Pinout](https://github.com/axpirina/Traktorinoa/blob/main/Pinout.png "Pinout")


  
## Project

This is part of a bigger educational project called Traktorinoa, the autonomus tractor. [Traktorino Proiektua](https://github.com/axpirina/Traktorinoa-Proiektua)
