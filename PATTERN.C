#include<stdio.h>
#include<conio.h>
void main(){
	char str[12]="Programming\0";
	int i,j;
	clrscr();
	for(i=0;i<11;i++){
		puts(str);
		for(j=0;j<11-i;j++){
			str[j]=str[j+1];
		}
		str[j-1]='\0';
	}
	getch();
}