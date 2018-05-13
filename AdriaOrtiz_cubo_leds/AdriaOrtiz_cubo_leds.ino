/**********************************************************************************
**                                                                               **
**                              Cubo 3x3 LEDs                                  **
**                                                                               **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
 
 const int led0 = 1;          // donar nom al pin 1 de l’Arduino
 const int led1 = 2;          // donar nom al pin 2 de l’Arduino
 const int led2 = 3;          // donar nom al pin 3 de l’Arduino
 const int led3 = 4;          // donar nom al pin 4 de l’Arduino
 const int led4 = 5;          // donar nom al pin 5 de l’Arduino
 const int led5 = 6;         // donar nom al pin 6 de l’Arduino
 const int led6 = 7;         // donar nom al pin 7 de l’Arduino
 const int led7 = 8;         // donar nom al pin 8 de l’Arduino
 const int led8 = 9;         // donar nom al pin 9 de l’Arduino
 const int trans1 = 10;      // donar nom al pin 10 de l’Arduino
 const int trans2 = 11;      // donar nom al pin 11 de l’Arduino
 const int trans3 = 12;      // donar nom al pin 12 de l’Arduino
 
  

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     
  pinMode(led1, OUTPUT);    
  pinMode(led2, OUTPUT);     
  pinMode(led3, OUTPUT);     
  pinMode(led4, OUTPUT);     
  pinMode(led5, OUTPUT);     
  pinMode(led6, OUTPUT);    
  pinMode(led7, OUTPUT);    
  pinMode(led8, OUTPUT);     
  pinMode(trans1, OUTPUT);    
  pinMode(trans2, OUTPUT); 
  pinMode(trans3, OUTPUT);
  
}
//********** Loop *****************************************************************
void loop()
{
  
  digitalWrite(led0, HIGH);      
  digitalWrite(trans1, HIGH); 
  
    delay (400);
   
  digitalWrite(led1, HIGH);    
  digitalWrite(led0, LOW);      
  
    delay (400);
  
  digitalWrite(led2, HIGH);     
  digitalWrite(led1, LOW);     

    delay (400);
  
  digitalWrite(led3, HIGH);     
  digitalWrite(led2, LOW);     
  
    delay (400);
   
  digitalWrite(led4, HIGH);     
  digitalWrite(led3, LOW);     

    delay (400);
   
  digitalWrite(led5, HIGH); 
  digitalWrite(led4, LOW);
  
    delay (400);
   
  digitalWrite(led6, HIGH);     
  digitalWrite(led5, LOW);   

    delay (400);

  
  digitalWrite(led7, HIGH);    
  digitalWrite(led6, LOW);    

    delay (400);

  digitalWrite(led7, LOW);     
  digitalWrite(led8, HIGH);     
  
    delay (400);
    
  digitalWrite(led8, LOW);     
  digitalWrite(trans1, LOW);
     

   delay (400);

 digitalWrite(led0, HIGH);      
  digitalWrite(trans2, HIGH); 
  
    delay (400);
   
  digitalWrite(led1, HIGH);    
  digitalWrite(led0, LOW);      
  
    delay (400);
  
  digitalWrite(led2, HIGH);     
  digitalWrite(led1, LOW);     

    delay (400);
  
  digitalWrite(led3, HIGH);     
  digitalWrite(led2, LOW);     
  
    delay (400);
   
  digitalWrite(led4, HIGH);     
  digitalWrite(led3, LOW);     

    delay (400);
   
  digitalWrite(led5, HIGH); 
  digitalWrite(led4, LOW);
  
    delay (400);
   
  digitalWrite(led6, HIGH);     
  digitalWrite(led5, LOW);   

    delay (400);

  
  digitalWrite(led7, HIGH);    
  digitalWrite(led6, LOW);    

    delay (400);

  digitalWrite(led7, LOW);     
  digitalWrite(led8, HIGH);     
  
    delay (400);
    
  digitalWrite(led8, LOW);     
  digitalWrite(trans2, LOW);
     

   delay (400);

  digitalWrite(led0, HIGH);      
  digitalWrite(trans3, HIGH); 
  
    delay (400);
   
  digitalWrite(led1, HIGH);    
  digitalWrite(led0, LOW);      
  
    delay (400);
  
  digitalWrite(led2, HIGH);     
  digitalWrite(led1, LOW);     

    delay (400);
  
  digitalWrite(led3, HIGH);     
  digitalWrite(led2, LOW);     
  
    delay (400);
   
  digitalWrite(led4, HIGH);     
  digitalWrite(led3, LOW);     

    delay (400);
   
  digitalWrite(led5, HIGH); 
  digitalWrite(led4, LOW);
  
    delay (400);
   
  digitalWrite(led6, HIGH);     
  digitalWrite(led5, LOW);   

    delay (400);

  
  digitalWrite(led7, HIGH);    
  digitalWrite(led6, LOW);    

    delay (400);

  digitalWrite(led7, LOW);     
  digitalWrite(led8, HIGH);     
  
    delay (400);
    
  digitalWrite(led8, LOW);     
  digitalWrite(trans3, LOW);
     
}
   

    
  


//********** Funcions *************************************************************
