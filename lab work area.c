1.Area of circle

Formula:-
Area = Pie * Radius * Radius

// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    float Pie=3.14;
    int Radius;

    printf("enter the radius of circle: ");
    scanf("%d",&Radius);
    printf("the radius of the circle is:%d\n",Radius);
    float area=(float)(Pie * Radius * Radius);
    printf("the aria of circlue is %f",area); 

    return 0;
}

--------------------------------------------------------
2.Area of sqare

Formula:-
area = area*area

Algorithm:-
1.define the height of any one side of the square as 's.'
2.Calculate the area of the square by multiplying s with s
3.Define the area_square as the area of the square.

// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int s=13;
    int area_square=s*s;
    printf("Area of teh square %d",area_square);

    return 0;
}
---------------------------------------
3.Area of rectangle

Formula:-
 area = length x width

#include <stdio.h>
int main() 
{
   float length, width, area;
   printf("Enter the length:");
   scanf("%f", &length);
   printf("Enter the width:");
   scanf("%f", &width);
   area = length * width;
   printf("area of the rectangle %f\n", area);
   return 0;
}
---------------------------------------------
4.Area of triangle

Formula:-
Area =(b*h)/2

#include <stdio.h>
int main() 
{
   float base,height,area;
   printf("Enter the base:");
   scanf("%f", &base);
   printf("Enter the height:");
   scanf("%f", &height);
   area = (base*height)/2;
   printf("area of the triangle %f\n", area);
   return 0;
}
-----------------------------------------
5.Simple interest.

Formula:-
(PRT)/100
P is the Principal, R is the rate, and the T is the total interval time.

#include<stdio.h>  
int main()   
{   
    float P , R , T , SI ;  
    printf("Enter the P:");
    scanf("%f", &P);
    printf("Enter the R:");
    scanf("%f", &R);
    printf("Enter the T:");
    scanf("%f", &T); 
     SI  = (P*R*T)/100;   
    printf("Simple Interest %f", SI);  
    return 0;  
}  
-------------------------------------
6.Perameter of circle.

Formula:-
perameter = 2*PI*Radious

#include <stdio.h> 
int main() 
{
   int radius;
   float PI=3.14;perimeter; 
   printf("enter the radius of circle: ");
   scanf("%d",&radius);
   perimeter = 2 * PI * radius;
   printf("Perimeter of the circle %.2f\n", perimeter);

   return 0;
}