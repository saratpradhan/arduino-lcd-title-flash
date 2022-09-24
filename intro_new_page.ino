#include  <Wire.h>
#include  <LiquidCrystal_I2C.h>

byte lcdNumCols = 16; // -- number of columns in the LCD
byte lcdLine = 2; // -- number of line in the LCD

LiquidCrystal_I2C lcd(0x27, 16,2);
int backLight = 43;

int f=4;                  //set frames per second (fps)
int s;

// the following frams of the 8-bit Mario are made from a orginal 8-bit Mario as reference
// left number is the frame right number is the position (mario xy)
// (1 = top left 2 = bottem left 3 = top right 4 = bottem right)

byte mario11[8] = {
 B00000,
 B00000,
 B00000,
 B00000,
 B00001,
 B00001,
 B00001,
 B00000,

};
byte mario12[8] = {
 B00001,
 B00001,
 B00001,
 B00001,
 B00000,
 B00000,
 B00000,
 B00000
};
byte mario13[8] = {
  B00000,
 B11111,
 B11111,
 B11111,
 B11111,
 B11111,
 B11111,
 B11111,

};
byte mario14[8] = {
 B11111,
 B11111,
 B11111,
 B11111,
 B11111,
 B11111,
 B11111,
 B11110
};

byte mario15[8] = {
   B00000,
 B00000,
 B11000,
 B00000,
 B11000,
 B11100,
 B11000,
 B10000,

};

byte mario16[8] = {
 B00000,
 B10000,
 B10000,
 B10000,
 B00000,
 B00000,
 B10000,
 B00000
};

byte mario21[8] = {
   B00000,
 B00000,
 B00000,
 B00000,
 B00000,
 B00000,
 B00000,
 B00000,
};

byte mario22[8] = {
 B00111,
 B00111,
 B00111,
 B00000,
 B00001,
 B00011,
 B00011,
 B00001
};

byte mario23[8] = {
 B00000,
 B01111,
 B11111,
 B11111,
 B11111,
 B11111,
 B11111,
 B01111,

};

byte mario24[8] = {
 B11111,
 B11111,
 B11111,
 B11111,
 B11111,
 B11001,
 B00000,
 B10000
};
byte mario25[8] = {
 B00000,
 B00000,
 B11100,
 B10000,
 B11100,
 B11110,
 B11100,
 B11000,

};

byte mario26[8] = {
 B11111,
 B11111,
 B10110,
 B11110,
 B11110,
 B11110,
 B00000,
 B00000,
};

byte mario31[8] = {
 B00000,
 B00000,
 B00000,
 B00000,
 B00000,
 B00000,
 B00000,
 B00000,

};


byte mario32[8] = {
 B00000,
 B00000,
 B00000,
 B00000,
 B00011,
 B00011,
 B00111,
 B00000
};


byte mario33[8] = {
 B00000,
 B00000,
 B00111,
 B01111,
 B01111,
 B11111,
 B11111,
 B11111,

};

byte mario34[8] = {
 B01111,
 B11111,
 B11111,
 B11111,
 B11111,
 B11111,
 B00111,
 B00111
};

byte mario35[8] = {
 B00000,
 B00000,
 B10000,
 B11110,
 B11000,
 B11110,
 B11111,
 B11110,

};

byte mario36[8] = {
 B11100,
 B11110,
 B11100,
 B11000,
 B11000,
 B10000,
 B00000,
 B10000,
};

byte mario41[8] = {
 B00000,
 B00011,
 B00111,
 B00111,
 B01111,
 B01111,
 B01111,
 B00011,

};


byte mario42[8] = {
 B01111,
 B01111,
 B01111,
 B01111,
 B00111,
 B00011,
 B00011,
 B00011
};

byte mario43[8] = {
 B00000,
 B11000,
 B11111,
 B11100,
 B11111,
 B11111,
 B11111,
 B11110,
};

byte mario44[8] = {
 B11100,
 B11110,
 B11110,
 B11110,
 B11100,
 B11100,
 B11110,
 B10000
};


