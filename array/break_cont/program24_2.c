// finding the prime number 
//A number is completely divisble by 1 and it must divisble by itself 
#include <stdio.h>
int main()
{
int num, i, count=0;
printf("enter a number");
scanf("%d",&num);
//logic
for(i=2; i<num;i++) //we know that number is always getting divisble by 1 so we can stsrt with 2 
{
    if(num%i==0)
    count++;
}
if (count==0)
printf("prime\n");
else
printf("not prime\n");

}
/*
// finding the prime number 
//A number is completely divisble by 1 and it must divisble by itself 
#include <stdio.h>
int main()
{
int num, i, count=0;
printf("enter a number");
scanf("%d",&num);
//logic
for(i=2; i*i<num;i++) //we know that number is always getting divisble by 1 so we can stsrt with 2 
{
    if(num%i==0)
    count=1;
    break;
}
if (count==0)
printf("prime\n");
else
printf("not prime\n");

}*/