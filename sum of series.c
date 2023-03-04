#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<limits.h>
int factorial(int);
float answer(float A,int n)
{
    float x=0;
    
    for(int i=0;i<=n;i++)
    {
        float s;
        s=(pow(A,2*i)/factorial(i));
        x=x+pow(-1,i)*s;
    }
    return x;
}
/*float answer(float a)
{
    return cos(a);
}*/
int factorial(int a)
{ 
if(a==0)
    return 1;
else
    return a*factorial(a-1);
}
int main()
{
    int A,n;    
    printf("\nEnter A value\t");
    scanf("%f",&A);
    //printf("\nEnter Acccuracy\t");
    //scanf("%d",&n);
    printf("Sum of the series is =  %f",answer(A,4));
    return 0;
}
