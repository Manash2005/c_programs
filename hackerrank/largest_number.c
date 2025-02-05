//day 1
//find the largest number for the three number
#include<stdio.h>

int main()
{
    int num1,num2,num3;
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);

    if (num1 > num2)
    {
        if(num1>num3)
        {
            printf("The largest number is : %d", num1);
        }
        else if(num1 == num3)
        {
            printf("The largest number is : %d", num1);
        }
        else
        {
            printf("The largest number is : %d", num3);
        }
    }
    else if(num2 > num1)
    {
        if(num2>num3)
        {
            printf("The largest number is : %d", num2);
        }
        else if(num2 == num3){
            printf("The largest number is : %d", num3);
        }
        else
        {
            printf("The largest number is : %d", num3);
        }
    }
    else
    {
        if(num1<num3)
        {
            printf("The largest number is : %d", num3);
        }
        else if(num1 == num3)
        {
            printf("The largest number is : %d", num1);
        }
        else
        {
            printf("The largest number is : %d", num1);
        }
    }
    return 0;
}
