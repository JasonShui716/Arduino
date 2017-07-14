int in3=4;
int in4=7;
int spe=10;//ena接前面
int val;
#define dwq A0
void setup(){
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(dwq,INPUT);
 pinMode(spe,OUTPUT);
  Serial.begin(9600);
}

void loop(){
 val=analogRead(dwq)/4;
  Serial.println(val);
  analogWrite(spe,val);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
}
