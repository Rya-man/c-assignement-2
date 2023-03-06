#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<limits.h>
#include<stdbool.h>
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
void primefactor(int n)
{
    int temp;
    temp=n;
    for(int i=2;i<=n;i++)
    {
        //printf("\n");
        do{
            
            if(CheckPrime(i)&&temp%i==0)
            {
                temp/=i;
                printf("%d * ",i);
            }
        }while(temp%i==0);
    }
    printf("1\n");
}
int main()
{
    int n;
    printf("Enter a number to find its prime factors\n");
    scanf("%d",&n);
    printf("\n");
    primefactor(n);
}
