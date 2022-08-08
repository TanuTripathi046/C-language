#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int k,m,d,c,F,y;
    scanf("%d/%d/%d",&k,&m,&y);
    if(m==1||m==2)
    {
        m=m+10;
        y=y-1;
    }
    else
    {
        m=m-2;
    }
    c=y/100;
    d=y%100;
    F=(k+((13*m-1)/5)+d+(d/4)+(c/4)-(2*c));
    int r =abs(F%7);
    switch(r)
    {
        case 0:
            printf("Sunday");
            break;
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
    }
    
    return 0;
}