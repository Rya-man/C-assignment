#include<stdio.h>
int main()
{
    int i,j,n,k,count=1;
    printf("enter the number of rows ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        //count=1;
        for(j=1;j<=i;j++)
        {
            printf("%d ",count);
           count++;
           
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
void main()
{
    int i,j,n,k,r,cout,s;
    printf("enter the number of rows you want\n");
    scanf("%d",&n);
    printf("\n\n");
    for(i=0;i<n;i++)
    { 
      cout=1;
      for(j=1;j<=i+1;j++)
        { 
          printf("%d",cout);
          cout++;
        }
        k=2*(n-i);
        for(s=k;s>0;s--)
        {
          printf(" ");
        }
        for(r=cout-1;r>=1;r--)
          printf("%d",r);
        printf("\n");   
    } 
}
