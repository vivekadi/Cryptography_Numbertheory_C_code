#include <stdio.h>
#include <stdlib.h>  

long long modulo(long long base,long long exponent,long long mod) 
{
	long long x = 1;
	long long y = base;
	while (exponent > 0) 
	{
	  	if (exponent % 2 == 1)              
			x = (x * y) % mod;                           // Finding the modulo till the 
			y = (y * y) % mod;                           //exponent is nonnegtive
			exponent = exponent / 2;
	}
	return x % mod;
}

long long fermat(long long n, long long accu) 
{
        long long i;

        if (n==1) 
            return 0;

        for (i=0;i<accu;i++)                               // the the function for the given
	{
            long long a = rand()%(n-1)+1;                   // accuracy number of time
            if (modulo(a,n-1,n)!=1) 
                return 0;          
        }
        return 1;
    }

long long main() 
{
	long long accu= 100;                                  // accuracy
        long long n;

        printf("Enter number \n");
        scanf("%lld",&n);                                   // number in long long format
        if (fermat(n, accu) == 1)
            printf("prime \n");
        else
            printf("not prime \n");
        return 0;
}
