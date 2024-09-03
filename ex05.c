#include <stdio.h>

int main() {

    float c;
    printf("donner la temp :");
    scanf("%f",&c);
    if(c<0){

        printf("solide");
    }
    else if (0<=c<100){
        printf("liquide");
    }
    else {
    printf("gaz");
    }
    return 0;
}
