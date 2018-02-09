#include<stdio.h>
#include<conio.h>
int hcf(int,int,int);
int lcm(int,int,int);
void main(){
	int a,b,c;
	clrscr();
	printf("Enter any three number: ");
	scanf("%d%d%d",&a,&b,&c);
	printf("The LCM of %d, %d and %d is %d",a,b,c,lcm(a,b,c));
	printf("\nThe HCF of %d, %d and %d is %d",a,b,c,hcf(a,b,c));
	getch();
}
int hcf(int x,int y,int z){
	int i,small;
	small = (x<y&&x<z)?x:(y<z?y:z);
	for(i=small;i>=1;i--){
		if(x%i==0&&y%i==0&&z%i==0){
			return i;
		}
	}
	return 0;
}

int lcm(int x,int y,int z){
	int i,large;
	large = (x>y&&x>z)?x:((y>z)?y:z);
	for(i=large;i>0;i++){
		if(i%x==0&&i%y==0&&i%z==0){
			return i;
		}
	}
	return 0;
}