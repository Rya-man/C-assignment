#include<stdbool.h>
#include<stdio.h>  
bool CheckPrime(int n) 
{ 
    int i,flag = 1; 
    for(i = 2; i <= n/2; i++) 
    { 
        if(n % i == 0) 
          { 
              flag = 0;  
              return 0; 
              break;
          } 
 
    } 
    if(flag == 1) 
        return 1; 
}
void showPrime() 
{ 
    int i; 
    for(i = 2; i <= 100; i++) 
    {
        if(CheckPrime(i))
        printf("%d ",i); 
    }

}
int main() 
{ 
    int n; 
    printf("Enter the Number to check Prime:  "); 
    scanf("%d",&n); 
    CheckPrime(n)==1?printf("\n\nPrime number\n\n"):printf("\n\nComposite number\n\n");
    printf("\n\n\nPrime numbers from 1 to 100 are :\n\n");
    showPrime(); 
    return 0; 
} 
