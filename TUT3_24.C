#include<stdio.h>
#include<conio.h>
void main(){
	int i,j;
	float x;
	clrscr();
	printf("\n----------------------------\n");
	printf("|  y  |       x   |    i   |");
	printf("\n----------------------------");
	for(i=1;i<=6;i++){
		x = 5.5;
		for(j=1;j<=14;j++){
			x+=0.5;
			printf("\n|  %d  | %8.2f  |   %.2f |",i,x,2+(i+0.5*x));
		}
		printf("\n----------------------------");
	}
	getch();
}