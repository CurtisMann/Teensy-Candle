/* 
 *  If this actually works I'll eat my laptop
*/

//Five random numbers initialization
long randNumber;
long randNumber2;
long randNumber3;
long randNumber4;
long randNumber5;
long loopRand;

//Start state
int state = 0;

//Initialize LED outs
const int led1 = 16;
const int led2 = 17;
const int led3 = 20;
const int led4 = 22;
const int led5 = 23;
const int led6 = 10;
const int led7 = 9;
const int led8 = 6;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);

  //Seed the random number generator with noise
  randomSeed(analogRead(0));
}


void loop() {

//Startup//////////////////////////////////////////////////////////////////////////////////////////////////////////
  if(state == 0){
    for(int i = 0; i <= 255; i += 10){
    
      analogWrite(led1, i);
    
    //Second LED
      if(i >= 40){
      
        analogWrite(led2, i - 40);
      }
    
    if(i >= 40 && i < 80){
    
      if (random(101) <= 1){
        
        if random(2) == 1{
          
          for(int x = 0; x <= random(11); x++){
            
            if x % 2 == 0{
              analogWrite(led2, 0);
              analogWrite(led1, random(i + 1);
              delay(random(50,300));
            }
            else{
              analogWrite(led2, random(i + 40);
              delay(random(50,300));
            }
          }
        }
        else{
          
          for (int x = 1; x <= 81; x++){
            
            if (x <= 40){
              analogWrite(led2, i - x);
              delay(30);
            }
            else{
              analogWrite(led2, i + x - 40);
              delay(30);

            }
          }
        }  
      }
    }
      }
    
    //Third LED
      if(i >= 80){
        analogWrite(led3, i - 80);
    
    if(i >= 80 && i < 120){
      
      if random(101) <= 1{
        
        if random(2) == 1{
          
          for(int x = 0; x <= random(11); x++){
            
            if x % 2 == 0{
              analogWrite(led3, 0);
              analogWrite(led2, random(i + 1);
              delay(random(50,300));
            }
            else{
              analogWrite(led3, random(i + 40);
              delay(random(50,300));
            }
          }
        }
        else{
          
          for (int x = 1; x <= 81; x++){
            
            if (x <= 40){
              analogWrite(led3, i - x);
              delay(30);
            }
            else{
              analogWrite(led3, i + x - 40);
              delay(30);
            }
          }
        }  
      }
    }
      }
    
    //Fourth LED
      if(i >= 120){
        analogWrite(led4, i - 120);
    
    if(i >= 120 && i < 160){
      
      if random(101) <= 1{
        
        if random(2) == 1{
          
          for(int x = 0; x <= random(11); x++){
            
            if x % 2 == 0{
              analogWrite(led4, 0);
              analogWrite(led3, random(i + 1);
              delay(random(50,300));
            }
            else{
              analogWrite(led4, random(i + 40);
              delay(random(50,300));
            }
          }
        }
        else{
          
          for (int x = 1; x <= 81; x++){
            
            if (x <= 40){
              analogWrite(led4, i - x);
              delay(30);
            }
            else{
              analogWrite(led4, i + x - 40);
              delay(30);
            }
          }
        }  
      }
    }
      }
    
    //Fifth LED
      if(i >= 160){
        analogWrite(led5, i - 160);
    
    if(i >= 160 && i < 200){
      
      if random(101) <= 1{
        
        if random(2) == 1{
          
          for(int x = 0; x <= random(11); x++){
            
            if x % 2 == 0{
              analogWrite(led5, 0);
              analogWrite(led4, random(i + 1);
              delay(random(50,300));
            }
            else{
              analogWrite(led5, random(i + 40);
              delay(random(50,300));
            }
          }
        }
        else{
          
          for (int x = 1; x <= 81; x++){
            
            if (x <= 40){
              analogWrite(led5, i - x);
              delay(30);
            }
            else{
              analogWrite(led5, i + x - 40);
              delay(30);
            }
          }
        }  
      }
    }
      }
    
    //Sixth LED
      if(i >= 200){
        analogWrite(led6, i - 200);
    
    if(i >= 200 && i <= 255){
      
      if random(101) <= 1{
        
        if random(2) == 1{
        
          for(int x = 0; x <= random(11); x++){
            
            if x % 2 == o{
              analogWrite(led6, 0);
              analogWrite(led5, random(i + 1);
              delay(random(50,300));
            }
            else{
              analogWrite(led6, random(if(i >= 215){ i + (255 - i) }else{ i + 40})
              delay(random(50,300));
            }
          }
        }
        else{
          
          for (int x = 1; x <= 81; x++){
            
            if (x <= 40){
              analogWrite(led6, i - x);
              delay(30);
            }
            else{
              analogWrite(led6, i + x - 40);
              delay(30);
            }
          }
        }
      }
    }
      }
      delay(50);
      clear();
    }
  }
//Startup//////////////////////////////////////////////////////////////////////////////////////////////////////////


  //Random number from 1-100
  randNumber = random(101);
  
//Normal Flicker///////////////////////////////////////////////////////////////////////////////////////////////////
  if(randNumber <= 70 && (state == 0 || state == 2)){

    //Set state
    state = 1;

    //Flicker
    randNumber2 = random(101);
    randNumber3 = random(5);

    //Up
    if(randNumber2 <= 50){

        for(int i = 0; i < randNumber3; i++){

          randNumber4 = random(101);
          
          if(randNumber4 % 2 == 0){
            analogWrite(led1, 255);
            analogWrite(led2, 255);
            analogWrite(led3, 200);
            analogWrite(led4, 150);
            analogWrite(led5, 75);
            analogWrite(led6, 5);
            delay(random(50,200));
            clear();
          }
          if(randNumber4 % 2 != 0){
            analogWrite(led1, 255);
            analogWrite(led2, 255);
            analogWrite(led3, 255);
            analogWrite(led4, 200);
            analogWrite(led5, 150);
            analogWrite(led6, 75);
            analogWrite(led7, 5);
            delay(random(50,200));
            clear();
          }
        }        
    }

    //Down
    if(randNumber2 > 51){
      
      for(int i = 0; i < randNumber3; i++){

          randNumber4 = random(101);
          
          if(randNumber4 % 2 == 0){
            analogWrite(led1, 255);
            analogWrite(led2, 255);
            analogWrite(led3, 200);
            analogWrite(led4, 150);
            analogWrite(led5, 75);
            analogWrite(led6, 5);
            delay(random(50,200));
            clear();
          }
          if(randNumber4 % 2 != 0){
            analogWrite(led1, 255);
            analogWrite(led2, 200);
            analogWrite(led3, 150);
            analogWrite(led4, 75);
            analogWrite(led5, 5);
            delay(random(50,200));
            clear();
          }
       }    
    }
  }
//Normal Flicker///////////////////////////////////////////////////////////////////////////////////////////////////

//High Flicker/////////////////////////////////////////////////////////////////////////////////////////////////////
  if(randNumber > 70 && randNumber <= 90 && (state == 1 || state == 2 || state == 3)){
    //Set state
    state = 2;

    //Flicker
    randNumber2 = random(101);
    randNumber3 = random(5);

    //Up
    if(randNumber2 <= 50){

        for(int i = 0; i < randNumber3; i++){

          randNumber4 = random(101);
          
          if(randNumber4 % 2 == 0){
            analogWrite(led1, 255);
            analogWrite(led2, 255);
            analogWrite(led3, 255);
            analogWrite(led4, 200);
            analogWrite(led5, 150);
            analogWrite(led6, 75);
            analogWrite(led7, 5);
            delay(random(50,200));
            clear();
          }
          if(randNumber4 % 2 != 0){
            analogWrite(led1, 255);
            analogWrite(led2, 255);
            analogWrite(led3, 255);
            analogWrite(led4, 255);
            analogWrite(led5, 200);
            analogWrite(led6, 150);
            analogWrite(led7, 75);
            analogWrite(led8, 5);
            delay(random(50,200));
            clear();
          }
        }        
    }

    //Down
    if(randNumber2 > 51){
      
      for(int i = 0; i < randNumber3; i++){

          randNumber4 = random(101);
          
          if(randNumber4 % 2 == 0){
            analogWrite(led1, 255);
            analogWrite(led2, 255);
            analogWrite(led3, 255);
            analogWrite(led4, 200);
            analogWrite(led5, 150);
            analogWrite(led6, 75);
            analogWrite(led7, 5);
            delay(random(50,200));
            clear();
          }
          if(randNumber4 % 2 != 0){
            analogWrite(led1, 255);
            analogWrite(led2, 255);
            analogWrite(led3, 200);
            analogWrite(led4, 150);
            analogWrite(led5, 75);
            analogWrite(led6, 5);
            delay(random(50,200));
            clear();
          }
       }    
    }
  }
//High Flicker/////////////////////////////////////////////////////////////////////////////////////////////////////


//Low Flicker/////////////////////////////////////////////////////////////////////////////////////////////////////
  if(randNumber > 90  && randNumber <= 98 && (state == 2 || state == 4 || state == 3)){
    
    //Set state
    state = 3;

    //Flicker
    randNumber2 = random(101);
    randNumber3 = random(5);

    //Up
    if(randNumber2 <= 50){

        for(int i = 0; i < randNumber3; i++){

          randNumber4 = random(101);
          
          if(randNumber4 % 2 == 0){
            analogWrite(led1, 255);
            analogWrite(led2, 200);
            analogWrite(led3, 150);
            analogWrite(led4, 75);
            analogWrite(led5, 5);
            delay(random(50,200));
            clear();
          }
          if(randNumber4 % 2 != 0){
            analogWrite(led1, 255);
            analogWrite(led2, 255);
            analogWrite(led3, 200);
            analogWrite(led4, 150);
            analogWrite(led5, 75);
            analogWrite(led6, 5);
            delay(random(50,200));
            clear();
          }
        }        
    }

    //Down
    if(randNumber2 > 51){
      
      for(int i = 0; i < randNumber3; i++){

          randNumber4 = random(101);
          
          if(randNumber4 % 2 == 0){
            analogWrite(led1, 255);
            analogWrite(led2, 200);
            analogWrite(led3, 150);
            analogWrite(led4, 75);
            analogWrite(led5, 5);
            delay(random(50,200));
            clear();
          }
          if(randNumber4 % 2 != 0){
            analogWrite(led1, 200);
            analogWrite(led2, 150);
            analogWrite(led3, 75);
            analogWrite(led4, 5);
            delay(random(50,200));
            clear();
          }
       }    
    }
  }
//Low Flicker/////////////////////////////////////////////////////////////////////////////////////////////////////

//Move down/up-er//////////////////////////////////////////////////////////////////////////////////////////////////
  if(randNumber > 98  && randNumber <= 100 && (state == 3 || state == 4)){
    //Set state
    state = 4;

    //Flicker
    randNumber2 = random(101);
    randNumber3 = random(5);

    //Up
    if(randNumber2 <= 50){

        for(int i = 0; i < randNumber3; i++){

          randNumber4 = random(101);
          
          if(randNumber4 % 2 == 0){
            analogWrite(led1, 200);
            analogWrite(led2, 150);
            analogWrite(led3, 75);
            analogWrite(led4, 5);
            delay(random(50,200));
            clear();
          }
          if(randNumber4 % 2 != 0){
            analogWrite(led1, 255);
            analogWrite(led2, 200);
            analogWrite(led3, 150);
            analogWrite(led4, 75);
            analogWrite(led5, 5);
            delay(random(50,200));
            clear();
          }
        }        
    }

    //Down
    if(randNumber2 > 51){
      
      for(int i = 0; i < randNumber3; i++){

          randNumber4 = random(101);
          
          if(randNumber4 % 2 == 0){
            analogWrite(led1, 200);
            analogWrite(led2, 150);
            analogWrite(led3, 75);
            analogWrite(led4, 5);
            delay(random(50,200));
            clear();
          }
          if(randNumber4 % 2 != 0){
            analogWrite(led1, 150);
            analogWrite(led2, 75);
            analogWrite(led3, 5);
            delay(random(50,200));
            clear();
          }
       }    
    }
  }
//Move down-er/////////////////////////////////////////////////////////////////////////////////////////////////////
}

//Clear all//
void clear(){
  analogWrite(led1, 0);
  analogWrite(led2, 0);
  analogWrite(led3, 0);
  analogWrite(led4, 0);
  analogWrite(led5, 0);
  analogWrite(led6, 0);
  analogWrite(led7, 0);
  analogWrite(led8, 0);
}

