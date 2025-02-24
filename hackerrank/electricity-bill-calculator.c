#include<stdio.h>
int main()
{
    int n;
    float amount;
    scanf("%d",&n);
    if(n<0)
    {
        printf("Invalid Input!");
        
        return 0;
    }
    else if(n<=100)
    {
        amount = n*5;
    }
    else if(n>100 && n<=300)
    {
        amount = (100*5) + ((n-100)*7);
    }
    else if(n>300)
    {
        amount = (100*5) + (200*7) + ((n-300)*10);
    }
    
    printf("The electricity bill is: %0.2f.",amount);
    
    return 0;
    
}