#include<stdio.h>
#include<conio.h>
void main(){
	int n,odd=0,even=0;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&n);
	while(n!=-1){
		if(n%2==0)
			even++;
		else
			odd++;
		printf("Enter a number: ");
		scanf("%d",&n);
	}
	printf("The number of Even number is %d",even);
	printf("\nThe number of odd number is %d",odd);
	getch();
}