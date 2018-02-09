#include<stdio.h>
#include<conio.h>
void main(){
	int i=1,sum=1;
	clrscr();
	while(sum<750){
		printf("%d,\t",sum);
		sum+=i;
		i+=2;
	}
	getch();
}