#include <stdio.h>

int main() {
    int lato;
    int i;
    int j;
    do {

        printf(" Quanti asterischi vuoi per ogni lato del triangolo? ");
        scanf("%d", &lato);
    }while(lato<=0);

    for ( i=0; i < lato; i++) {

        for (j = 0; j <= i; j++) {
            if (i == lato-1  || j == 0 || j == i) {
                printf(" * ");
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
}

