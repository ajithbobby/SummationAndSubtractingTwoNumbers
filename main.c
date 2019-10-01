#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int x, y;
    float a, b;

    scanf("%d\t%d", &x,&y);
    scanf("%f\t%f", &a,&b);
    printf("Summation of x and y is");
    printf("%d\t", x+y);
    printf("Difference of x and y is");
    printf("%d\n", x-y);
    printf("Summation of a and b is");
    printf("%.1f\t", a+b);
    printf("Difference of a and b is");
    printf("%.1f\n", a-b);
    return 0;
}
