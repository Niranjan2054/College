#include<stdio.h>
#include<conio.h>
void rotateclockwise(int [20][20]);
void rotateanticlockwise(int [20][20]);
void main(){
	int mat[20][20],i,j;
	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			mat[i][j]=rand()%16;
		}
	}
	clrscr();
	printf("Content of array:\n");
	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			textbackground(mat[i][j]);
			cprintf("  ",mat[i][j]);
		}
		printf("\n");
	}
	getch();
	clrscr();
	rotateclockwise(mat);
	printf("\nArray after clockwise rotation:\n");

	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			textbackground(mat[i][j]);
			cprintf("  ",mat[i][j]);
		}
		printf("\n");
	}
	getch();
	clrscr();
	rotateanticlockwise(mat);
	rotateanticlockwise(mat);
	printf("\nArray after Anticlockwise rotation:\n");

	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			textbackground(mat[i][j]);
			cprintf("  ",mat[i][j]);
		}
		printf("\n");
	}

	getch();
}

void rotateclockwise(int a[20][20]){
	int i,j,temp,b[20][20];
	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			b[i][j]=a[i][j];
		}
	}
	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			a[i][j]=b[20-1-j][i];
		}
	}
}

void rotateanticlockwise(int a[20][20]){
	int i,j,temp,b[20][20];
	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			b[i][j]=a[i][j];
		}
	}
	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			a[i][j]=b[j][20-1-i];
		}
	}
}