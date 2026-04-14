
#include <stdio.h>
int main() 
{
 int n, rem, x, sum =0;
 
 printf("Enter a Number : ");
scanf("%d",&n);
 x=n;
 while (n > 0) 
 {
 rem = n%10;
 sum = sum * 10 + rem;
 n = n / 10;
 }
 
 if(sum==x)
 printf(" %d is a Palindrome Number ", x);
 else
 printf(" %d is Not a Palindrome Number ",x);
 
 return 0;
}
