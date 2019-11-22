#include <stdio.h> 
#include <stdlib.h>
#include <math.h>



int gcd(int a, int b) 						//gcd of a and b
{ 
	if (a == 0) 
		return b; 
	return gcd(b % a, a); 
} 

int fermatinv(int res,int power, int m)
{
	int modp,x,fermatinv_mod,i;

	modp=power%(m-1);
	for(i=0;i<m;i++)
	{
		if(((int)(pow(i,modp))%m==res))
		{
			fermatinv_mod=i;
			if(gcd(fermatinv_mod,m)==1)
				return fermatinv_mod;
			else
				printf("NA");
		}
	}
	return 0;
}

int main()
{
	int a, m, power, res;
	printf("Enter the result, power,and prime modulo (x^p mod n = res , find x?)\n");
	scanf("%d,%d,%d",&res,&power,&m);
	a=fermatinv(res,power,m);
	printf("%d^%d mod %d = %d \n giving x as %d \n",a,power,m,res,a);

}