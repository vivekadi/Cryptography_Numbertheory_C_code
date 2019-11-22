#include <stdio.h> 
#include <stdlib.h>
#include <math.h>



int gcd(int a, int b) 						//gcd of a and b
{ 
	if (a == 0) 
		return b; 
	return gcd(b % a, a); 
} 

int fermat(int a,int power, int m)
{
	int modp,x,fermat_mod;
	if (gcd(a, m) == 1)
	{
		modp=power%(m-1);
		x=(int)(pow(a,modp));
		fermat_mod=x%m;
	}

	else 
		printf("NA");
	return fermat_mod;
}

int main()
{
	int a, m, power, res;
	printf("Enter the number, power,and prime modulo\n");
	scanf("%d,%d,%d",&a,&power,&m);
	res=fermat(a,power,m);
	printf("%d^%d mod %d = %d \n",a,power,m,res);

}