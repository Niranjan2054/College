#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
#include<string.h>
int menu();
void playmode();
void Highscoreboard();
void instruction();
void developer();
void detect_mouse(int xy[]);
//void bird(int,int);
//void bottombar(int,int points[]);
int obstacle(int,int);
void CNS(int ,char[]);
union REGS in, out;
int mover;
int score;
//change
int score=0;
int highsc;
char highsch[2];
//change
struct score{
	int sc;
	char name[10];
}scorearr[sizeof(int)],tempscore;
void main(){
	int choice;
	while(1){
		choice = menu();
		if(choice ==1){
			playmode();
		}
		else if(choice==2){
			Highscoreboard();
		}
		else if(choice==3){
			instruction();
		}
		else if(choice==4){
			developer();
		}
		else if(choice==5){
		       break;
		}
	}
}
int menu(){
	int gd=DETECT,gm,i,xy[2];
	clrscr();
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	setbkcolor(10);
	settextstyle(7,HORIZ_DIR,6);
	setcolor(1);
	outtextxy(120,30,"KHWOPA BIRD");
	for(i=1;i<=5;i++){
		setcolor(14);
		setfillstyle(1,14);
		bar(210,45+i*70,420,80+i*70);
	}
	setcolor(3);
	settextstyle(7,HORIZ_DIR,2);
	outtextxy(260,120,"Play Mode");
	settextstyle(7,HORIZ_DIR,2);
	outtextxy(220,120+70,"High Score Board");
	settextstyle(7,HORIZ_DIR,2);
	outtextxy(245,120+140,"How to Play?");
	settextstyle(7,HORIZ_DIR,2);
	outtextxy(285,120+210,"About");
	settextstyle(7,HORIZ_DIR,2);
	outtextxy(290,120+280,"Exit");
	in.x.ax=1;
	int86(0x33,&in,&out);
	while(1){
		detect_mouse(xy);
		if(xy[0]>=210&&xy[0]<=420){
			if(xy[1]>=115&&xy[1]<=150){
				return 1;
			}
			else if(xy[1]>=185&&xy[1]<=220){
				return 2;
			}
			else if(xy[1]>=255&&xy[1]<=290){
				return 3;
			}
			else if(xy[1]>=325&&xy[1]<=360){
				return 4;
			}
			else if(xy[1]>=395&&xy[1]<=430){
				return 5;
			}
		}
	}
}
void playmode(){
	int gd=DETECT,gm,y,r,i,j,t,ret,x=50;
	int temp;
	static int gamelevel=1;
	char z,level[2]="1",name[20],pause;
	FILE *fptr,*fscore;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	//this will set background color
	setbkcolor(10);
	r=20;
	mover=1;
	y=150;
	score=0;
	while(1){
		cleardevice();
		//this is the header of the screen
		setcolor(1);
		setfillstyle(1,2);
		bar(0,0,639,50);
		bar(0,450,639,480);
		//This will set text and it's style
		settextstyle(7,HORIZ_DIR,4);
		outtextxy(200,6,"KHWOPA BIRD");
		settextstyle(7,HORIZ_DIR,1);
		outtextxy(570,4,"Score");
	    //	outtextxy(590,25,score);
		outtextxy(15,4,"Level");
		CNS(gamelevel,level);
		outtextxy(30,25,level);
		r--;
		setcolor(YELLOW);
		setfillstyle(SOLID_FILL,14);
		fillellipse(20+x,20+y,20,20);
		setcolor(BLUE);
		setfillstyle(SOLID_FILL,1);
		fillellipse(28+x,12+y,2,2);
		setfillstyle(SOLID_FILL,2);
		fillellipse(28+x,12+y,1,1);
		line(32+x,16+y,36+x,18+y);
		line(32+x,20+y,35+x,18+y);
		line(32+x,20+y,36+x,18+y);
		line(31+x,20+y,35+x,18+y);
		line(20+x,20+y,12+x,14+y);
		line(20+x,21+y,12+x,15+y);
		line(12+x,14+y,4+x,26+y);
		line(12+x,15+y,5+x,27+y);

		line(4+x,26+y,12+x,20+y);
		line(5+x,25+y,12+x,19+y);
		line(12+x,20+y,22+x,22+y);
		line(12+x,19+y,17+x,22+y);
		line(8+x,28+y,8+x,34+y);
		line(8+x,34+y,14+x,34+y);
		line(14+x,34+y,14+x,38+y);
		line(14+x,38+y,20+x,38+y);

		line(9+x,28+y,9+x,34+y);
		line(9+x,34+y,15+x,34+y);
		line(15+x,34+y,15+x,39+y);
		line(15+x,39+y,20+x,39+y);
		if(kbhit()){
			if((z=getch())==32){
				i=0;
				while(i<25){
					t=i+1;
					cleardevice();
					setcolor(1);
					setfillstyle(1,2);
					bar(0,0,639,50);
					bar(0,450,639,480);
					//This will set text and it's style
					settextstyle(7,HORIZ_DIR,4);
					outtextxy(200,6,"KHWOPA BIRD");
					settextstyle(7,HORIZ_DIR,1);
					outtextxy(570,4,"Score");
		//			outtextxy(590,25,score);
					outtextxy(15,4,"Level");
					CNS(gamelevel,level);
					outtextxy(30,25,level);
					y-=3;
					setcolor(YELLOW);
					setfillstyle(SOLID_FILL,14);
					fillellipse(20+x,20+y,20,20);
					setcolor(BLUE);
					setfillstyle(SOLID_FILL,1);
					fillellipse(28+x,12+y,2,2);
					setfillstyle(SOLID_FILL,2);
					fillellipse(28+x,12+y,1,1);
					line(32+x,16+y,36+x,18+y);
					line(32+x,20+y,35+x,18+y);
					line(32+x,20+y,36+x,18+y);
					line(31+x,20+y,35+x,18+y);

					line(20+x,20+y,12+x,14+y);
					line(20+x,21+y,12+x,15+y);
					line(12+x,14+y,4+x,26+y);
					line(12+x,15+y,5+x,27+y);

					line(4+x,26+y,12+x,20+y);
					line(5+x,25+y,12+x,19+y);
					line(12+x,20+y,22+x,22+y);
					line(12+x,19+y,17+x,22+y);

					line(8+x,28+y,8+x,34+y);
					line(8+x,34+y,14+x,34+y);
					line(14+x,34+y,14+x,38+y);
					line(14+x,38+y,20+x,38+y);

					line(9+x,28+y,9+x,34+y);
					line(9+x,34+y,15+x,34+y);
					line(15+x,34+y,15+x,39+y);
					line(15+x,39+y,20+x,39+y);
					ret = obstacle(mover,20+y);
					if(ret==1){
						goto mar;
					}else if(ret==2){
						gamelevel++;
						ret=0;
						mover=1;
					}
					mover+=4;
					delay(t);
					i+=2;
				}
			}
			else if(z=='p'||z=='P'){
				pause=getch();
				while(pause!='p'){
					pause=getch();
				}
			}
		}
		y+=3;
		t=7;
		ret=obstacle(mover,20+y);
		if(ret==1){
			break;
		}else if(ret==2){
			gamelevel++;
			mover=1;
		}
		if(y>=410||y<=70){
			settextstyle(7,HORIZ_DIR,7);
			outtextxy(180,200,"Game Over");
			getch();
			break;
		}
		mover+=4;
		delay(30);
       }
       mar:
       fscore=fopen("score.txt","a+");
       if(fscore==NULL){
		printf("File Cannot be Opened");
       }else{
		fprintf(fscore,"%d\n",score);
       }
       fclose(fscore);
       closegraph();
}
void Highscoreboard(){
	int gd=DETECT,gm;
	FILE *fscore;
	int highscore=0,score;
	char highsch[2];
	clrscr();
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	setbkcolor(10);
	settextstyle(7,HORIZ_DIR,6);
	setcolor(1);
	outtextxy(120,30,"High Score Board");
	setcolor(14);
	setfillstyle(1,14);
	bar(200,100,420,135);
	fscore=fopen("score.txt","r");
	while(!feof(fscore)){
		fscanf(fscore,"%d",&score);
		fflush(stdin);
		if(highscore<score){
			highscore=score;
		}
	}
	CNS(highscore,highsch);
	setcolor(3);
	settextstyle(7,HORIZ_DIR,2);
	outtextxy(200+70,105,highsch);
	getch();
	closegraph();
}
void instruction(){
	int gd=DETECT,gm,i;
	clrscr();
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	setbkcolor(10);
	settextstyle(7,HORIZ_DIR,7);
	setcolor(1);
	outtextxy(120,100,"Instruction!");
	setcolor(3);
	settextstyle(7,HORIZ_DIR,4);
	outtextxy(60,220,"Hit Space Key to Flew Up Bird.");
	getch();
	//closegraph();
}
void developer(){
	int gd=DETECT,gm,i;
	clrscr();
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	setbkcolor(10);
	settextstyle(7,HORIZ_DIR,6);
	setcolor(1);
	outtextxy(120,30,"About Developer");
	setcolor(1);
	settextstyle(6,HORIZ_DIR,2);
	outtextxy(200,120,"Khwopa College of Engineering");
	outtextxy(255,160,"Niranjan Bekoju");
	outtextxy(260,200,"Sunil Banmala");
	outtextxy(265,240,"Luja Shakya");
	outtextxy(258,280,"Abhinav Aryal");
	settextstyle(6,HORIZ_DIR,1);
	outtextxy(210,380,"Copyright All Right Reserved");
	getch();
	//closegraph();
}
void detect_mouse(int xy[]){

	while(1){
		in.x.ax=3;
		int86(0x33,&in,&out);
		if(out.x.bx==1){
			xy[0]=out.x.cx;
			xy[1]=out.x.dx;
			break;
		}
	}
	delay(200);
}
void bird(int y,int x){
	int color;
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,14);
	fillellipse(20+x,20+y,20,20);
	setcolor(BLUE);
	setfillstyle(SOLID_FILL,1);
	fillellipse(28+x,12+y,2,2);
	setfillstyle(SOLID_FILL,2);
	fillellipse(28+x,12+y,1,1);
	line(32+x,16+y,36+x,18+y);
	line(32+x,20+y,35+x,18+y);
	line(32+x,20+y,36+x,18+y);
	line(31+x,20+y,35+x,18+y);

	line(20+x,20+y,12+x,14+y);
	line(20+x,21+y,12+x,15+y);
	line(12+x,14+y,4+x,26+y);
	line(12+x,15+y,5+x,27+y);

	line(4+x,26+y,12+x,20+y);
	line(5+x,25+y,12+x,19+y);
	line(12+x,20+y,22+x,22+y);
	line(12+x,19+y,17+x,22+y);

	line(8+x,28+y,8+x,34+y);
	line(8+x,34+y,14+x,34+y);
	line(14+x,34+y,14+x,38+y);
	line(14+x,38+y,20+x,38+y);

	line(9+x,28+y,9+x,34+y);
	line(9+x,34+y,15+x,34+y);
	line(15+x,34+y,15+x,39+y);
	line(15+x,39+y,20+x,39+y);
}
void bottombar(int r,int points[]){
	int j,i;
	for(j=0;j<35;j++){
		//this loop is used to find the components of points
		for(i=0;i<10;i++){
			//this condition is used to increase the x component value by 20
			if(i%2==0&&j==1)
				points[i]=points[i]+r;
			else if(i%2==0&&j>1)
				points[i]=points[i]+20;

		}
		//Fill yellow color
		if(j%2==0){
			setfillstyle(1,14);
			setcolor(14);
		}else{
			//fill red color
			setcolor(4);
			setfillstyle(1,4);
		}
		//this will fill the poly with defined color and style
		fillpoly(5,points);
	}
}

