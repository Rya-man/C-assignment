#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,j,n,count=1;
    printf("enter the number of rows of floyd triangle to print\t");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        //count=1;
        for(j=0;j<=i;j++)
        {
            printf("%d ",count);
            count++;
        }
        printf("\n");
    
    }
    return 0;
}
