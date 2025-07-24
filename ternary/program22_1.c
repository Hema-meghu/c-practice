#include<stdio.h>
int main()
{
   int num =5;
   //condition?true exp: false exp;
   num > 10 ? printf("%d is greater than 10\n",num):printf("%d is less than 10\n",num);
   return 0;

}
//  Mistake : Missing variable in printf
    //  using %d but not passing 'num' as a value to printf.
    // Fix: Add 'num' as the second argument in printf.