int obstacle(int m,int horiz){
	int x1,y1,x2,y2,d1,x3,y3,x4,y4,d2;
	char scorestr[2];
	char gamelevel[2];
	char lvlcomplete[20]="Level ";
	char pause;
	int disp,deltax,deltay;
	static int gamelvl = 1;
	FILE *fptr;
	switch(gamelvl){
		case 1:
			fptr = fopen("level1.dat","r");
			break;
		case 2:
			fptr = fopen("level2.dat","r");
			break;
		case 3:
			fptr = fopen("level3.dat","r");
			break;
		case 4:
			fptr = fopen("level4.dat","r");
			break;
		case 5:
			fptr = fopen("level5.dat","r");
			break;
		case 6:
			fptr = fopen("level6.dat","r");
			break;
		case 7:
			fptr = fopen("level7.dat","r");
			break;
		case 8:
			fptr = fopen("level8.dat","r");
			break;
		case 9:
			fptr = fopen("level9.dat","r");
			break;
		case 10:
			fptr = fopen("level10.dat","r");
			break;
		default:;
	}
	//get coordinate value
	fflush(stdin);
	fscanf(fptr,"%d",&x1);
	while((x1-m)<=639){
		fscanf(fptr,"%d",&y1);
		fscanf(fptr,"%d",&x2);
		fscanf(fptr,"%d",&y2);
		//remove this
		fscanf(fptr,"%d",&d1);
		fscanf(fptr,"%d",&x3);
		fscanf(fptr,"%d",&y3);
		fscanf(fptr,"%d",&x4);
		fscanf(fptr,"%d",&y4);
		//remove this
		fscanf(fptr,"%d",&d2);
		//top bar
		setfillstyle(1,14);
		if((x1+20-m)>=70 &&((x1+20-m)<75) ){
			score++;
		}
		CNS(score,scorestr);
		outtextxy(590,25,scorestr);
		if(x1!=8800){
			bar(x1-m,y1,x2-m,y2);
			//bottom bar
			bar(x3-m,y3,x4-m,y4);
		}else{
			settextstyle(7,HORIZ_DIR,7);
			outtextxy(100,150,"Congratulation");
			settextstyle(7,HORIZ_DIR,3);
			CNS(gamelvl,gamelevel);
			strcat(lvlcomplete,gamelevel);
			strcat(lvlcomplete," Completed");
			outtextxy(200,250,lvlcomplete);
			pause=getch();
			while(pause!=13){
				pause=getch();
			}
			gamelvl++;
			return 2;
		}
		//check touch or not on first side for up obstacle
		deltax=x1-m-70;
		if(horiz>y2){
			deltay=y2-horiz;
		}else{
			deltay=0;
		}
		if((pow(deltax,2)+pow(deltay,2))<=400){
			disp=2;
			goto top;
		//	continue;
		}else{
			disp=1;
		}
		deltax=x2-m-70;
		if(horiz>y2){
			deltay=horiz-y2;
		}else{
			deltay=0;
		}
		if((pow(deltax,2)+pow(deltay,2))<=400){
			disp=2;
			goto top;
		}else{
			disp=1;
		}
		if(70<(x1-m)){
			deltax=70-x1+m;
		}else if(70>(x2-m)){
			deltax=x2-70-m;
		}else{
			deltax=0;
		}
		deltay=y2-horiz+2;
		if((pow(deltax,2)+pow(deltay,2))<=400){
			disp=2;
			goto top;
		}else{
			disp=1;
		}

		//check touch or not on first side for down obstacle
		deltax=x3-m-70;
		if(horiz<y3){
			deltay=y3-horiz;
		}else{
			deltay=0;
		}
		if((pow(deltax,2)+pow(deltay,2))<=400){
			disp=2;
			goto top;
		//	continue;
		}else{
			disp=1;
		}
		deltax=x4-m-70;
		if(horiz<y4){
			deltay=horiz-y4;
		}else{
			deltay=0;
		}
		if((pow(deltax,2)+pow(deltay,2))<=400){
			disp=2;
			goto top;
		}else{
			disp=1;
		}

		if(70<(x3-m)){
			deltax=70-x3+m;
		}else if(70>(x4-m)){
			deltax=x4-70-m;
		}else{
			deltax=0;
		}
		deltay=y3-horiz+2;
		if((pow(deltax,2)+pow(deltay,2))<=400){
			disp=2;
			goto top;
		}else{
			disp=1;
		}
		top:
		if(disp==2){
			settextstyle(7,HORIZ_DIR,7);
			outtextxy(180,200,"Game Over");
			pause=getch();
			while(pause!=13){
				pause=getch();
			}
			return 1;
		}
		fscanf(fptr,"%d",&x1);
	}

	fclose(fptr);
	return 0;
}

void CNS(int n,char num[]){
	int temp,r,i=1;
	temp = n;
	while(temp>0){
		r = temp%10;
		num[i--]=r+48;
		temp/=10;
	}
	while(i>=0){
		num[i--]=48;
	}
	num[2]='\0';
}