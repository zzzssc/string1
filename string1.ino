int lpin = 13;
int j;
char a[50] = {'H','E','L','L','O'};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:


for(j=0;a[j]!='\n';j++)
{
  if(a[j] == 'A' || a[j] == 'a')
  {
    A();
  }
  else if(a[j] == 'B' ||a[j] == 'b')
  {
    B();
  }
  else if(a[j] == 'C' || a[j] == 'c')
  {
    C();
  }
  else if(a[j] == 'D' || a[j] == 'd')
  {
    D();
  }
  else if(a[j] == 'E' || a[j] == 'e')
  {
    E();
  }
  else if(a[j] == 'F' || a[j] =='f')
  {
    f();
  }
  else if(a[j] == 'G' || a[j] == 'g')
  {
    G();
  }
  else if(a[j] == 'H' || a[j] == 'h')
  {
    H();
  }
  else if(a[j] == 'I' || a[j] == 'i')
  {
    I();
  }
  else if(a[j] == 'J' || a[j] == 'j')
  {
    J();
  }
  else if(a[j] == 'K' || a[j] == 'k')
  {
    K();
  }
  else if(a[j] == 'L' || a[j] == 'l')
  {
    L();
  }
  else if(a[j] == 'M' || a[j] == 'm')
  {
    M();
  }
  else if(a[j] == 'N' || a[j] == 'n')
  {
    N();
  }
  else if(a[j] == 'O' || a[j] == 'o')
  {
    O();
  }
  else if(a[j] == 'P' || a[j] == 'p')
  {
    P();
  }
  else if(a[j] == 'Q' || a[j] == 'q')
  {
    Q();
  }
  else if(a[j] == 'R' || a[j] == 'r')
  {
    R();
  }
  else if(a[j] == 'S' || a[j] == 's')
  {
    S();
  }
  else if(a[j] == 'T' || a[j] == 't')
  {
    T();
  }
  else if(a[j] == 'U' || a[j] == 'u')
  {
    U();
  }
  else if(a[j] == 'V' || a[j] == 'v')
  {
    V();
  }
  else if(a[j] == 'W' || a[j] == 'w')
  {
    W();
  }
  else if(a[j] == 'X' || a[j] == 'x')
  {
    X();
  }
  else if(a[j] == 'Y' || a[j] == 'y')
  {
    Y();
  }
  else if(a[j] == 'Z' || a[j] == 'z')
  {
    Z();
  }
}

}

void longtime()
 {
   digitalWrite(lpin,HIGH);
   delay(1000);
   digitalWrite(lpin,LOW);
   delay(900);
 }
void shorttime()
 {
  digitalWrite(lpin,HIGH);
  delay(500);
  digitalWrite(lpin,LOW);
  delay(200);
 }
void A()
{
  int i;
  for(i=0;i<2;i++)
  {
    if(i==0)
    {
    shorttime();
    }
   else
    {
    longtime();
    }
  }
}
void B()
{
  int i;
   for(i=0;i<4;i++)
   {
    if(i==0)
    {
      longtime();
    }
    else
    {
      shorttime();
    }
   }
}
void C()
{
  int i;
   for(i=0;i<4;i++)
   {
    if(i==0||i==2)
    {
      longtime();
    }
    else
    {
      shorttime();
    }
  }
}
void D()
{
  int i;
   for(i=0;i<3;i++)
   {
     if(i==0)
      {
      longtime();
      }
     else
     {
      shorttime();
     }
   }
}
 void E()
 {
  int i;
  for(i=0;i<1;i++)
  {
    shorttime();
  }
 }
 void f()
 {  
  int i;
//  F的摩斯密码
  for(i=0;i<4;i++)
  {
    if(i==3)
    {
      longtime();
    }
    else
    {
      shorttime();
    }
  }
 }
 void  G()
 {
  int i;
    //  G的摩斯密码
  for(i=0;i<3;i++)
  {
    if(i==2)
    {
      shorttime();
    }
    else
    {
      longtime();
    }
  }
 }
void H()
{
  int i;
  for(i=0;i<4;i++)
  {
  shorttime();
  }
}
void I()
 {
  int i;
  //I的摩斯密码
  for(i=0;i<2;i++)
  {
  shorttime();
  }
 }
void J()
{
  int i;
   //J的摩斯密码
for(i=0;i<4;i++)
{
  if(i==0)
  {
    shorttime();
  }
  else 
  {
    longtime();
  }
 }
}
void K()
{
  int i;
  // k的摩斯密码
  for(i=0;i<3;i++)
  {
   if(i==1)
   {
     shorttime();
   }
   else
   {
    longtime();
   }
  }
}
void L()
{
  int i;
  //  L的摩斯密码
  for(i=0;i<4;i++)
  {
    if(i==2)
    {
      longtime();
    }
    else
    {
      shorttime();
    }
  }
}
void M()
{
  int i;
  //  m的摩斯密码
 for(i=0;i<2;i++)
 {
  longtime();
 }
}
void N()
{
  int i;
  //n的摩斯密码
 for(i=0;i<2;i++)
 {
  if(i==0)
  {
    longtime();
  }
  else
  {
    shorttime();
  }
 }
}
 void O()
 {
  int i;
  //  O的摩斯密码
  for(i=0;i<3;i++)
  {
    longtime();
  }
 }
 void P()
 {
  int i;
  //  P的摩斯密码
for(i=0;i<4;i++)
{
  if(i==0||i==3)
  {
    shorttime();
  }
  else
  {
    longtime();
  }
}
 }
 void Q()
 {
  int i;
//Q的摩斯密码
for(i=0;i<4;i++)
{
  if(i==3)
  {
    shorttime();
  }
  else
  {
    longtime();
  }
}
 }
 void R()
 {
  int i;
  //R的摩斯密码
for(i=0;i<3;i++)
{
  if(i==1)
  {
    longtime();
  }
  else
  {
    shorttime();
  }
}
 }
 void S()
 {
  int i;
  //S的摩斯密码
for(i=0;i<3;i++)
{
  shorttime();
}
 }
 void T()
 {
  int i;
  //T的摩斯密码
for(i=0;i<1;i++)
{
  longtime();
}
 }
 void U()
 {
  int i;
  //U的摩斯密码
for(i=0;i<3;i++)
{
  if(i==2)
  {
    longtime();
  }
  else
  {
    shorttime();
  }
}
 }
 void V()
 {
  int i;
  //V的摩斯密码
for(i=0;i<4;i++)
{
  if(i==3)
  {
    longtime();
  }
  else
  {
    shorttime();
  }
}
 }
 void W()
 {
  int i;
  //W的摩斯密码
for(i=0;i<3;i++)
{
  if(i==0)
  {
    shorttime();
  }
  else
  {
    longtime();
  }
}
 }
 void X()
 {
  int i;
  //X的摩斯密码
for(i=0;i<4;i++)
{
  if(i==1||i==2)
  {
    shorttime();
  }
  else
  {
    longtime();
  }
}
 }
void Y()
{
  int i;
  //Y的摩斯密码
  for(i=0;i<4;i++)
   {
    if(i==1)
    {
    shorttime();
    }
    else
    {
    longtime();
    }
  }
}
void Z()
{
  int i;
  for(i=0;i<3;i++)
  {
    if(i==2)
    {
    shorttime();
    }
   else
    {
    longtime();
    }
  }
}
