#include<stdio.h>
void main()
{
    int a;
    printf("\n\nEnter the number\n");
    scanf("%d",&a);
    printf("\n\nSum of the digits in the number is :  %d",sumofdigits(a));
    printf("\nNumber of digits in the number is: %d",numberofdigits(a));

    //return 0;
}
int sumofdigits(int a)
{
    int sum=0,temp;
    temp = a;
    while(sum==0)
    {   do
        {
            sum = sum + temp%10;
            temp/=10;

        }while(temp!=0);
        if(sum>9)
        {
            temp=sum;
            sum=0;
        }
    }
    return sum;
}
int numberofdigits(int a)
{
    int i,temp;
    for(i=0,temp=a;temp!=0;temp/=10)
    i++;
    
    return i;
}
