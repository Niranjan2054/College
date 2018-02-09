#include<stdio.h>
#include<conio.h>
int hcf(int, int);
int lcm(int, int);
void main(){
	int a,b;
	int i;
	clrscr();
	printf("Enter any two number: ");
	scanf("%d%d",&a,&b);
	if(a%2==0&&b%2==0){
		printf("The HCF of %d and %d is %d",a,b,hcf(a,b));
	}
	else{
		printf("The LCM of %d and %d is %d",a,b,lcm(a,b));
	}
	getch();
}

int hcf(int x, int y){
	int i,small;
	small = (x<y)?x:y;
	for(i=small;i>1;i--){
		if(x%i==0&&y%i==0){
			return i;
		}
	}
	return 1;
}


int lcm(int x, int y){
	int i,large;
	large = (x>y)?x:y;
	for(i=large;i>1;i++){
		if(i%x==0&&i%y==0){
			return i;
		}
	}
	return 0;
}