byte clean[8] = {
 B00000,
 B00000,
 B00000,
 B00000,
 B00000,
 B00000,
 B00000,
 B00000,
};

byte coin1[8] = {

 B00000,
 B00000,
 B00000,
 B00000,
 B00111,
 B01000,
 B10001,
 B10010,
};

byte coin2[8] = {
 
 B10010,
 B10010,
 B10010,
 B10010,
 B10001,
 B01000,
 B00111,
 B00000,
};


byte coin3[8] = {
 B00000,
 B00000,
 B00000,
 B00000,
 B10000,
 B01000,
 B00100,
 B10100,
};

byte coin4[8] = {
 B10100,
 B10100,
 B10100,
 B00100,
 B00100,
 B01000,
 B10000,
 B00000,
};
 byte rainChar1[8] = {
  B01110,
  B11110,
  B11111,
  B01101,
  B00001,
  B10010,
  B10010,
  B00100
};

byte rainChar2[8] = {
  B00100,
  B01001,
  B01001,
  B10010,
  B10010,
  B00100,
  B00100,
  B01001
};

byte rainChar3[8] = {
  B01110,
  B01111,
  B11111,
  B11111,
  B11110,
  B11001,
  B01001,
  B10010
};

byte rainChar4[8] = {
  B10010,
  B00100,
  B00100,
  B01001,
  B01001,
  B10010,
  B10010,
  B00100
};






byte rainCharA[8] = {
  B01110,
  B11110,
  B11111,
  B01100,
  B10001,
  B00010,
  B10010,
  B00100
};

byte rainCharB[] = {
  B00100,
  B01000,
  B01001,
  B10010,
  B10010,
  B00100,
  B00100,
  B01001
};

byte rainCharC[8] = {
  B01110,
  B01111,
  B11111,
  B11111,
  B11110,
  B11000,
  B01001,
  B10010
};

byte rainCharD[8] = {
  B10010,
  B00000,
  B00100,
  B00100,
  B01001,
  B01001,
  B10010,
  B10010

};

 void setup() {
  Wire.begin();
  lcd.begin(16, 2);

  lcd.clear();
  
  lcd.print("welcome to"); 
  lcd.setCursor (0,1); 
  lcd.print("our project"); 
   
  // -- do some delay: some time I've got broken visualization
  delay(2000);
  
  lcd.setCursor(0,0);
  lcd.write(1);
  lcd.setCursor(0,1);
  lcd.write(2);
  lcd.setCursor(1,0);
  lcd.write(3);
  lcd.setCursor(1,1);
  lcd.write(4);
  lcd.setCursor(3,0);
  lcd.print("CROP");
  lcd.setCursor(3,1);
  lcd.print("MONITORING");
  delay (10000);
  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.write(5);
  lcd.setCursor(0,1);
  lcd.write(6);
  lcd.setCursor(1,0);
  lcd.write(7);
  lcd.setCursor(1,1);
  lcd.write(8);
  lcd.setCursor(3,0);
  lcd.print("SYSTEM");
  lcd.setCursor(3,3);
  
  lcd.clear();

   lcd.setCursor(0,0);
  lcd.write(5);
  lcd.setCursor(0,1);
  lcd.write(6);
  lcd.setCursor(1,0);
  lcd.write(7);
  lcd.setCursor(1,1);
  lcd.write(8);
  lcd.setCursor(3,1);
  lcd.print("CROP MONITORING");
  lcd.setCursor(3,3);
  lcd.print("SYSTEM");
  delay (10000);
  lcd.clear();
 
 
  s=1000/f; 
   lcd.createChar(1 , rainChar1); //Numbering should start at 1, not 0
  lcd.createChar(2 , rainChar2);
  lcd.createChar(3 , rainChar3);
  lcd.createChar(4 , rainChar4);
  lcd.createChar(5 , rainCharA);
  lcd.createChar(6 , rainCharB);
  lcd.createChar(7 , rainCharC);
  lcd.createChar(8 , rainCharD);
  delay(3000);
 
 //fps to ms

}

