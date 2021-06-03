// C++ code
//
#define A2 110
#define B2 123
#define C3 131
#define C3s 139
#define D3 147
#define D3s 156
#define E3 165
#define F3 175
#define F3s 185
#define G3 196
#define G3s 208
#define A3 220
#define A3s 233
#define B3 247
#define C4 262
int m[]={
A3,G3,F3s,0,F3s ,E3, D3,0,D3, E3,F3s,E3, 0,F3s,E3,0,
E3,F3s,G3,0,G3,E3,C3s,0,C3s,D3,E3,D3,0,E3,D3,0,
D3,D3,B3,0,B3,A3,G3,0,G3,B3,A3,0,
A3,F3s,D3,0,D3,E3,F3s,0,F3s,G3,F3s,0,
E3,D3,E3,0,A2,
};
int t[]={
  4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,4,4,
  4,4,4,4,4,4,4,4,2,4,
  3,
};
void setup()
{
  //pinMode(12, OUTPUT);
}

void loop()
{
  
  for(int i=0;i<61;i++){
  int td=800/t[i];
  tone(12,m[i],td);
    int pb=td*1.3;
    delay(pb);
    noTone(12);
  }
delay(200);

}
  