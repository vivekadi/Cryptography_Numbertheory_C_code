#include <stdio.h>
int gcd;

int pw(int x,unsigned int y,unsigned int m);

int gcdeuclid(int n1,int n2)                 // Finding the GCD of two numbers
{   
	for(int i=1; i <= n1 && i <= n2; ++i)     
	{
		if(n1%i==0 && n2%i==0)                
		    gcd = i;
	}
 	//printf("%d",gcd);
 	return gcd;
}                
 
void modinv(int a,int m)                  
{ 
	if (gcdeuclid(a, m) != 1)
	{
		printf("%d^-1 mod %d \n",a,m);                
		printf("no inv \n"); 
	}

	else		
	{ 
		printf("%d^-1 mod %d \n",a,m); 
		printf("mul inv %d \n", pw(a,m-2,m));  // mod inv is a^(m-2) mod m
	}
}

int pw(int x,unsigned int y,unsigned int m)    //compute x^y under mod m 
{ 
	if (y == 0) 
		return 1; 
	int p = pw(x, y / 2, m) % m; 				
	p = (p * p) % m; 

	return (y % 2 == 0) ? p : (x * p) % m; 
} 

int main()                                     
{ 
	int a,m;           // Enter the inverse number and modulo
	printf("Enter inverse and modulo");
	scanf("%d,%d",&a,&m);
	modinv(a, m); 
	return 0; 
} 
