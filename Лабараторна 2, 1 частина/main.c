#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x,y;
    printf("Enter x");
    scanf("%if",&x);
    if( x>= -2  &&  x < 2)
        y = cos(x) / 2);
    else if ( x >= 4  &&  x < 8 )
        y = pow(x,2) / exp(x) + sqrt(x-1);
    else if ( x >= 10  &&  x <= 20 )
        y = log(x+1) / x+1;
    else
        y = x/1000 - 4;
    system("cls");
    printf("x = %lf", x);
        printf("\ny = %lf", y);
    return 0;
}
