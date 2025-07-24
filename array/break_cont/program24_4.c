#include <stdio.h>
int main()
{
int num, i, count=0;
printf("enter a number");
scanf("%d",&num);

if (num<2)
{
    printf("number should be greater than 1\n");
    return 1;
}
//logic
for(i=2; i*i<num;i++) //we know that number is always getting divisble by 1 so we can stsrt with 2 
{
    if(num %i==0){
    count=1;
    break;
}
}
if (count==0)
printf("prime\n");
else
printf("not prime\n");

}
//if num is 17
//it will check three times 4, 9, 16 <= 17
//17%i ==0; three times it will falls.
//next num is 25, it is not less than 17, so loop will end