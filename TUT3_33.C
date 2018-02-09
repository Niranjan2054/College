#include<stdio.h>
#include<conio.h>
float series_sum(int);
float series_term(int);
void main(){
	int n;
	clrscr();
	printf("Enter nth term: ");
	scanf("%d",&n);
	printf("The sum of the series is %f",series_sum(n));
	getch();
}

float series_sum(int n){
	int i;float sum=0;
	for(i=1;i<=n*2;i+=2){
		sum+=series_term(i+1);
	}
	return sum;
}
float series_term(int a){
	float ret = (a*(a+1)/(a+3));
	printf("\t%f\n",ret);
	return ret;
}