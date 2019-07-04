void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int input,i;
  int letter[10][4]={{0,0,0,0},{0,0,0,1},{0,0,1,0},{0,0,1,1},{0,1,0,0},
  {0,1,0,1},{0,1,1,0},{0,1,1,1},{1,0,0,0},{1,0,0,1}};
  if(Serial.available()>0){
    input = Serial.read()-48;

    for(i=0;i<4;i++){
      digitalWrite(5-i,letter[input][i]);
    }
    delay(1000);
  }
}
