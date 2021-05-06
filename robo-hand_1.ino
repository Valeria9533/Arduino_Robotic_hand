// подключаем библиотеку для работы с сервоприводами
#include <Servo.h> 

// создаём объект для управления сервоприводом
Servo myservo_1;
Servo myservo_2;
Servo myservo_3;
Servo myservo_4;

const int flexPin_1 = A0;       //резистор изгиба
const int flexPin_2 = A1;
const int flexPin_3 = A2;
const int flexPin_4 = A3;

void setup() 
{
  Serial.begin(9600);
  // подключаем сервоприводы к пинам
  myservo_1.attach(11);
  myservo_2.attach(10);
  myservo_3.attach(9);
  myservo_4.attach(6);
} 
 
void loop() 
{
  int flexPosition_1;  
  int servoPosition_1;  
  
  int flexPosition_2;  
  int servoPosition_2;  
  
  int flexPosition_3;  
  int servoPosition_3;  
  
  int flexPosition_4;  
  int servoPosition_4;  

  flexPosition_1 = analogRead(flexPin_1); 

  if (flexPosition_1 < 200)
  servoPosition_1 = 180;
  else
  servoPosition_1 = 0;
  
  myservo_1.write(servoPosition_1);  
  Serial.print("sensor1: "); 
  Serial.print(flexPosition_1); 
  Serial.print(" servo1: "); 
  Serial.println(servoPosition_1);  

  flexPosition_2 = analogRead(flexPin_2); 

  if (flexPosition_2 < 200)
  servoPosition_2 = 180;
  else
  servoPosition_2 = 0;

  myservo_2.write(servoPosition_2);  
  Serial.print("sensor2: "); 
  Serial.print(flexPosition_2); 
  Serial.print(" servo2: "); 
  Serial.println(servoPosition_2);  

  flexPosition_3 = analogRead(flexPin_3); 
 
  //servoPosition = map(flexPosition, 990, 1005, 0, 180); 
  //servoPosition = constrain(servoPosition, 0, 180); //ограничиваем значение servoPosition диапазоном 0-90 градусов  
  if (flexPosition_3 < 200)
  servoPosition_3 = 180;
  else
  servoPosition_3 = 0;
  myservo_3.write(servoPosition_3);  
  Serial.print("sensor3: "); 
  Serial.print(flexPosition_3); 
  Serial.print(" servo3: "); 
  Serial.println(servoPosition_3);  

  flexPosition_4 = analogRead(flexPin_4); 
 
  //servoPosition = map(flexPosition, 990, 1005, 0, 180); 
  //servoPosition = constrain(servoPosition, 0, 180); //ограничиваем значение servoPosition диапазоном 0-90 градусов  
  if (flexPosition_4 < 200)
  servoPosition_4 = 180;
  else
  servoPosition_4 = 0;
  myservo_4.write(servoPosition_4);  
  Serial.print("sensor4: "); 
  Serial.print(flexPosition_4); 
  Serial.print(" servo4: "); 
  Serial.println(servoPosition_4); 
  
  delay(1000); 
} 
