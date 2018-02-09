#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	int i,x,n;
	float sum=0;
	clrscr();
	printf("1/x-x/x^2+3/x^3 +....... to n terms\n");
	printf("Enter the value of x: ");
	scanf("%d",&x);
	printf("Enter the number of term: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=sum+ pow(-1,i+1)*(i/pow(x,i));
	}
	printf("The sum of given series is %f",sum);
	getch();
}