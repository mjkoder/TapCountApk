#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void shoot();
void shootagain();
void area();
void explode(int,int,int);
void main()
{
int gm,gd=DETECT;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
shoot();
getch();
closegraph();
}
void shoot()
{
int i=0;
int x=0,y=480,x1=15,y1=460;
while(i<350)
{
area();
line(x+i,y-i,x1+i,y1-i);
delay(50);
i=i+10;
cleardevice();
}
explode(x+350,y-350,5);
shootagain();
}


void shootagain()
{
int i=0;
int x=600,y=480,x1=585,y1=460;
while(i<250)
{
setcolor(15);
area();
line(x-i,y-i,x1-i,y1-i);
delay(30);
i=i+10;
cleardevice();
}
explode(x-300,y-300,5);
}

void explode(int x,int y,int r)
{
int k,j,interval=0;
for(k=0;k<2;k++)
{
interval=interval+50;
for(j=0;j<interval;j++)
{
area();
setcolor(BLACK);
setcolor(rand()/15);
// horizontal left and right
circle(x+j,y,r+k);
circle(x-j,y,r+k);
//vertical up and down
circle(x,y+j,r+k);
circle(x,y-j,r+k);
//slighten down
circle(x+j,y+j,r+k);
circle(x-j,y-j,r+k);
//slighten up
circle(x-j,y+j,r+k);
circle(x+j,y-j,r+k);
delay(30);
cleardevice();
}
}
}
void area()
{
//Area
setcolor(15);
line(0,350,600,350);
rectangle(0,350,100,150);
rectangle(40,350,60,300);
rectangle(10,170,30,200);
rectangle(70,170,90,200);
rectangle(10,230,30,260);
rectangle(70,230,90,260);

rectangle(100,350,180,250);
line(100,250,140,180);
line(180,250,140,180);
rectangle(110,280,130,300);
rectangle(150,280,170,300);
rectangle(130,350,160,330);

rectangle(180,350,350,300);
rectangle(190,310,220,330);
rectangle(340,310,310,330);

rectangle(370,350,440,150);
rectangle(385,350,405,300);
rectangle(380,170,400,200);
rectangle(410,170,430,200);
rectangle(380,230,400,260);
rectangle(410,230,430,260);
settextstyle(BOLD_FONT,HORIZ_DIR,1);
outtextxy(110,50,"HAPPY NEW YEAR");
}