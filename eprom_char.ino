char data[100]="masih kosong",c;

void setup() {
 Serial.begin(9600);
 }

void loop() {
int ie=0;
while (Serial.available()) {
//Serial.print(ie);Serial.println(c);
  c=Serial.read(); data[ie]=c;
  /*
  if(c=='\0')Serial.println("ini terminat 0");
  if(c=='\n')Serial.println("ini terminat n");
  if(c=='\r')Serial.println("ini terminat r");  
  //*/
  if(c==';'){for (int i=ie;i<=100;i++){data[i]='\0';}ie=0;}
  if(c=='\r'){for (int i=ie;i<=100;i++){data[i]='\0';}}
  ie++;
  if(c=='\n')ie=0;
}
Serial.println(data);
delay(500);
} 
