#include<stdio.h>
int main(){
    int x,y;
    scanf("%d",x);
    scanf("%d",y);

    if(x*y>0)
    {
        if(x>0)
        {
            printf("first quadrant");
        }
        else if(x<0)
        {
            printf("third quadrant");
        }
    }
    else if(x*y<0)
    {
        if(x<0)
        {
            printf("second quadrant");
        }
        else if(x>0)
        {
            printf("fourth quadrant")
        }
    else
    {
        if(x==0)
        {
            if(y==0)
            {
                printf("origin")
            }
            
        }
    }
    }
}