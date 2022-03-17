#include "Traktorinoa.h"
#include "Arduino.h" 

Traktorinoa::Traktorinoa(){
} //Eraikitzailea
 


void Traktorinoa::aurrera()
{
    //A eta B motorra norantza berdinean AURRERANTZ biraka jartzen ditu
 
    pinMode(12,OUTPUT);
    pinMode(13,OUTPUT);
    
    analogWrite(10,255);
    analogWrite(11,255);
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    Serial.println("Traktorinoa AURRERANTZ");
}

void Traktorinoa::atzera()
{
    //A eta B motorra norantza berdinean ATZERANTZ biraka jartzen ditu
 
    pinMode(12,OUTPUT);
    pinMode(13,OUTPUT);
    
    analogWrite(10,255);
    analogWrite(11,255);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    Serial.println("Traktorinoa ATZERANTZ");
}

void Traktorinoa::geratu()
{
    //A eta B motorra GERATU
    
    analogWrite(10,0);
    analogWrite(11,0);
    Serial.println("Traktorinoa GERATU");
}

void Traktorinoa::eskuinera()
{
    //A eta B motorra norantza ezberdinean ESKUINERANTZ biraka jartzen ditu
 
    pinMode(12,OUTPUT);
    pinMode(13,OUTPUT);
    
    analogWrite(10,200);
    analogWrite(11,200);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
    Serial.println("Traktorinoa ESKUINERA");
}

void Traktorinoa::ezkerrera()
{
    //A eta B motorra norantza ezberdinean ESKERRERANTZ biraka jartzen ditu
 
    pinMode(12,OUTPUT);
    pinMode(13,OUTPUT);
    
    analogWrite(10,200);
    analogWrite(11,200);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
    Serial.println("Traktorinoa EZKERRERA");
}

void Traktorinoa::abestu()
{
    pinMode(4,OUTPUT);
    tone(4, 15, 30); 
    delay(100);   
    tone(4, 15000, 200);
    delay(100); 
    tone(4, 15, 50); 
    tone(4, 15000, 200); 
}

