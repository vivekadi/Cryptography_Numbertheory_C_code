#include <stdio.h> 
#include <stdlib.h>
#include <math.h>


int gcd(int a, int b) 						//gcd of a and b
{ 
	if (a == 0) 
		return b; 
	return gcd(b % a, a); 
} 

int phi(int num) 							//euler totient function
{ 
	int totient = 1; 
	for (int i = 2; i < num; i++) 
		if (gcd(i, num) == 1) 
			totient++; 
	return totient; 
} 

int euler (int num, int power, int totient, int modulo)
{
	int modp,eulertotient=0,x;
	if(power>totient)
	{
		modp=power%totient;                 // reducing the power based on
		//printf("%d \n",modp);				// num^totient mod modulo = 1
		x=(int)(pow(num,modp));				// taking the reamining difference power
		eulertotient=x%modulo;				// the final module
	}
	else
	{
		printf("NA");
	}
	return eulertotient;
}
 
int main()
{ 
	int num,res=0,power,totient,modulo;
	printf("enter values \n");
	scanf("%d,%d,%d",&num,&power,&modulo); 
	totient=phi(modulo);
	printf("phi(%d)=%d\n",num,totient); 	   // totient function 
	res=euler(num,power,totient,modulo);
	printf("%d^%d mod %d = %d \n",num,power,modulo,res); // final result
	return 0; 
} 
