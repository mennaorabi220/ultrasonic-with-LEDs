 #define trig 10
#define echo 11
long d,t;
int c=0;
void setup()
{
 pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
 pinMode(3,OUTPUT);
   pinMode(5,OUTPUT);
   pinMode(6,OUTPUT);
   pinMode(9,OUTPUT);
  
}

void loop()
{
 digitalWrite(trig,0);
  delayMicroseconds(2);
  digitalWrite(trig,1);
  delayMicroseconds(10);
  digitalWrite(trig,0);
  t=pulseIn(echo,1);
  d=0.0343*(t/2);
  digitalWrite(3,1);
  if(d>=120){
   
    digitalWrite(5,1);}
  if(d<120){digitalWrite(5,0);}
   if(d>=220){
   
    digitalWrite(6,1);}
  if(d<220){digitalWrite(6,0);}
  if(d>=320){
   
    digitalWrite(9,1);}
  if(d<320){digitalWrite(9,0);}
  
}