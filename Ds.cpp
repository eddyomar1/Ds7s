#include "Arduino.h"
#include "Ds.h"
 
Ds::Ds()
{
//   pinMode(pin, OUTPUT);
//   _pin = pin;
}



const int pins[7] = { 2, 3, 4, 5, 6, 7, 8 };
 
const char numbersDisplayAnode[20] = {
//0b1101111, //b,a,c,d,e
0b1000000, //0
0b1111010, //1
0b0100100, //2
0b0110000, //3
0b0011010, //4
0b0010001, //5
0b0000001, //6
0b1111000, //7
0b0000000, //8
0b0011000, //9
0b0001000, //a
0b0000011, //b
0b0100111, //c
0b1000101, //C
0b0100010, //d
0b0000101, //e
0b0001101, //f
}; 



void Ds::show(char pin){

// for(int i = 0; i < 7; i++) {
// pinMode(pins[i], OUTPUT);
// }


//void lightSegments(int number = pin) {
int numberBit = numbersDisplayAnode[pin];
for (int i = 0; i < 7; i++) {
char bit = bitRead(numberBit, i);
digitalWrite(pins[i], bit); 
}

}
  

void Ds::a(){
int numberBit = numbersDisplayAnode[10];
for (int i = 0; i < 7; i++) {
char bit = bitRead(numberBit, i);
digitalWrite(pins[i], bit); 
}
}


void Ds::b(){
int numberBit = numbersDisplayAnode[11];
for (int i = 0; i < 7; i++) {
char bit = bitRead(numberBit, i);
digitalWrite(pins[i], bit); 
}
}


void Ds::c(){
int numberBit = numbersDisplayAnode[12];
for (int i = 0; i < 7; i++) {
char bit = bitRead(numberBit, i);
digitalWrite(pins[i], bit); 
}
}

void Ds::C(){
int numberBit = numbersDisplayAnode[13];
for (int i = 0; i < 7; i++) {
char bit = bitRead(numberBit, i);
digitalWrite(pins[i], bit); 
}
}

void Ds::d(){
int numberBit = numbersDisplayAnode[14];
for (int i = 0; i < 7; i++) {
char bit = bitRead(numberBit, i);
digitalWrite(pins[i], bit); 
}
}

void Ds::e(){
int numberBit = numbersDisplayAnode[15];
for (int i = 0; i < 7; i++) {
char bit = bitRead(numberBit, i);
digitalWrite(pins[i], bit); 
}
}

void Ds::f(){
int numberBit = numbersDisplayAnode[16];
for (int i = 0; i < 7; i++) {
char bit = bitRead(numberBit, i);
digitalWrite(pins[i], bit); 
}
}





// }
 

