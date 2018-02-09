#include<stdio.h>
#include<conio.h>
long factorial(int);
long power(int,int);
void main(){
	int a,b,c,n;
	float f;
	clrscr();
	printf("Enter the value of a, b, c and n: ");
	scanf("%d%d%d%d",&a,&b,&c,&n);
	f=(float)(a * power(b,n)/factorial(c));
	printf("Thevalue of factorial = %ld",factorial(c));
	printf("The value of F is %f",f);
	getch();
}

long factorial (int c){
	if(c <=0 ){
		return 1;
	}else
		return c * factorial (c-1);
}

long power (int x,int y){
	int i;
	long  pow=1;
	for(i=1;i<=y;i++){
		pow*=x;
	}
	printf("THe value of x = %d",pow);
	return pow;

}