#include<stdio.h>
#include<conio.h>
void main(){
	int count=0,sum=0,a;
	float avg;
	char c = 'y';
	clrscr();
	while(c!='n'){
		printf("Enter a number: ");
		scanf("%d",&a);
		while(a<0){
			printf("Enter valid number: ");
			scanf("%d",&a);
		}
		if(a%4==0 && a>10 && a < 50){
			sum+=a;
			count++;
		}
		puts("Enter n to terminate else press any key..");
		c = getch();
	}
	avg = (float)sum/count;
	printf("The no. of number is %d",count);
	printf("\nThe avg. of number is %.2f",avg);
	getch();
}
