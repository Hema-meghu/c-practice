#include<stdio.h> //Grade a student based on their score 
int main()
{
    float score;
    printf("enter the student's score(0-100):");
    scanf("%f",&score);

    if (score<0 || score>100)
    {
        printf("Invalid Input\n");
        return -1;//any integer we can write 
    }
    if (score>=86 && score <=100)
    {
        printf("grade A\n");
    }
    else if (score>=70 && score <=85)
    {
        printf("grade B\n");
    }
    else if (score>=56 && score <=69)
    {
        printf("grade C\n");
    }
    else if (score>=40 && score<=55)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("grade F\n");
    }
    return 0;

}