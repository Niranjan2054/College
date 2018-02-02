#include<stdio.h>
#include<conio.h>
void main(){
	char str[100];
	int i,count,word=1;
	clrscr();
	puts("Enter a string: ");
	gets(str);
	count=0;
	for(i=0;str[i]!='\0';i++){
		if(str[i]==' '||str[i]=='_'){
			count++;
		}else{
			count =0;
		}
		if(count ==1){
			word++;
		}
	}
	if(str[0]==' '||str[i]=='_'){
		word--;
	}
	printf("The number of word is %d",word);
	getch();
}
