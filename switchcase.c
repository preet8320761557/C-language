1.WaP to create/simulate telecom call service conversation
scenario using nested switch case.


#include <stdio.h>

int main() 
{
    int callfor;

    printf("Etc.Call Service Provided\n\n");
    printf("Your all Bank Dital  Enetred number 1.\n");
    printf("Your account number  Enetred number 2.\n");
    printf("Your IFSC code       Enetred number 3.\n");
    printf("Your Personal dital   Enetred number 4.\n");
    scanf("%d",&callfor);

    switch(callfor)
    {
        case 1:
             printf("Name : Meet beladiya\nAccount number : 2202204052010\nIFSC : BOBRB0VARACHA(fifth charchater is zero)\nPhone number : 3282405060\n");
             break;
        case 2:
             printf("Account number : 2202204052010\n");
             break;
        case 3:
             printf("AIFSC : BOBRB0VARACHA(fifth charchater is zero)\n");
             break;
        case 4:
             printf("Name : Meet beladiya\nPhone number : 3282405060\n");
    }
    
    return 0;
}
-------------------------------
2.WaP to print month names using switch case.

#include<stdio.h>
int main()
{
    int a;

    printf("enter the month number 1 to 12 :-  ");
    scanf("%d", &a);

    switch(a)
    {
        case 1:
            printf("january");
            break;
        case 2:
            printf("febery");
            break;
        case 3:
            printf("march");
            break;
        case 4:
            printf("april");
            break;
        case 5:
            printf("may");
            break;
        case 6:
            printf("june");
            break;
        case 7:
            printf("july");
            break;
        case 8:
            printf("august");
            break;
        case 9:
            printf("september");
            break;
        case 10:
            printf("octember");
            break;
        case 11:
            printf("november");
            break;
        case 12:
            printf("december");
            break;
    }
    return 0;
}
--------------------------------------------
