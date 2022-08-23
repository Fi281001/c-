#include<stdio.h>

#include<graphics.h>

#include<conio.h>

#include<stdlib.h>

#include<dos.h>

#define R 7

#define MAU YELLOW

#define MAUNEN BLACK

#define CHAM 6

void bong();

void main()

{int gdrv=DETECT,gmode,errorcode;

initgraph(&gdrv,&gmode,"..//BGI");

errorcode=graphresult();

if (errorcode!=grOk)

{printf("Graphics error : %s\n",grapherrormsg(errorcode));

printf("Press any key to halt ...");

getch();

exit(1);

}

bong();

closegraph();

}

void bong()

{int mx,my,dx,dy,x,y,d=0;

randomize();

do

{dx=random(3)-1;

}while (!dx);

do

{dy=random(3)-1;

}while (!dy);

mx=getmaxx(); my=getmaxy();

x=mx/2;y=my/2;

rectangle(0,0,mx,my);

do

{setcolor(MAU);

setfillstyle(1,MAU);

fillellipse(x,y,R,R);

delay(CHAM);

setcolor(MAUNEN);

setfillstyle(1,MAUNEN);

fillellipse(x,y,R,R);

x+=dx; y+=dy;

if (x<R+1||x>mx-R-1)

{dx=-dx;

x+=2*dx;

d=1;

}

if (y<R+1||y>my-R-1)

{dy=-dy;

y+=2*dy;

d=1;

}

}while (!kbhit());

}
