#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	int a,b,c;
	float s,area;
	clrscr();
	printf("Enter there sides of a triange: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a<=0||b<=0||c<=0){
		printf("Invalid Data");
		getch();
		exit();
	}
	s = (a + b + c)/2;
	area = s* (s-a) * (s-b) * (s-c);
	area = sqrt(area);
	printf("The area of a triangle with sides %d, %d and %d is %.2f",a,b,c,area);
	getch();
}