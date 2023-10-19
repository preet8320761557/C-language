1.Disgine
(i)

#include<stdio.h>

int main()
{
    printf("\t\t*\t\t*\t\t*\n\n");
    printf("\t*\t\t*\t\t*\n\n");
    printf("*\t\t*\t\t*\n\n");
    printf("\t*\t\t*\t\t*\n\n");
    printf("\t\t*\t\t*\t\t*");

    return 0;

}

(ii)

#include<stdio.h>

int main()
{
    printf("\t*\t*\t*\t*\t*\t*\t*\n\n\n");
    printf("*\t*\t*\t*\t*\t*\t*\t*\n\n");
    printf("*\t\t*\t\t\t\t\t*\n\n");
    printf("*\t\t*\t\t*\t*\t*\t*\n\n");
    printf("*\t\t*\t\t*\t\t*\t*\n\n");
    printf("*\t*\t*\t*\t*\t*\t*\t*");

    return 0;

}
----------------------------------------------
2.swap two variable

#include<stdio.h>

int main()
{
    int a=10;
    int b=20;

    printf("Enter the number A :\n");
    printf("Enter the number B :");
    
    a=a+b;
    
    b=a-b;
    
    a=a-b;

    printf("\nafter swap number A: %d",a);
    printf("\nafter swap number B: %d",b);

    return 0;

}

-------------------------------------------
3.convert temperature from degree Celsius to Fahrenheit.

#include<stdio.h>

int main()
{
    float c,a=32;

    printf("Enter the celsius: ");
    scanf("%f",&c);

    float F=(sc*9/5)+a;
    printf("Fahrenheit : %.2f",F);

    return 0;

}
---------------------------------------------
4.find gross salary.
Ex. Base Salary: 100 RS, HRA=10%, DA=5%, TA=8%.

#include<stdio.h>

int main()
{
    float Basic=100,HRA=10,DA=5,TA=8;
    printf("Basic salary :");
    printf("HRA :");
    printf("DA :");
    printf("TA :");

    float hra=Basic*HRA/100;
    float da=Basic*DA/100;
    float ta=Basic*TA/100;

    float salary=Basic+hra+da+ta;

    printf("Gross salary: %.2f",salary);

    return 0;

}
