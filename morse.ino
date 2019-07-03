char Morse[][4] = {
  {'.','-'}, //a
  {'-','.','.','.'}, //b
  {'-','.','-','.'}, //c
  {'-','.','.'}, //d
  {'.'}, //e
  {'.','.','-','.'}, //f
  {'-','-','.'}, //g
  {'.','.','.','.'}, //h
  {'.','.'}, //i
  {'.','-','-','-'}, //j
  {'-','.','-'}, //k
  {'.','-','.','.'}, //l
  {'-','-'}, //m
  {'-','.'}, //n
  {'-','-','-'}, //o
  {'.','-','-','.'}, //p
  {'-','-','.','-'}, //q
  {'.','-','.'}, //r
  {'.','.','.'}, //s
  {'-'}, //t
  {'.','.','-'}, //u
  {'.','.','.','-'}, //v
  {'.','-','-'}, //w
  {'-','.','.','-'}, //x
  {'-','-','.','-'}, //y
  {'-','-','.','.'} //z
};

void setup() {
  Serial.begin(9600);
}

void loop() {
  String unclear_str = "";
  String translate_str = "";
  int i,t,temp = 0;
  int n = 0;
  while(Serial.available() > 0){
    temp += 1;
    unclear_str += char(Serial.read());
    delay(2);
    n++;
  }

  if(temp){
    for(i = 0; i < n; i++){
      for(t = 0; t < strlen(Morse[int(unclear_str[i]-97)]); t++){
        translate_str += char(Morse[int(unclear_str[i]-97)][t]);
      }
      translate_str += ' '; 
      }
    Serial.println(translate_str);
    }
   delay(2);
}
