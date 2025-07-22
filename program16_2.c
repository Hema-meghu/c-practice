/*switch case  
 switch(var)
 {
 case1:
 statements;
 break; //break is used to coume out from switch body, if we are not using break then fall through will happen 
 case2:
 statements;
 break;}*/
 #include<stdio.h>
 int main()
 
 {
   int var;
   printf("enter a value:");
   scanf("%d",&var);
   
   switch(var) //integral variable
   {
    case 10:
    printf("Var is 10\n");
    printf("hello\n");
    break;
    case 20:
    printf("Var is 20\n");
    printf("hii\n");
    break;
    case 30:
    printf("Var is 30\n");
    printf("bye\n");
    break;
    default:
    printf("It is default\n");
   }
   printf("Outside switch body\n");
 }
