#include <stdio.h>

int main() {

    int a,b,c,cond_1,cond_2,cond_3;
    scanf("%d %d %d",&a,&b,&c);
    cond_1 = a+b>c;
    cond_2 = a+c>b;
    cond_3 = c+b>a;
    printf("Lengths: [%d, %d, %d]\n",a,b,c);
    if(cond_1 && cond_2 && cond_3)
    {
        if(a==b && c==b)
        {
            printf("Type: Equilateral\n");
            printf("All sides are of the same length.\n");
        }
        else if(a!=b && b!=c && c!=a)
        {
            printf("Type: Scalene\n");
            printf("All sides are of different lengths.\n");
        }
        else{
            printf("Type: Isosceles\n");
            printf("Exactly two sides are equal.\n");
        }
    }
    else
    {
        printf("Type: Invalid\n");
        printf("Cannot form a valid shape.\n");
    }
    
    
    return 0;
}