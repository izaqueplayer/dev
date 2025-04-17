#include <stdio.h>

int main(){
    int idade;

    printf("digite a idade: ");
    scanf("%d", &idade);

    if (idade < 12){
        printf("Criança.\n");
    } else if (idade >= 12 && idade <= 17) {
        printf("Adolescente");
    } else {
        printf("Adulto.\n");
    }
    
    return 0;
}
