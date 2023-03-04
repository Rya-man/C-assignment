#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<limits.h>
float answer(float n)
{
    float x=0;
    
    for(float i=1;i<=n;i++)
    {
        x=x+(1/i);
    }
    return x;
}

int main()
{
    float A;    
    printf("\nEnter A value\t");
    scanf("%f",&A);
    printf("Sum of the series is =  %f",answer(A));
    return 0;
}
