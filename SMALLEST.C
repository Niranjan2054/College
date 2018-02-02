#include<stdio.h>
#include<conio.h>
int matrix(int *ptr1);
void main(){
	int mat[3][3],i,j,small,*ptr,temp;
	clrscr();
	ptr = &mat[0][0];
	printf("Enter element of 3 * 3 matrix:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",(*(mat+i)+j));
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i>j){
				printf("%d\t",0);
			}
			else{
				printf("%d\t",*(*(mat+i)+j));
			}

		}
		printf("\n");
	}
	small =matrix(ptr);
	printf("\The smallest element is %d",small);
	getch();
}

int matrix(int *ptr1){
	int small,i;
	small=*ptr1;
	for(i=1;i<9;i++){
		if(small>*++ptr1){
			small=*ptr1;
		}
	}
	return small;
}