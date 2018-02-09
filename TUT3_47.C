#include<stdio.h>
#include<conio.h>
#include<math.h>
float series(int);
void main(){
	int n;
	clrscr();
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	printf("The sum of the series is %f",series(n));
	getch();
}

float series(int a){
	if(a==1){
		return 1;
	}
	else
		return 1/pow(a,2) +series(a-1);
}