#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if((num%3==0 && num%3==0) && num%5!=0)
    {
        printf("A");
    }
    else if(((num%3==0 || num%7==0) && (!(num%3==0 && num%7==0))) && ((num>=10) && (num<100)))
    {
        printf("C");
    }
    
    if(num<200)
    {
        int i=0;
        while(i<=14)
        {
            if(num=i*i)
            {
                printf("D");
                return 0;
            }
        }
    }
}