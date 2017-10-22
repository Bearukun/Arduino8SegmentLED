// Create byte array of character codes for the numbers 0-9
byte Digital[10]={0xfc,0x60,0xda,0xf2,0x66,0xb6,0xbe,0xe0,0xfe,0xf6};

void setup()
{
  //We are going start at pin
  int i=2;
  //Loop every pin to setup
  for(i=2;i<10;i++)
  {
   pinMode(i,OUTPUT);
   digitalWrite(i,HIGH);
  }
}
void loop()
{
  int i=0;
  int j;
  //Display number 1-9
  for(i=0;i<10;i++)
  {  
    //for every number, send the character code to the digital pin
    for(j=0;j<8;j++)
   {  
    if(Digital[i]&1<<j)
    digitalWrite(9-j,LOW);
    else
    digitalWrite(9-j,HIGH);
    }
    delay(500);
  }
}
