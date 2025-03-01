#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int ang;
    scanf("%d",&ang);
    if(ang<90 || ang==0)
    {
        printf("Acute Angle");
    }
    else if(ang==90)
    {
        printf("Right Angle");
    }
    else if(ang>90 && ang<180)
    {
        printf("Obtuse Angle");
    }
    else if(ang==180)
    {
        printf("Straight Angle");
    }
    else if(ang<360 && ang>180)
    {
        printf("Reflex Angle");
    }
    else if(ang==360)
    {
        printf("Full Rotation");
    }
    else
    {
        if(ang%360==0)
        {
            printf("Full Rotation");
        }
        else if(ang%360<90)
        {
            printf("Acute Angle");
        }
        else if(ang%360==90)
        {
            printf("Right Angle");
        }
        else if(ang%360>90 && ang%360<180)
        {
            printf("Obtuse Angle");
        }
        else if(ang%360<360 && ang%360>180)
        {
            printf("Reflex Angle");
        }
        else if(ang%360==180)
        {
            printf("Straight Angle");
        }
    }
        
    return 0;
}
