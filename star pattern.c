#include<stdio.h>
void main()
{
    int i,j,n,k=1;
    char ch='*';
 printf("enter the number of rows you want");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
    for(j=i;j<n-1;j++)
    printf(" ");
    for(j=1;j<=(2*i+1);j++)
    printf("%c",ch);
    for(j=i;j<n-1;j++)
    printf(" ");
    printf("\n");
 }
  for(i=n;i>1;i--)
 {
    for(j=i;j>i-k;j--)
    printf(" ");
    for(j=(2*i-2);j>1;j--)
    printf("%c",ch);
    for(j=i;j>i-k;j--)
    printf(" ");
    printf("\n");
    k++;
 }
}

/*#include<stdio.h>
void main()
{
    int i,j,n,k=1;
    char ch='*';
 printf("enter the number of rows you want");
 scanf("%d",&n);
 
  for(i=n;i>1;i--)
 {
    for(j=i;j>i-k;j--)
    printf(" ");
    for(j=(2*i-2);j>1;j--)
    printf("%c",ch);
    for(j=i;j>i-k;j--)
    printf(" ");
    printf("\n");
    k++;
 }
}
*/
