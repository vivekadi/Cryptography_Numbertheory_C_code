#include<stdio.h>

int crtx(int n[], int r[], int k) 
{ 
    int x = 1;                      
    while(1) 
    {                                 
        int j;                      // Check if remainder of x % num[j] is rem[j]
        for (j=0; j<k; j++ ) 
            if (x%n[j] != r[j]) 
               break; 
       // printf("%d  ",x); 
        if (j == k)                 // If all remainder match,found x 
            return x; 
        x++;                        // Else try next numner   
       // printf("%d  \n",x);   
    } 
    return x; 
} 
  
int main(void) 
{ 
    int y=0;
    int r[] = {5, 3, 10};                    //Remainders
    int n[] = {7,11,13};                 //NUMBERS: (gcd is 1 between them) 
    int k = sizeof(n)/sizeof(n[0]);         //memory allocated
    //printf("%ld",sizeof(n));
    y=crtx(n,r,k); 
    printf("numbers %d,%d,%d and repective remainder %d,%d,%d \n",n[0],n[1],n[2],r[0],r[1],r[2]);
    printf("the modulo number is %d \n",y);
    return 0; 
} 
