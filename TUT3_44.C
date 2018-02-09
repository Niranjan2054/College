#include<stdio.h>
#include<conio.h>
#include<string.h>
int fun();
void function(int);
void toupper(char []);
static int sum=0, count =0;
void main(){
	clrscr();
	printf("The average of the number is %d",fun());
	getch();
}

int fun(){
	int num;
	char str[5];
	do{
		printf("Enter a number: ");
		scanf("%d",&num);
		function(num);
		printf("Enter yes to cotinue and press enter... else no: ");
		scanf("%s",str);
		fflush(stdin);
		toupper(str);
	}while(strcmp(str,"yes")==0);
	return sum/count;
}
void function(int x){
	sum+=x;
	count++;
}
void toupper(char x[5]){
	int i=0;
	while(x[i]!='\0'){
		if(x[i]<='Z'&&x[i]>='A'){
			x[i]+=32;
		}
		i++;
	}

}