#include<stdio.h>
int main()
{
    int s=0,N,b[N],min,avg=0,COUNT=0;
    printf("Enter the size of the array\n");
    scanf("%d",&N);
    printf("Enter the elements of the array\n");
    for(int i=0;i<N;i++)
    {   
        scanf("%d",&b[i]);
    }
    min=b[0];
    for(int i=0;i<N;i++)
    {
        min=min<=b[i]?min:b[i];
        if(b[i]>=0)
        {
            s=s+b[i];
            COUNT++;
        }
        avg=avg+b[i];
    }
    printf("\n\n(A) Sum positive elements of the array =     %d\n",s);
    printf("(B) Smallest element of the array =    %d\n",min);
    printf("(C) Average of the array =     %.2f\n",(float)avg/N);
    printf("(D) Positive count =    %d\t\tNegative count =    %d",COUNT,N-COUNT);
    
    return 0;
}
