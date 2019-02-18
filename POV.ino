#include "font.h"
#define ROUND_s 800 //mili second
int pin[]={12,10,8,6,4,2},i=0;

//int state[12];//0---5:red(d2--d12)|6--11:yello(a7--d13)
int nan[][6]={{0,0,0,0,0},
           {0,0,0,0,0},
           {0,0,0,0,0},
           {0,0,0,0,0},
           {0,0,0,0,0},
           {0,0,0,0,0},
};
void POV_putchar(int c[][6]){
  int i,j;
  for(i=0;i<6;i++){
    for (j=0;j<7;j++){
      if(c[j][i]==1){ digitalWrite(pin[j],HIGH);}
     else{ digitalWrite(pin[j],LOW);}
    }
    
    delayMicroseconds(ROUND_s);
  }
  
}
void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);

pinMode(6,OUTPUT);
pinMode(8,OUTPUT);
pinMode(10,OUTPUT);
pinMode(12,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
for(;;){
POV_putchar(A);
delayMicroseconds(ROUND_s*2);
POV_putchar(B);
delayMicroseconds(ROUND_s*2);
POV_putchar(C);
delayMicroseconds(ROUND_s*2);
POV_putchar(F);
delayMicroseconds(ROUND_s*2);

delay(87-18);
}
}
