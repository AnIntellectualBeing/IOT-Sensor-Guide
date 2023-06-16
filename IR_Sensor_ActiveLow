//made by anintellectualbeing

const int IR_Sensor = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(IR_Sensor,INPUT);
}

void loop(){
  // put your main code here, to run repeatedly:
  int IR_State = digitalRead(IR_Sensor);

  if(IR_State == LOW){
    Serial.println("Obstacle detected");
  }else{
    Serial.println("No Obstacle");
  }
  delay(100);
}

//@instagram: @an.intellectaul.being // youtube : https://www.youtube.com/@AnIntellectualBeing
