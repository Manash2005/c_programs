#include <stdio.h>
#include<stdbool.h>

int main() {
    int h,t,grade,count;
    _Bool x,y,z;
    float c;
    scanf("%d %f %d",&h,&c,&t);
    grade = 5;
    count = 0;
    x=h>50;
    y=c<0.7f;
    z=t>5600;
    if(x || y || z)
    {
        //one of the condition passes
        grade = 6;
        count++;
        if(x)
        {
            //only x passes and y fails and z fails
            if(y)
            {
                //only x & y passes
                grade = 9;
                count++;
                if(z)
                {
                    //x passes and y passses and z passes
                    grade = 10;
                    count++;
                }
            }
            else if(z)
            {
                //only x & z passes
                grade = 7;
                count++;
            }
        }
        else if(y)
        {
            // y passes and x fails and z fails
            if(z)
            {
                //y and z passes
                grade = 8;
                count++;
            }
        }
    }
    printf("The grade of the steel is: %d\n",grade);
    if(count==0)
    {
        printf("None of the conditions met.");
    }
    else if(count==3)
    {
        printf("All of the conditions met.");
    }
    else if(count==2)
    {
        printf("Two conditions met.");
    }
    else
    {
        printf("Only one condition met.");    
    }
    return 0;
}