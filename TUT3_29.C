#include<stdio.h>
#include<conio.h>
int prime(int);
void main(){
	int num;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&num);
	if(prime(num)){
		printf("The number %d is prime",num);
	}else
		printf("The number %d is not prime",num);
	getch();
}

int prime(int n){
	int i;
	for(i=2;i<=n/2;i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}