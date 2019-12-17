int lpin = 13;
int i;
int j;
char a[50] = {'H','E','L','L','O'};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:


for(j=0;a[j]!="\n";i++)
{
  if(a[j]=='H')
  {
    H();
  }
  else if(a[j] == 'E')
  {
    E();
  }
  else if(a[j] == 'L')
  {
    L();
  }
  else if(a[j]=='O')
  {
    O();
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
  for(i=0;i<1;i++)
  {
    shorttime();
  }
 }
 void f()
 {  
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
  for(i=0;i<4;i++)
  {
  shorttime();
  }
}
void I()
 {
  //I的摩斯密码
  for(i=0;i<2;i++)
  {
  shorttime();
  }
 }
void J()
{
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
  //  m的摩斯密码
 for(i=0;i<2;i++)
 {
  longtime();
 }
}
void N()
{
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
  //  O的摩斯密码
  for(i=0;i<3;i++)
  {
    longtime();
  }
 }
 void P()
 {
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
  //S的摩斯密码
for(i=0;i<3;i++)
{
  shorttime();
}
 }
 void T()
 {
  //T的摩斯密码
for(i=0;i<1;i++)
{
  longtime();
}
 }
 void U()
 {
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

