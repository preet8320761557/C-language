formula:-
(x+y)2=(a+b)*(a+b)

// Online C compiler to run C program online
#include <stdio.h>

int main()
 { 
    double a,b;
    printf("Enter the value of A:");
    scanf("%lf",&a);
    printf("Enter the value of B:");
    scanf("%lf",&b);

    double result = (a+b) * (a+b);
    printf("%.2lf:",result);
    return 0;
}

---------------------------------------
formula:-
(x-y)2=(a-b)*(a-b)

// Online C compiler to run C program online
#include <stdio.h>

int main()
 { 
    double a,b;
    printf("Enter the value of A:");
    scanf("%lf",&a);
    printf("Enter the value of B:");
    scanf("%lf",&b);

    double result = (a-b) * (a-b);
    printf("%.2lf:",result);
    return 0;
}
-------------------------------------------
formula:-
(x+y)3=x³+3x²y+3xy²+y³

// Online C compiler to run C program online
#include <stdio.h>

int main()
 { 
    double a,b;
    printf("Enter the value of A:");
    scanf("%lf",&a);
    printf("Enter the value of B:");
    scanf("%lf",&b);

    double result = a*a*a + 3*a*a*b + 3*a*b*b + b*b*b;
    printf("%.2lf:",result);
    return 0;
}
---------------------------------------------
formula:-
(x-y)3.=x³-y³-3x²y +3xy²

// Online C compiler to run C program online
#include <stdio.h>

int main()
 { 
    double a,b;
    printf("Enter the value of A:");
    scanf("%lf",&a);
    printf("Enter the value of B:");
    scanf("%lf",&b);

    double result = a*a*a - b*b*b - 3*a*a*b + 3*a*b*b;
    printf("%.2lf:",result);
    return 0;
}
---------------------------------------------
formula:-
(x+y+z)3=x3+y3+z3+3(x+y)(y+z)(z+x)

// Online C compiler to run C program online
#include <stdio.h>

int main()
 { 
    double a,b,c;
    printf("Enter the value of A:");
    scanf("%lf",&a);
    printf("Enter the value of B:");
    scanf("%lf",&b);
    printf("Enter the value of C:");
    scanf("%lf",&c);

    double result =a*a*a + b*b*b + c*c*c + 3(a+b)(b+c)(c+a) ;
    printf("%.2lf:",result);
    return 0;
}
-------------------------------------------------
formula:-
(x-y-z)3.= x3 - y3 - z3 - 3x2y + 3xy2 - 3y2z - 3yz2 + 3xz2 - 3x2z + 6xyz

// Online C compiler to run C program online
#include <stdio.h>

int main()
 { 
    double a,b,c;
    printf("Enter the value of A:");
    scanf("%lf",&a);
    printf("Enter the value of B:");
    scanf("%lf",&b);
    printf("Enter the value of C:");
    scanf("%lf",&c);

    double result =a*a*a + b*b*b + c*c*c - 3*a*a*y + 3*a*b*b - 3*b*b*c - 3*b*c*c - 3*a*a*c + 6*a*b*c ;
    printf("%.2lf:",result);
    return 0;
}
----------------------------------------------------
formula:-
(x+y+z)2=x2+y2+z2+2xy+2yz+2xz

// Online C compiler to run C program online
#include <stdio.h>

int main()
 { 
    double a,b,c;
    printf("Enter the value of A:");
    scanf("%lf",&a);
    printf("Enter the value of B:");
    scanf("%lf",&b);
    printf("Enter the value of C:");
    scanf("%lf",&c);

    double result =a*a + b*b + c*c + 2*a*b + 2*b*c + 2*a*c ;
    printf("%.2lf:",result);
    return 0;
}