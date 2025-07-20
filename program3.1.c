#include<stdio.h>
int main()
{
char ch; //by default it'll store the garbage value.
printf("enter a character");  
scanf("%c", &ch);// & it represents the in scanf we'll adddress the variable
printf("You entered character --> %c\n",ch);
return 0;

}