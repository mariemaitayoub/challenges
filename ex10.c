#include <stdio.h>
#include <math.h>



int main() {
    float x1,x2 ,y1,y2,z1,z2,distance;
    printf("x1 est :");
    scanf("%f",&x1);
        printf("x2 est :");
            scanf("%f",&x2);

    printf("y1 est :");
        scanf("%f",&y1);

    printf("y2 est :");
        scanf("%f",&y2);

    printf("z1 est :");
        scanf("%f",&z1);

    printf("z2 est :");
        scanf("%f",&z2);
distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2));

   printf("la distance est %f",distance) ;



    return 0;
}
