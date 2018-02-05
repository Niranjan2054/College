#include<stdio.h>
#include<conio.h>
int recursion(int);
int n;
void main(){
	int sum;
	clrscr();
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	sum = recursion(n);
	printf("The sum of series is %d",sum);
	getch();
}
int recursion(int x){
	if(x<=1){
		return 1;
	}
	else{
		if(n%2==1){
			n--;
			return  x*x + recursion(x-1);
		}else{
			n--;
			return  recursion(x-1)-x*x;
		}
	}
}