#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<limits.h>
int main()
{
    int x,y,z,a,b,c;
    printf("\na)  x = 18- 12 / 3 + 3 *5 - 1 =\t\t\t");
    x = 18- 12 / 3 + 3 *5 - 1;
    printf("%d\n",x);
    printf("b)  x= 18 - 12 / (3 + 3) * (5 - 1) =\t\t"); 
    x= 18 - 12 / (3 + 3) * (5 - 1);
    printf("%d\n",x);
    a=9;b=4;c=5;
    printf("c)  x = a - b / 3 + c * 2 - 1 =\t\t\t"); 
    x = a - b / 3 + c * 2 - 1; 
    printf("%d\n",x); 
    printf("d)  y = a - b / ( 3 + c ) * ( 2 - 1 ) =\t\t");
    y = a - b / ( 3 + c ) * ( 2 - 1 );
    printf("%d\n",y);
    printf("e)  z = a - ( b / ( 3 + c ) * 2 ) - 1 =\t\t");
    z = a - ( b / ( 3 + c ) * 2 ) - 1; 
    printf("%d\n",z);
    printf("f)  x =  a - -- b / ( 3 + c++) * ( 2 - 1 ) =\t");
    x =  a - -- b / ( 3 + c++) * ( 2 - 1 ); 
    printf("%d\n",x);
    a=5;b=18;c=5;
    printf("g)  x=c+2*((b%%5)*(4+(a-3)/(c+2))) =\t\t");
    x=c+2*((b%5)*(4+(a-3)/(c+2)));
    printf("%d\n",x);
    return 0;
}
