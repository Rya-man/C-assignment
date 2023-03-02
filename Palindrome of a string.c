// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int k=0,l;
    char a[100];
    scanf("%s",a);
    for(l=0;a[l]!='\0';l++);
    //l--;
    printf("%d",l);
    for(int j=l-1,i=0;i<=l/2;i++)
    {
        if(a[i]!=a[j])
        {
            k=1;
            break;
        }
        j--;
    }
    k==0?printf("\n\nstring is palindrome"):printf("string is not a palindrome");
    return 0;
}
