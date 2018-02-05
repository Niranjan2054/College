#include<stdio.h>
#include<conio.h>
long fact(int);
void main(){
	int n,i;
	float x;
	float sum =1;
	clrscr();
	printf("Enter the value of x: ");
	scanf("%f",&x);
	printf("Enter the number of term: ");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		sum= sum+(x/fact(i));
	}
	printf("The sum of the series is %f",sum);
	getch();
}
long fact(int f){
	if(f<=0){
		return 1;
	}else{
		return f * fact(f-1);
	}
}