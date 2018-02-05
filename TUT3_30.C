#include<stdio.h>
#include<conio.h>
void main(){
	int num,sum,r;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&num);
	while(num>0){
		sum = 0;
		while(num>0){
			r = num %10;
			sum+=r;
			num/=10;
		}
		printf("The sum is %d\n",sum);
		if(sum/10==0)
			break;
		num =sum;
	}
	getch();
}