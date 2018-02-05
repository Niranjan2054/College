#include<stdio.h>
#include<conio.h>
#include<math.h>
float frequency(float);
void main(){
	int i,freq;
	clrscr();
	printf("\n Inductance 	Capactance	Resistance	Frequency");
	for(i=1;i<=10;i++){
		printf("\n%11.2f%14.3f%16.2f%15.4f",0.05,i*0.01,0.1,frequency(i*0.01));
	}
	getch();
}
float frequency(float c){
	float R = .1;
	float l = 0.05,f;
	f = (1/(l*c)-R*R/(4*c*c));
	return sqrt(f);
}