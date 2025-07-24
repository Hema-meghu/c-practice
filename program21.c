/*Date:21/07/2025
Description: find the middle number
Sample I/p: 10 20 30
Sample o/p: 20*/

/*Name: Hema R
Date:21/07/2025
Description: find the middle number
Sample I/p: 10 20 30
Sample o/p: 20*/

#include<stdio.h>

int main()

{
    int num1,num2,num3, middle;
    
    printf("enter the 3 numbers");
    scanf("%d%d%d",&num1,&num2,&num3);
    //case1:num1>num2 and num1>num3
    //case2:num1<num2 and num1>num3
    
    if ((num1>num2 &&num1<num2)||(num1<num2 &&num1>num3))
   { 
       middle=num1;
       
   }
    
    //case1:num2>num1 and num<num3
    //case2:num2<num1 and num2>num3
    
    else if ((num2>num1&&num2<num3)||(num2<num1 &&num2>num3))
   { 
       middle=num2;
   }
    
    else
    {
    middle=num3;
    }
    printf("Middle number is: %d\n",middle);
    return 0;
    
}