void loop() {
  
 lcd.clear();
 lcd.setCursor(0,0);            //intro
 lcd.print("MP2-A");
 lcd.setCursor(0,1);
 lcd.print("by ");
 delay(2000);
 lcd.clear();
 lcd.setCursor(0,1);
 lcd.print("SARAT");
 delay(2000);
 lcd.clear();
 lcd.setCursor(0,1);
 lcd.print("PARTH");
 delay(2000);
 lcd.clear();
 lcd.setCursor(0,1);
 lcd.print("PRANAV");
 delay(2000);
 lcd.clear();
 lcd.setCursor(0,1);
 lcd.print("SURAJ");
 
 
 
 lcd.createChar(1, coin1);       //coin frames for the intro
 lcd.createChar(2, coin2);
 lcd.createChar(3, coin3);
 lcd.createChar(4, coin4);
 
 lcd.setCursor(11,0);
 lcd.write(1);
 lcd.setCursor(11,1);
 lcd.write(2);
 lcd.setCursor(12,0);
 lcd.write(3);
 lcd.setCursor(12,1);
 lcd.write(4);
  lcd.setCursor(14,0);
 lcd.write(1);
 lcd.setCursor(14,1);
 lcd.write(2);
 lcd.setCursor(15,0);
 lcd.write(3);
 lcd.setCursor(15,1);
 lcd.write(4);
 delay(2000);
 lcd.clear();
 //till this part all the words and intros play
 
for (int a=0; a<6;a++)     //for loop to repeat marios animation until the end of the display
 {
 int b=a+1;
 int c=a+2;
 int d=a+3;
 int e=a+4; 
  
 lcd.createChar(1, mario11);
 lcd.createChar(2, mario12);
 lcd.createChar(3, mario13);
 lcd.createChar(4, mario14);
 lcd.createChar(5, mario15);
 lcd.createChar(6, mario16);
 lcd.createChar(7, clean);
 
 lcd.setCursor(a,0);
 lcd.write(1);
 lcd.setCursor(a,1);
 lcd.write(2);
 lcd.setCursor(b,0);
 lcd.write(3);
 lcd.setCursor(b,1);
 lcd.write(4);
 lcd.setCursor(c,0);
 lcd.write(5);
 lcd.setCursor(c,1);
 lcd.write(6);
 delay(s);
 
 lcd.createChar(1, mario21);
 lcd.createChar(2, mario22);
 lcd.createChar(3, mario23);
 lcd.createChar(4, mario24);
 lcd.createChar(5, mario25);
 lcd.createChar(6, mario26);

 lcd.setCursor(a,0);
 lcd.write(1);
 lcd.setCursor(a,1);
 lcd.write(2);
 lcd.setCursor(b,0);
 lcd.write(3);
 lcd.setCursor(b,1);
 lcd.write(4);
 lcd.setCursor(c,0);
 lcd.write(5);
 lcd.setCursor(c,1);
 lcd.write(6);

 delay(s);
 
  lcd.createChar(1, mario31);
 lcd.createChar(2, mario32);
 lcd.createChar(3, mario33);
 lcd.createChar(4, mario34);
 lcd.createChar(5, mario35);
 lcd.createChar(6, mario36);

 lcd.setCursor(a,0);
 lcd.write(1);
 lcd.setCursor(a,1);
 lcd.write(2);
 lcd.setCursor(b,0);
 lcd.write(3);
 lcd.setCursor(b,1);
 lcd.write(4);
 lcd.setCursor(c,0);
 lcd.write(5);
 lcd.setCursor(c,1);
 lcd.write(6);
 
 delay(s);
 
 lcd.createChar(1, mario41);
 lcd.createChar(2, mario42);
 lcd.createChar(3, mario43);
 lcd.createChar(4, mario44);
 lcd.createChar(7, clean);
  lcd.setCursor(a,0);
 lcd.write(7);
 lcd.setCursor(a,1);
 lcd.write(7);
 lcd.setCursor(b,0);
 lcd.write(1);
 lcd.setCursor(b,1);
 lcd.write(2);
 lcd.setCursor(c,0);
 lcd.write(3);
 lcd.setCursor(c,1);
 lcd.write(4);


 delay(s);
 
 


 }
 
}
