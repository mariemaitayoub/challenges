#include <stdio.h>

int main() {
int a,b;
float r;
printf("donner a :");
scanf("%d",&a);

printf("donner b :");
scanf("%d",&b);
if (b != 0) {
        r = (float)a / b;
        printf("La division est %f\n", r);
    } else {
        printf("Erreur\n");
    }

printf("la somme est %d\n",a+b);
printf("subtraction  est %d\n",a-b);






    return 0;
}
