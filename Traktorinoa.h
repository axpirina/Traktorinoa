/*L298P motor shield-a erabiliaz Traktorinoa gidatu ahal izateko eraiki den liburutegia

  by Axpi
  2020ko gabonak
  this code is on Public Domain
  */
 
//Lehenengo include guards ak

#ifndef TRAKTORINOA_H
#define TRAKTORINOA_H

#include <Arduino.h> //Arduino komandoak erabiltzea ahalbideratzen du
 
class Traktorinoa  //Clase definizioa
{
    public:
 
    //Funtzioak: abiadura, aurrera, atzera, eskuinera, ezkerrera
    
    Traktorinoa();
    void aurrera();
    void atzera();
    void geratu();
    void eskuinera();
    void ezkerrera();
    void abestu();
    
    private:
    
    
    //Ezer ez dago deklaratzeko
};
 
#endif
