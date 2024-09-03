#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c,moyenne;
    printf("a est :");
    scanf("%f",&a);
    printf("b est :");
    scanf("%f",&b);
    printf("c est :");
    scanf("%f",&c);
    moyenne=pow(a*b*c,0.333333);
    printf("la moyenne est :%f",moyenne);


    return 0;
}
