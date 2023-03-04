#include<stdio.h>
#include<limits.h>
int main()
{
    int s=0,a,b[a],max;
    printf("Enter the size of the array\n");
    scanf("%d",&a);
    printf("Enter the elements of the array\n");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&b[i]);
    }
    max=b[0];
    for(int i=0;i<a;i++)
    {
        max=max>b[i]?max:b[i];
    }
    for(int i=0;i<a;i++)
    {
        
        if(b[i]==max)
        {
            b[i]=INT_MIN;
            max=INT_MIN;
        }
    }
    for(int i=0;i<a;i++)
    {
        max=max>b[i]?max:b[i];   
    }
    printf("\n\nThe second largest number in the array is : %d",max);
    return 0;
}
