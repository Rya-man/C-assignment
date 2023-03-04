#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    char c,ch='Y';
    do{
    printf("\nEnter the expression you want to perform\n\n");
    scanf("%d %c%d",&a,&c,&b);           
    switch(c)
        {   
            case '+': printf("sum of %d and %d :\t%d",a,b,a+b);
            break;
            case '-': printf("difference of %d and %d :\t%d",a,b,a-b);
            break;
            case '*': printf("product of %d and %d :\t%d",a,b,a*b);
            break;
            case '/': printf("division of %d and %d :\t%.2f",a,b,(float)a/b);
            break;
            case '%': printf("modulus of %d and %d :\t%d",a,b,a%b);
            break;
            case '~': printf("square root of %d :\t%f",a,sqrt(a));
            break;
            case '^': printf("%d to the power of %d :\t%f",a,b,pow(a,b));
            break;
            default:printf("!!!Error the character is not an arithmatic operator");
        }
        printf("\n\n\nDo you want to continue (Y/N)\t");
        scanf(" %c",&ch);
    }while(ch!='N');
    return 0;
}
