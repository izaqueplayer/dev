#include <stdio.h>

int main() {
    int numero;

    printf("Digte o numero: ");
    scanf("%d", & numero);

    if (numero % 2 == 0) {
        printf("Par.\n");
    } else {
        printf("impar.\n");
    }    

    return 0;
}