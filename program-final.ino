//Arduino Code designed for the project 
int sensA,sensB,thresh,ctr,n; 
int units,tens; 
int gx=0,fx=1,ax=2,bx=3,ex=4,dx=5,cx=6;        
int g=7,f=8,a=9,b=10,e=11,d=12,c=13;           
int onex() 
{ digitalWrite(a,0); digitalWrite(b,0); 
  digitalWrite(c,0);  digitalWrite(d,0); 
  digitalWrite(e,0);  digitalWrite(f,0); 
  digitalWrite(g,0);  digitalWrite(ax,0); 
  digitalWrite(bx,1);  digitalWrite(cx,1); 
  digitalWrite(dx,0);  digitalWrite(ex,0); 
  digitalWrite(fx,0);  digitalWrite(gx,0); 
} 
int twox() 
{  digitalWrite(a,0);  digitalWrite(b,0); 
  digitalWrite(c,0);  digitalWrite(d,0); 
  digitalWrite(e,0);  digitalWrite(f,0); 
  digitalWrite(g,0);  digitalWrite(ax,1); 
  digitalWrite(bx,1);  digitalWrite(cx,0); 
  digitalWrite(dx,1);  digitalWrite(ex,1); 
  digitalWrite(fx,0);  digitalWrite(gx,1); 
} 
int threex() 
{ 
  digitalWrite(a,0);  digitalWrite(b,0); 
  digitalWrite(c,0);  digitalWrite(d,0); 
  digitalWrite(e,0);  digitalWrite(f,0); 
  digitalWrite(g,0);  digitalWrite(ax,1); 
  digitalWrite(bx,1);  digitalWrite(cx,1); 
  digitalWrite(dx,1);  digitalWrite(ex,0); 
  digitalWrite(fx,0);  digitalWrite(gx,1); 
} 
int fourx() 
{ 
  digitalWrite(a,0);  digitalWrite(b,0); 
  digitalWrite(c,0);  digitalWrite(d,0); 
  digitalWrite(e,0);  digitalWrite(f,0); 
  digitalWrite(g,0);  digitalWrite(ax,0); 
  digitalWrite(bx,1);  digitalWrite(cx,1); 
  digitalWrite(dx,0);  digitalWrite(ex,0); 
  digitalWrite(fx,1);  digitalWrite(gx,1); 
} 
int fivex() 
{ 
  digitalWrite(a,0);  digitalWrite(b,0); 
  digitalWrite(c,0);  digitalWrite(d,0); 
  digitalWrite(e,0);  digitalWrite(f,0); 
  digitalWrite(g,0);  digitalWrite(ax,1); 
  digitalWrite(bx,0);  digitalWrite(cx,1); 
  digitalWrite(dx,1);  digitalWrite(ex,0); 
  digitalWrite(fx,1);  digitalWrite(gx,1); 
}  
int sixx() 
{ 
  digitalWrite(a,0);  digitalWrite(b,0); 
  digitalWrite(c,0);  digitalWrite(d,0); 
  digitalWrite(e,0);  digitalWrite(f,0); 
  digitalWrite(g,0);  digitalWrite(ax,1); 
  digitalWrite(bx,0);  digitalWrite(cx,1); 
  digitalWrite(dx,1);  digitalWrite(ex,1); 
  digitalWrite(fx,1);  digitalWrite(gx,1); 
} 
int sevenx() 
{ 
  digitalWrite(a,0);  digitalWrite(b,0); 
  digitalWrite(c,0);  digitalWrite(d,0); 
  digitalWrite(e,0);  digitalWrite(f,0); 
  digitalWrite(g,0);  digitalWrite(ax,1); 
  digitalWrite(bx,1);  digitalWrite(cx,1); 
  digitalWrite(dx,0);  digitalWrite(ex,0); 
  digitalWrite(fx,0);  digitalWrite(gx,0); 
}  
int eightx() 
{ 
  digitalWrite(a,0);  digitalWrite(b,0); 
  digitalWrite(c,0);  digitalWrite(d,0); 
  digitalWrite(e,0);  digitalWrite(f,0); 
  digitalWrite(g,0);  digitalWrite(ax,1); 
  digitalWrite(bx,1);  digitalWrite(cx,1); 
  digitalWrite(dx,1);  digitalWrite(ex,1); 
  digitalWrite(fx,1);  digitalWrite(gx,1); 
}  
int ninex() 
{ 
  digitalWrite(a,0);  digitalWrite(b,0); 
  digitalWrite(c,0);  digitalWrite(d,0); 
  digitalWrite(e,0);  digitalWrite(f,0); 
  digitalWrite(g,0);  digitalWrite(ax,1); 
  digitalWrite(bx,1);  digitalWrite(cx,1); 
  digitalWrite(dx,1);  digitalWrite(ex,0); 
  digitalWrite(fx,1);  digitalWrite(gx,1); 
} 
int zerox() 
{ 
  digitalWrite(a,0);  digitalWrite(b,0); 
  digitalWrite(c,0);  digitalWrite(d,0); 
 digitalWrite(e,0);  digitalWrite(f,0); 
 digitalWrite(g,0);  digitalWrite(ax,1); 
 digitalWrite(bx,1);  digitalWrite(cx,1); 
 digitalWrite(dx,1);  digitalWrite(ex,1); 
 digitalWrite(fx,1);  digitalWrite(gx,0); 
} 
int one() 
{ 
digitalWrite(ax,0); digitalWrite(bx,0); 
digitalWrite(cx,0); digitalWrite(dx,0); 
digitalWrite(ex,0); digitalWrite(fx,0); 
digitalWrite(gx,0); digitalWrite(a,0); 
digitalWrite(b,1); digitalWrite(c,1); 
digitalWrite(d,0); digitalWrite(e,0); 
digitalWrite(f,0); digitalWrite(g,0); 
} 
int two() 
{ 
  digitalWrite(ax,0);  digitalWrite(bx,0); 
 digitalWrite(cx,0);  digitalWrite(dx,0); 
 digitalWrite(ex,0);  digitalWrite(fx,0); 
 digitalWrite(gx,0);  digitalWrite(a,1); 
 digitalWrite(b,1);  digitalWrite(c,0); 
 digitalWrite(d,1);  digitalWrite(e,1); 
 digitalWrite(f,0);  digitalWrite(g,1); 
} 
int three() 
{ 
 digitalWrite(ax,0);  digitalWrite(bx,0); 
 digitalWrite(cx,0);  digitalWrite(dx,0); 
 digitalWrite(ex,0);  digitalWrite(fx,0); 
 digitalWrite(gx,0);  digitalWrite(a,1); 
 digitalWrite(b,1);  digitalWrite(c,1); 
 digitalWrite(d,1);  digitalWrite(e,0); 
 digitalWrite(f,0);  digitalWrite(g,1); 
} 
int four() 
{ 
 digitalWrite(ax,0);  digitalWrite(bx,0); 
 digitalWrite(cx,0);  digitalWrite(dx,0); 
 digitalWrite(ex,0);  digitalWrite(fx,0); 
 digitalWrite(gx,0);  digitalWrite(a,0); 
 digitalWrite(b,1);  digitalWrite(c,1); 
 digitalWrite(d,0);  digitalWrite(e,0); 
 digitalWrite(f,1);  digitalWrite(g,1); 
} 
int five() 
{ 
  digitalWrite(ax,0);  digitalWrite(bx,0); 
 digitalWrite(cx,0);  digitalWrite(dx,0); 
 digitalWrite(ex,0);  digitalWrite(fx,0); 
 digitalWrite(gx,0);  digitalWrite(a,1); 
 digitalWrite(b,0);  digitalWrite(c,1); 
 digitalWrite(d,1);  digitalWrite(e,0); 
 digitalWrite(f,1);  digitalWrite(g,1); 
} 
int six() 
{ 
  digitalWrite(ax,0); digitalWrite(bx,0); 
 digitalWrite(cx,0); digitalWrite(dx,0); 
 digitalWrite(ex,0); digitalWrite(fx,0); 
 digitalWrite(gx,0); digitalWrite(a,1); 
 digitalWrite(b,0); digitalWrite(c,1); 
 digitalWrite(d,1); digitalWrite(e,1); 
 digitalWrite(f,1); digitalWrite(g,1); 
} 
int seven() 
{ 
  digitalWrite(ax,0);  digitalWrite(bx,0); 
 digitalWrite(cx,0); digitalWrite(dx,0); 
 digitalWrite(ex,0); digitalWrite(fx,0); 
 digitalWrite(gx,0); digitalWrite(a,1); 
 digitalWrite(b,1); digitalWrite(c,1); 
 digitalWrite(d,0); digitalWrite(e,0); 
 digitalWrite(f,0); digitalWrite(g,0); 
} 
int eight() 
{ 
digitalWrite(ax,0); digitalWrite(bx,0); 
digitalWrite(cx,0); digitalWrite(dx,0); 
digitalWrite(ex,0); digitalWrite(fx,0); 
digitalWrite(gx,0); digitalWrite(a,1); 
digitalWrite(b,1); digitalWrite(c,1); 
digitalWrite(d,1); digitalWrite(e,1); 
digitalWrite(f,1); digitalWrite(g,1); 
} 
int nine() 
{ 
digitalWrite(ax,0); digitalWrite(bx,0); 
digitalWrite(cx,0); digitalWrite(dx,0); 
digitalWrite(ex,0); digitalWrite(fx,0); 
digitalWrite(gx,0); digitalWrite(a,1); 
digitalWrite(b,1); digitalWrite(c,1); 
digitalWrite(d,1); digitalWrite(e,0); 
digitalWrite(f,1); digitalWrite(g,1); 
} 
int zero() 
{ 
digitalWrite(ax,0); digitalWrite(bx,0); 
digitalWrite(cx,0); digitalWrite(dx,0); 
digitalWrite(ex,0); digitalWrite(fx,0); 
digitalWrite(gx,0); digitalWrite(a,1); 
digitalWrite(b,1); digitalWrite(c,1); 
digitalWrite(d,1); digitalWrite(e,1); 
digitalWrite(f,1); digitalWrite(g,0); 
} 
void setup() 
{ 
 pinMode(0,OUTPUT); pinMode(1,OUTPUT); 
 pinMode(2,OUTPUT); pinMode(3,OUTPUT); 
 pinMode(4,OUTPUT); pinMode(5,OUTPUT); 
 pinMode(6,OUTPUT); pinMode(7,OUTPUT); 
 pinMode(8,OUTPUT); pinMode(9,OUTPUT); 
 pinMode(10,OUTPUT); pinMode(11,OUTPUT); 
 pinMode(12,OUTPUT); pinMode(13,OUTPUT); 
 Serial.begin(9600); 
} 
void loop() 
{ 
int n=0; 
   sensA=analogRead(A0);    
  sensB=analogRead(A1); 
  thresh=500; 
if(sensA>thresh&&sensB<thresh) 
   {ctr++;delay(n);  
  } 
 
  if(sensA<thresh&&sensB>thresh) 
  {    ctr--;        delay(n); 
  } 
  if(sensA>thresh||sensB>thresh) 
  {    sensA=0;    sensB=0;    delay(n+500); 
    n=millis(); 
  } 
        units=ctr%10;                                // GET UNITS AND TENS DIGITS OF COUNTER 
        tens=ctr/10; 
if(units==0) 
  zero(); 
if(units==1) 
one(); 
if(units==2) 
  two(); 
if(units==3) 
  three();  
if(units==4) 
  four(); 
if(units==5) 
  five(); 
if(units==6) 
  six(); 
if(units==7) 
  seven(); 
if(units==8) 
  eight(); 
if(units==9) 
  nine(); 
if(tens==0) 
  zerox(); 
if(tens==1) 
  onex(); 
if(tens==2) 
  twox(); 
if(tens==3) 
  threex(); 
if(tens==4) 
  fourx(); 
if(tens==5) 
  fivex(); 
if(tens==6) 
  sixx(); 
if(tens==7) 
  sevenx(); 
if(tens==8) 
  eightx(); 
if(tens==9) 
  ninex();}} 