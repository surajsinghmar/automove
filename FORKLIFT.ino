//ROGRAMMED BY SURAJ



int Speed = 250;
char t; 
 
      
void setup()
     {

pinMode(2,OUTPUT);  // left right motor pins 
pinMode(3,OUTPUT);   
pinMode(4,OUTPUT);   
pinMode(5,OUTPUT); 
     
pinMode(6,OUTPUT);  // up down motor pins 
pinMode(8,OUTPUT);

pinMode(13,OUTPUT); // LIGHTS  

               /* FOR FUTURE */
    
        /* NOTHING IS CONNECTED NOW  */
       /*TO PIN NUMBER 9 10 11 AND 12*/

    pinMode(9,OUTPUT);     
    pinMode(10,OUTPUT);
    pinMode(11,OUTPUT);
    pinMode(12,OUTPUT);
    
    

     
Serial.begin(9600);    // baud rate
 
}


 
void loop ()
 
{  

   if(Serial.available())
{
    t = Serial.read();
        
    Serial.println(t);

switch (t) {
            case 'F':      //FRONT
            forward();
            break;   
                 
            case 'S':
            stop();
            break;
            
            case 'B':
            backward();
            break;
            
            case 'L':
            left();
            break;
            
            case 'R':
            right();
            break; 
            
            case 'W':
            up();
            break;
            
            case 'w':
            stop();
            break;
             
            case 'U':
            down();
            break;
            
            case 'u':
            stop();
            break;
            
            case 'V':
            digitalWrite(13,HIGH);
            break;
            
            case 'v':
            digitalWrite(13,HIGH);
            break;
            
/* PATH 1 */ case 'X':
            
            forward();       //forward
            delay(3000);
            stop();
            delay(5);
            right();        // to adjust path
            delay(90);
            stop();
            
            forward();     // continue 
            delay(3000);
            stop();
            delay(50);
            
            right();       //right
            delay(1000);
            stop();
            delay(50);    
           
            forward();     // forward
            delay(2000);
            stop();
            delay(500);   // longer delay in stop 
           
             up();         // lift up
            delay(600);
            stop();
            delay(50);
            
            backward();    //Reverse
            delay(1000);
            stop();
            delay(50);
            
            right();      // Right 
            delay(1000);
            stop();
            delay(50);
            
            forward();     // Forward
            delay(3000);
            stop();
            delay(500);   // stop for a while
            
            down();         // down
            delay(600);
            stop();
            delay(50);
            
            backward();    //Reverse
            delay(1000);
            stop();
            delay(50);
            
            break;         
  }                             
 } 
}
void forward()

    
    {   digitalWrite(5,Speed);
        digitalWrite(2,Speed);
       
       
}
void backward()
    {  
        digitalWrite(4,Speed);
        digitalWrite(3,Speed);
}

void left()
    {
  
        digitalWrite(3,Speed);
        digitalWrite(5,Speed);  
        
}
void right()
    {

        digitalWrite(4,Speed);
        digitalWrite(2,Speed);
        
}
void up()
    {

        digitalWrite(6,Speed);
       
        
}
void down()
    {

        digitalWrite(8,Speed);
      
        
}
 

void stop()
    {
  digitalWrite(5,LOW); //forward right 
  digitalWrite(4,LOW); //reverse right
  digitalWrite(3,LOW); //forward left
  digitalWrite(2,LOW); //reverse left
  
    digitalWrite(6,LOW); //lift up
    digitalWrite(8,LOW); //lift down
    
    
}