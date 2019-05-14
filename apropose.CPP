#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void boycame();
void standing();
void propose();
void proposition();
void rose();
void givingrose();
void heart();
void last();
void main()
{
 int gm,gd=DETECT;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");

 boycame();
 standing();
 propose();
 proposition();
 rose();
 givingrose();
 heart();
 last();
 getch();
}
void boycame()
{
 int i;
 for(i=0;i<=40;i++)
 {
  circle(-20+i,100,30); //face
  line(-20+i,130,-20+i,200); //body
  line(-20+i,140,-40+i+i,190); //left hand
  line(-20+i,140,0,190); //right hand
  line(-20+i,200,-40+i+i,250);//left legs
  line(-20+i,200,0,250);  //right legs
  //girl
  circle(380+i-i,100,30); //face
  line(380+i-i,130,380+i-i,200); //body
  line(380+i-i,140,400+i-i,190); //left hand
  line(380+i-i,140,360+i-i,190); //right hand
  line(380+i-i,200,400+i-i,250);//left legs
  line(380+i-i,200,360+i-i,250);  //right legs

  delay(25);
  cleardevice();
 }
 for(i=0;i<=40;i++)
 {
  circle(20+i,100,30); //face
  line(20+i,130,20+i,200); //body
  line(20+i,140,40,190); //left hand
  line(20+i,140,0+i+i,190); //right hand
  line(20+i,200,40,250);//left legs
  line(20+i,200,0+i+i,250);  //right legs
  //girl
  circle(380+i-i,100,30); //face
  line(380+i-i,130,380+i-i,200); //body
  line(380+i-i,140,400+i-i,190); //left hand
  line(380+i-i,140,360+i-i,190); //right hand
  line(380+i-i,200,400+i-i,250);//left legs
  line(380+i-i,200,360+i-i,250);  //right legs

  delay(25);
  cleardevice();
 }
 for(i=0;i<=40;i++)
 {
  circle(60+i,100,30); //face
  line(60+i,130,60+i,200); //body
  line(60+i,140,40+i+i,190); //left hand
  line(60+i,140,80,190); //right hand
  line(60+i,200,40+i+i,250);//left legs
  line(60+i,200,80,250);  //right legs
  //girl
  circle(380+i-i,100,30); //face
  line(380+i-i,130,380+i-i,200); //body
  line(380+i-i,140,400+i-i,190); //left hand
  line(380+i-i,140,360+i-i,190); //right hand
  line(380+i-i,200,400+i-i,250);//left legs
  line(380+i-i,200,360+i-i,250);  //right legs

  delay(25);
  cleardevice();
 }
 for(i=0;i<=40;i++)
 {
  circle(100+i,100,30); //face
  line(100+i,130,100+i,200); //body
  line(100+i,140,120,190); //left hand
  line(100+i,140,80+i+i,190); //right hand
  line(100+i,200,120,250);//left legs
  line(100+i,200,80+i+i,250);  //right legs
  //girl
  circle(380+i-i,100,30); //face
  line(380+i-i,130,380+i-i,200); //body
  line(380+i-i,140,400+i-i,190); //left hand
  line(380+i-i,140,360+i-i,190); //right hand
  line(380+i-i,200,400+i-i,250);//left legs
  line(380+i-i,200,360+i-i,250);  //right legs

  delay(25);
  cleardevice();
 }
 for(i=0;i<=40;i++)
 {
  circle(140+i,100,30); //face
  line(140+i,130,140+i,200); //body
  line(140+i,140,120+i+i,190); //left hand
  line(140+i,140,160,190); //right hand
  line(140+i,200,120+i+i,250);//left legs
  line(140+i,200,160,250);  //right legs
  //girl
  circle(380+i-i,100,30); //face
  line(380+i-i,130,380+i-i,200); //body
  line(380+i-i,140,400+i-i,190); //left hand
  line(380+i-i,140,360+i-i,190); //right hand
  line(380+i-i,200,400+i-i,250);//left legs
  line(380+i-i,200,360+i-i,250);  //right legs

  delay(25);
  cleardevice();
 }
 for(i=0;i<=40;i++)
 {
  circle(180+i,100,30); //face
  line(180+i,130,180+i,200); //body
  line(180+i,140,200,190); //left hand
  line(180+i,140,160+i+i,190); //right hand
  line(180+i,200,200,250);//left legs
  line(180+i,200,160+i+i,250);  //right legs
  //girl
  circle(380+i-i,100,30); //face
  line(380+i-i,130,380+i-i,200); //body
  line(380+i-i,140,400+i-i,190); //left hand
  line(380+i-i,140,360+i-i,190); //right hand
  line(380+i-i,200,400+i-i,250);//left legs
  line(380+i-i,200,360+i-i,250);  //right legs

  delay(25);
  cleardevice();
 }
}
void standing()
{
 int i;
 for(i=0;i<=40;i++)
 {
  circle(220+i-i,100,30); //face
  line(220+i-i,130,220+i-i,200); //body
  line(220+i-i,140,200+i-i,190); //left hand
  line(220+i-i,140,240+i-i,190); //right hand
  line(220+i-i,200,200+i-i,250);//left legs
  line(220+i-i,200,240+i-i,250);  //right legs
  //girl
  circle(380+i-i,100,30); //face
  line(380+i-i,130,380+i-i,200); //body
  line(380+i-i,140,400+i-i,190); //left hand
  line(380+i-i,140,360+i-i,190); //right hand
  line(380+i-i,200,400+i-i,250);//left legs
  line(380+i-i,200,360+i-i,250);  //right legs

  delay(15);
  cleardevice();
 }
}
void propose()
{
 int i;
 for(i=0;i<=50;i++)
 {
  circle(220,100+i,30); //face
  line(220,130+i,220,200+i); //body
  line(220,140+i,200,190+i); //left hand
  line(220,140+i,240,190+i); //right hand
  line(220,200+i,200,250);//left legs
  line(220,200+(i/2),230+(i/4),225);  //right upper legs
  line(230+(i/4),225,240,250);  //right lower legs
  //girl
  circle(380+i-i,100,30); //face
  line(380+i-i,130,380+i-i,200); //body
  line(380+i-i,140,400+i-i,190); //left hand
  line(380+i-i,140,360+i-i,190); //right hand
  line(380+i-i,200,400+i-i,250);//left legs
  line(380+i-i,200,360+i-i,250);  //right legs

  delay(20);
  cleardevice();
 }
}
void proposition()
{
 int i;
 for(i=0;i<=16;i++)
 {
  circle(220,150+i-i,30); //face
  line(220,180+i-i,220,250+i-i); //body
  line(220,190+i-i,200,240+i-i); //left hand
  line(220,190+i-i,240,240+i-i); //right hand
  line(220,250+i-i,200,250+i-i);//left legs
  line(220,225+i-i,242,225+i-i);  //right upper legs
  line(242+i-i,225,240+i-i,250);  //right lower legs
  //girl
  circle(380+i-i,100,30); //face
  line(380+i-i,130,380+i-i,200); //body
  line(380,140,390-i,165); //left upper hand
  line(390-i,165,400-i-i,190); //left lower hand
  line(380,140,370,165); //right upper hand
  line(370,165,360,190); //left lower hand
  line(380+i-i,200,400+i-i,250);//left legs
  line(380+i-i,200,360+i-i,250);  //right legs

  delay(25);
  cleardevice();
 }
}
void rose()
{
 int i;
 for(i=0;i<=186;i++)
 {
  line(240,54+i,250,45+i);
  arc(254,42+i,95,340,6);
  line(253,34+i,250,46+i);
  line(260,46+i,250,44+i);
  circle(257,40+i,4);
  //boy
  circle(220,150+i-i,30); //face
  line(220,180+i-i,220,250+i-i); //body
  line(220,190+i-i,200,240+i-i); //left hand
  line(220,190+i-i,240,240+i-i); //right hand
  line(220,250+i-i,200,250+i-i);//left legs
  line(220,225+i-i,242,225+i-i);  //right upper legs
  line(242+i-i,225,240+i-i,250);  //right lower legs
  //girl
  circle(380+i-i,100,30); //face
  line(380+i-i,130,380+i-i,200); //body
  line(380,140,374,165); //left upper hand
  line(374,165,368,190+i-i); //left lower hand
  line(380,140,370,165+i-i); //right upper hand
  line(370,165,360,190+i-i); //left lower hand
  line(380+i-i,200,400+i-i,250);//left legs
  line(380+i-i,200,360+i-i,250);  //right legs

  delay(15);
  cleardevice();
 }
}
void givingrose()
{
 int i;
 for(i=0;i<=40;i++)
 {
  line(240,240+i-i,250,231+i-i);
  arc(254+i-i,228,95,340,6);
  line(253+i-i,220,250+i-i,232);
  line(260+i-i,232,250+i-i,230);
  circle(257+i-i,226,4);
  //boy
  circle(220,150+i-i,30); //face
  line(220,180+i-i,220,250+i-i); //body
  line(220,190+i-i,200+i,240+i-i); //left hand
  line(220,190+i-i,240,240+i-i); //right hand
  line(220,250+i-i,200,250+i-i);//left legs
  line(220,225+i-i,242,225+i-i);  //right upper legs
  line(242+i-i,225,240+i-i,250);  //right lower legs
  //girl
  circle(380+i-i,100,30); //face
  line(380+i-i,130,380+i-i,200); //body
  line(380,140,374,165); //left upper hand
  line(374,165,368,190+i-i); //left lower hand
  line(380,140,370,165+i-i); //right upper hand
  line(370,165,360,190+i-i); //left lower hand
  line(380+i-i,200,400+i-i,250);//left legs
  line(380+i-i,200,360+i-i,250);  //right legs

  delay(25);
  cleardevice();
 }
 for(i=0;i<=50;i++)
 {
  line(240+(i/2),240-i,250+(i/2),231-i);
  arc(254+(i/2),228-i,95,340,6);
  line(253+(i/2),220-i,250+(i/2),232-i);
  line(260+(i/2),232-i,250+(i/2),230-i);
  circle(257+(i/2),226-i,4);
  //boy
  circle(220,150+i-i,30); //face
  line(220,180+i-i,220,250+i-i); //body
  line(220,190,240+(i/2),240-i); //left hand
  line(220,190,240+(i/2),240-i); //right hand
  line(220,250+i-i,200,250+i-i);//left legs
  line(220,225+i-i,242,225+i-i);  //right upper legs
  line(242+i-i,225,240+i-i,250);  //right lower legs
  //girl
  circle(380+i-i,100,30); //face
  line(380+i-i,130,380+i-i,200); //body
  line(380,140,374,165); //left upper hand
  line(374,165,368,190+i-i); //left lower hand
  line(380,140,370,165+i-i); //right upper hand
  line(370,165,360,190+i-i); //left lower hand
  line(380+i-i,200,400+i-i,250);//left legs
  line(380+i-i,200,360+i-i,250);  //right legs

  delay(40);
  cleardevice();
 }
 for(i=0;i<=60;i++)
 {
  line(265,190+i-i,275,181);
  arc(279,178+i-i,95,340,6);
  line(278,170+i-i,275,182);
  line(285,182+i-i,275,180);
  circle(282,176-i+i,4);
  //boy
  circle(220,150+i-i,30); //face
  line(220,180+i-i,220,250+i-i); //body
  line(220,190,265,190+i-i); //left hand
  line(220,190,265,190+i-i); //right hand
  line(220,250,200,250+i-i);//left legs
  line(220,225,242,225+i-i);  //right upper legs
  line(242,225,240+i-i,250);  //right lower legs
  //girl
  circle(380+i-i,100,30); //face
  line(380+i-i,130,380+i-i,200); //body
  line(380,140,374,165); //left upper hand
  line(374,165,368+(i/6),190-i); //left lower hand
  line(380,140,370,165); //right upper hand
  line(370,165,360+(i/6),190-i); //left lower hand
  line(380+i-i,200,400+i-i,250);//left legs
  line(380+i-i,200,360+i-i,250);  //right legs

  delay(20);
  cleardevice();
 }
}
void heart()
{
 int i,j;
 for(j=0;j<=7;j++)
 {
  for(i=0;i<=10;i++)
  {
   line(265,190+i-i,275,181);
   arc(279,178+i-i,95,340,6);
   line(278,170+i-i,275,182);
   line(285,182+i-i,275,180);
   circle(282,176-i+i,4);
   //boy
   circle(220,150+i-i,30); //face
   line(220,180+i-i,220,250+i-i); //body
   line(220,190,265,190+i-i); //left hand
   line(220,190,265,190+i-i); //right hand
   line(220,250,200,250+i-i);//left legs
   line(220,225,242,225+i-i);  //right upper legs
   line(242,225,240+i-i,250);  //right lower legs
   //girl
   circle(380+i-i,100,30); //face
   line(380+i-i,130,380+i-i,200); //body
   line(380,140,374,165); //left upper hand
   line(374,165,378,130+i-i); //left lower hand
   line(380,140,370,165+i-i); //right upper hand
   line(370,165,370,130+i-i); //left lower hand
   line(380+i-i,200,400+i-i,250);//left legs
   line(380+i-i,200,360+i-i,250);  //right legs

   //heart
   arc(200,130,30,200,115+i);
   arc(400,125,-25,150,115+i);
   line(92-(i/2),170,300,360+(i/2));
   line(508+(i/2),170,300,360+(i/2));
   delay(50);
   cleardevice();
  }
 }
}
void last()
{
 int i,j;
 for(i=0;i<=500;i++)
  {
   for(j=0;j<=600;j++)
   {
    putpixel(0+j,0+i,RED);
    putpixel(0+i,0+j,RED);
    putpixel(600-i,0+j,RED);
    putpixel(0+j,500-i,RED);
   }
   line(265,190,275,181);
   arc(279,178,95,340,6);
   line(278,170,275,182);
   line(285,182,275,180);
   circle(282,176,4);
   //boy
   circle(220,150,30); //face
   line(220,180,220,250); //body
   line(220,190,265,190); //left hand
   line(220,190,265,190); //right hand
   line(220,250,200,250);//left legs
   line(220,225,242,225);  //right upper legs
   line(242,225,240,250);  //right lower legs
   //girl
   circle(380,100,30); //face
   line(380,130,380,200); //body
   line(380,140,374,165); //left upper hand
   line(374,165,378,130); //left lower hand
   line(380,140,370,165); //right upper hand
   line(370,165,370,130); //left lower hand
   line(380,200,400,250);//left legs
   line(380,200,360,250);  //right legs

   //heart
   arc(200,130,30,200,115);
   arc(400,125,-25,150,115);
   line(92,170,300,360);
   line(508,170,300,360);
   delay(8);
  }
}