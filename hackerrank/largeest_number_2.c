#include<stdio.h>

int main()  
{
    int num1,num2,num3,largest;
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);

    largest = num1;

    if (num2>=largest){
        largest = num2;
    }
    if (num3>=largest){
        largest = num3;
    }
    printf("%d",largest);
}