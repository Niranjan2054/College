#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main(){
	int gd=DETECT,gm;
	char a;
	short x=0,y=0,loop;
	initgraph(&gd,&gm,"C:\\turboc3\\bgi");
	while(x<=263&&y<=263){
		cleardevice();
		setbkcolor(14);
		setcolor(4);
		setfillstyle(1,5);
		bar(0,0,639,50);
		bar(0,420,639,479);
		bar(100,100,200,120);
		bar(400,100,500,120);
		setcolor(5);
		fillellipse(150,400-x,15,15);
		fillellipse(450,400-y,15,15);
		setlinestyle(SOLID_LINE,1,5);
		line(149,100,149,400-x);
		line(150,100,150,400-x);
		line(151,100,151,400-x);
		line(451,100,451,400-y);
		line(449,100,449,400-y);
		line(450,100,450,400-y);
		a=getch();
		if(a=='a'|| a =='A'){
			x++;
		}
		else if(a=='m' || a =='M'){
			y++;
		}
		delay(100);
		//circle(150,400,10);
	}
	setcolor(4);
	settextstyle(5,HORIZ_DIR,5);
	if(x==264)
		outtextxy(200,200,"LEFT WON");
	else if(y==264)
		outtextxy(200,200,"RIGHT WON");
	loop =1;
	while(loop){
		a = getch();
		if(a==13)
			loop =0;
	}
	getch();
	closegraph();
}