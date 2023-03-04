#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<limits.h>
float factorial(int);
float answer(int n)
{
    float x=0;
    
    for(int i=1;i<=n;i++)
    {
        x=x+(1/factorial(i-1));
    }
    return x;
}
float factorial(int a)
{ 
if(a==0)
    return 1;
else
    return a*factorial(a-1);
}
int main()
{
    int A;    
    printf("\nEnter A value\t");
    scanf("%d",&A);
    printf("Sum of the series is =  %f",answer(A));
    return 0;
}
