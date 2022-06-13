# interchange_two_numbers_using-pointer
 
#include<stdio.h>
void swapnum (int *num1, int *num2)
{ 
int tempnum; 
tempnum = *num1; 
*num1 = *num2; 
*num2 = tempnum; 
} 
main( )
 { 
int x = 10, y = 20 ; 
printf("Before swapping:"); 
printf("\nValue is: %d", x); 
printf("\nValue is: %d", y); 
swapnum(&x, &y ); 
printf("\nAfter swapping:"); 
printf("\nValueis: %d", x); 
printf("\nValue is: %d", y); 
}

