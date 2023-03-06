#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<limits.h>
int maximum(int a, int b, int c)
{
    int max;
    max=(a>b)?a:b;
    max=(max>c)?max:c;
    return max;
}
int minimum(int a, int b, int c)
{
    int min;
    min=(a<b)?a:b;
    min=(min<c)?min:c;
    return min;
}
int main()

{
    int a,b,c;
    printf("\n\nEnter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("\nMIN = %d\nMAX = %d",minimum(a,b,c),maximum(a,b,c));
}





{
    int a,b,c,min,max;
    printf("\n\nEnter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a<=b)
    {
        if(a<=c)
        {
            min=a;
            if(c<=b)
            {
                max=b;
            }
            else{
                max=c;
            }
        }
        else 
        {
            min=c;
            max=b;
        }
    }
    else if(b<=a)
    {
        if(b<=c)
        {
            min=b;
            if(c<=a)
            {
                max=a;
            }
        
            else{
                max=c;
            }
        }
        else
        {
            min=c;
            max=a;
        }
    }
    printf("\nMIN = %d\nMAX = %d",min,max);
    return 0;
}



{
    int a,b,c,min,max;
    printf("\n\nEnter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    min=(a<b)?a:b;
    min=(min<c)?min:c;
    max=(a>b)?a:b;
    max=(max>c)?max:c;
    printf("\nMIN = %d\nMAX = %d",min,max);
    return 0;
}
