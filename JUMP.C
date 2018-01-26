#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
	int gd=DETECT,gm,x=120,y=120,i=0,j,up=0,score=0;
	char c;
	initgraph(&gd,&gm,"C:\\turboc3\\BGI");
	setbkcolor(6);
	while(1){
		cleardevice();
		setfillstyle(1,14);
		bar(0,420,639,479);
		setfillstyle(1,3);
		setcolor(3);
		fillellipse(60,399,20,20);
		bar(639-x,420-y,679-x,420);
		if(kbhit()){
			if((getch())=='b'){
				for(j=0;j<55;j++){
					cleardevice();
					setfillstyle(1,14);
					bar(0,420,639,479);
					setfillstyle(1,3);
					setcolor(3);
					fillellipse(60,399-up,20,20);
					bar(639-x,420-y,679-x,420);
					if(559<x&&x<639){
						if(up<=y){
							settextstyle(1,HORIZ_DIR,7);
							outtextxy(150,100,"Game Over");
							getch();
							break;
						}else if(x==599){
							score++;
						}
					 }
					 x+=3;
					 up=up+3;
					 delay(10);
					 if(x>669){
						x=0;
						y=rand()%120;
					 }
				}
			}
		}
		while(up>0){
			 cleardevice();
			 setfillstyle(1,14);
			 bar(0,420,639,479);
			 setfillstyle(1,3);
			 setcolor(3);
			 fillellipse(60,399-up,20,20);
			 bar(639-x,420-y,679-x,420);
			 if(559<x&&x<639){
				if(up<=y){
					settextstyle(1,HORIZ_DIR,7);
					outtextxy(150,100,"Game Over");
					getch();
					break;
				}else if(x==599){
					score++;
				}
			 }
			 x+=3;
			 up=up-3;
			 delay(10);

			 if(x>669){
				x=0;
				y=rand()%120;
			 }
		}
		if(559<x&&x<639){
			if(up<=y){
				settextstyle(1,HORIZ_DIR,7);
				outtextxy(150,100,"Game Over");
				getch();
				break;
			}else if(x==599){
				score++;
			}
		}

		i++;
		x+=3;
		if(x>669){
			x=0;
			y=rand()%120;
		}
		delay(10);
	}
	getch();
	closegraph();
}