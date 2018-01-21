#include<stdio.h>
#include<stdlib.h>
void aderivative(int *, int *);
void main()
{
    int n;char a='a',t,i;
    unsigned int order;
    int temp;
    int *ptr;
    printf("Enter the order of the function: ");
    scanf("%ud",&order); //order is the highest degree of the algebric function..
    temp = order;
    t = order + 1;//t represents the number of term..
    ptr=(int*)calloc(t,sizeof(int));//THis is Dynamic memory allocation
    //This will print the prototype of function
    while(temp>=0)
    {
        if (temp!=0)
            printf("%cx^%d + ",a,temp);
        else
            printf("%c\n",a);
        temp--;
        a++;
    }
    // this section will get the coefficient of the polynomial function
    a='a';
    for(i=0;i<t;i++)
    {
        printf("Enter the value of %c: ",a++);
        scanf("%d",ptr+i);
    }
    //this section will display the algebric function user input...
    a ='a';
    temp = order;
    for(i=0;i<t;i++)
    {
       if (temp!=0)
            printf("%dx^%d + ",*(ptr+i),temp);
        else
            printf("%d",*(ptr+i));
        temp--;
    }
    temp=order;
    //this section will print the derivative algrbric function...
    printf("\nThe Derivative Of The Given Algebric Function is Given Below: \n");
    for(i=0;i<t-1;i++)
    {
        aderivative(ptr+i,&temp);
        if(temp!=0)
             printf("%dx^%d + ",*(ptr+i),temp);
        else
            printf("%d",*(ptr+i));
    }



}
//this method get the coefficient and power of the x and proceed the derivative
void aderivative(int *x, int *y)
{
    *x = *x * *y;
    *y = *y-1;
}

