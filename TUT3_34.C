#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	int x1,y1,x2,y2;
	float d;
	clrscr();
	printf("Enter x1 and y1 value: ");
	scanf("%d%d",&x1,&y1);
	while(x1==0||y1==0){
		printf("Enter Valid x1 and y1 value: ");
		scanf("%d%d",&x1,&y1);
	}

	printf("Enter x2 and y2 value: ");
	scanf("%d%d",&x2,&y2);
	while(x2==0||y2==0){
		printf("Enter Valid x2 and y2 value: ");
		scanf("%d%d",&x2,&y2);
	}
	d = pow((x1-x2),2)+pow((y1-y2),2);
	d = sqrt(d);
	printf("The distance between (%d,%d) and (%d,%d) is %.2f",x1,y1,x2,y2,d);
	getch();
}