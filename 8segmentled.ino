//Arduino pin: 2,3,4,5,6,7,8
byte seven_seg_digits[10][7] = { { 0,0,0,0,0,0,1 },  // = 0
{ 1,0,0,1,1,1,1 },  // = 1
{ 0,0,1,0,0,1,0 },  // = 2
{ 0,0,0,0,1,1,0 },  // = 3
{ 1,0,0,1,1,0,0 },  // = 4
{ 0,1,0,0,1,0,0 },  // = 5
{ 0,1,0,0,0,0,0 },  // = 6
{ 0,0,0,1,1,1,1 },  // = 7
{ 0,0,0,0,0,0,0 },  // = 8
{ 0,0,0,1,1,0,0 }   // = 9
};


void setup() {               
pinMode(2, OUTPUT); //A
pinMode(3, OUTPUT); //B
pinMode(4, OUTPUT); //C
pinMode(5, OUTPUT); //D
pinMode(6, OUTPUT); //E
pinMode(7, OUTPUT); //F
pinMode(8, OUTPUT); //G
pinMode(9, OUTPUT); //Dot

}

void sevenSegWrite(byte digit) {
byte pin = 2;
for (byte segCount = 0; segCount < 7; ++segCount) {
digitalWrite(pin, seven_seg_digits[digit][segCount]);
++pin;
}
}

void loop() {
for (byte count = 10; count > 0; --count) {
delay(1000);
sevenSegWrite(count - 1); 
}
delay(4000);

}