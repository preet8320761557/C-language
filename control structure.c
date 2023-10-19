1. WaP to Find min. no. from given 2 no. using if else.

#include <stdio.h>

int main()
{
    int a,b;
    
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("Enter the number: ");
    scanf("%d",&b);

    if(a<b)
    {
        printf("%d is not a minimum number",a);
    }
    else
    {
        printf("%d is a minimum number",b);
    }

    return 0;
}

---------------------------------------------------------
2.WaP to Find if a given no. is neutral or not using ladder if else.

// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int a;

    printf("Enter the number:");
    scanf("%d",&a);

    if(a<0)
    {
        printf("%d is not a natural number:",a);
    }
    else if(a==0)
    {
        printf("%d is not a natural number:",a);
    }
    else
    {
        printf("%d is a natural number:",a);
    }

    return 0;
}