#include<stdio.h>
int main()
{
    int a,b,c,min;
    printf("\n\nEnter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a<=b)
    {
        if(a<=c)
        min=a;
        else 
        min=c;
    }
    else if(b<=a)
    {
        if(b<=c)
        min=b;
        else
        min=c;
    }
    printf("\nMIN = %d",min);
    return 0;
}

/*#include<stdio.h>
int main()
{
    int a,b,c,min;
    printf("\n\nEnter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    min=(a<b)?a:b;
    min=(min<c)?min:c;
    printf("\n\nMIN = %d",min);
    return 0;
}*/
