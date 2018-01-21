#include<stdio.h>
#define PI 3.1415
void main()
{
    float x,y,sum=0,power,result,fact;
    int i,j,k;
    printf("Enter the value of x in degree: ");
    scanf("%f",&x);
    y = PI * x /180;
    for(i=1;i<10;i++)
    {
        fact =1;
        power = 1;
        for (j=1;j<=2*i;j++)
        {
            fact = fact * j;
            power = power * y;
        }
        if (i%2==0)
            result = power/fact;
        else
            result = -power/fact;
        sum = sum + result;
    }
    printf("The Result is %.2f\n",sum+1);
}
