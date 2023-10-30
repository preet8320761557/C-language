1.WaP to Print 1 to 10 using while loop.

#include <stdio.h>

int main()
{
	int i=1;

    while(i<=10)
	{
		printf("%d\n",i);
		i++;
	}
	return 0;
}
/* output:-

1
2
3
4
5
6
7
8
9
10

*/


2.WaP to print 10 to 1 using while loop.

#include <stdio.h>

int main()
{
	int i=10;

    while(i>=1)
	{
		printf("%d\n",i);
		i--;
	}
	return 0;
}
/* output:-

10
9
8
7
6
5
4
3
2
1

*/

3.WaP to print 1 to N using while loop.

#include <stdio.h>

int main()
{
	int i=1,n;
	
	printf("Enter the number:");
	scanf("\n %d",&n);

    while(i<=n)
	{
		printf("%d\n",i);
		++i;
	}
	return 0;
}
/* output:-

Enter the number:10
1
2
3
4
5
6
7
8
9
10

*/

4.WaP to print N to 1 using while loop.

#include <stdio.h>

int main()
{
	int n;
	
	printf("Enter the number:");
	scanf("\n %d",&n);

    while(n>=1)
	{
		printf("%d\n",n);
		n--;
	}
	return 0;
}
/* output:-

Enter the number:10
10
9
8
7
6
5
4
3
2
1

*/

5.WaP to print odd no. from 1 to N using while loop.

#include <stdio.h>

int main() 
{
	int n,i=1;
	printf("Enter the number:");
	scanf("%d",&n);

	while(i<=n)
	{
	    if(i%2 != 0)
		printf("%d",i);
		i++;
	}
    return 0;
}
/* output:-

Enter the number:10
Odd Numbers from 1 to 10:
13579

*/

6.WaP to print even no. from N to 1 using while loop.

#include <stdio.h>

int main() 
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);

	while(n>=1)
	{
	    if(n%2 != 0)
		printf("%d",n);
		--n;
	}
    return 0;
}
/* output:-

Enter the number:5
531

*/

7.WaP to Find leap year from 2000 to 3000 using while loop.

#include <stdio.h>

int main() {
    int year = 2000;

    while (year <= 3000) 
	{
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d\n", year);
        }
        year++;
    }

    return 0;
}
/* output:-

/tmp/7DQNe501N4.o
2000
2004
2008
2012
2016
2020
2024
2028
2032
2036
2040
2044
2048
2052
2056
2060
2064
2068
2072
2076
2080
2084
2088
2092
2096
2104
2108
2112
2116
2120
2124
2128
2132
2136
2140
2144
2148
2152
2156
2160
2164
2168
2172
2176
2180
2184
2188
2192
2196
2204
2208
2212
2216
2220
2224
2228
2232
2236
2240
2244
2248
2252
2256
2260
2264
2268
2272
2276
2280
2284
2288
2292
2296
2304
2308
2312
2316
2320
2324
2328
2332
2336
2340
2344
2348
2352
2356
2360
2364
2368
2372
2376
2380
2384
2388
2392
2396
2400
2404
2408
2412
2416
2420
2424
2428
2432
2436
2440
2444
2448
2452
2456
2460
2464
2468
2472
2476
2480
2484
2488
2492
2496
2504
2508
2512
2516
2520
2524
2528
2532
2536
2540
2544
2548
2552
2556
2560
2564
2568
2572
2576
2580
2584
2588
2592
2596
2604
2608
2612
2616
2620
2624
2628
2632
2636
2640
2644
2648
2652
2656
2660
2664
2668
2672
2676
2680
26842688
2692
2696
2704
2708
2712
2716
2720
2724
2728
2732
2736
2740
2744
2748
2752
2756
2760
2764
2768
2772
2776
2780
2784
2788
2792
2796
2800
2804
2808
2812
2816
2820
2824
2828
2832
2836
2840
2844
2848
2852
2856
2860
2864
2868
2872
2876
2880
2884
2888
2892
2896
2904
2908
2912
2916
2920
2924
2928
2932
2936
2940
2944
2948
2952
2956
2960
2964
2968
2972
2976
2980
2984
2988
2992
2996

*/

8.WaP to print sum 1 to N using while loop.

#include <stdio.h>

int main() 
{
	int N;
	printf("Enter value of N: ");
	scanf("%d",&N);
	int sum=0;
	int i=1;
	while(i<=N)
	{
		sum += 1;
		i++;
	}
	 printf("The sum of numbers from 1 to %d is: %d\n", N, sum);
    
    return 0;
}
/* output:-

Enter value of N: 5
The sum of numbers from 1 to 5 is: 5

*/

9.WaP to calculate the factorial of N. using while loop.

#include <stdio.h>
int main()
{
    int n,i,f;
    f=i=1;
    printf("Enter a Number to Find Factorial: ");
    scanf("%d",&n);
    while(i<=n)
    {
        f*=i;
        i++;
    }
    printf("The Factorial of %d is : %d",n,f);
    return 0;
}
/* output:-

Enter a Number to Find Factorial: 8
The Factorial of 8 is : 40320

*/

10.WaP to print thr multiplication table of N using while loop.

#include <stdio.h>

int main() 
{
	int n,i;
	printf("Enter the number :");
	scanf("%d",&n);
    i=1;

	while(i<=10)
	{
		printf("%d*%d=%d\n",n,i,n*i);
		++i;
	}

    return 0;
}
/* output:-

Enter the number :5
5*1=5
5*2=10
5*3=15
5*4=20
5*5=25
5*6=30
5*7=35
5*8=40
5*9=45
5*10=50

*/