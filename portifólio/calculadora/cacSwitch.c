#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {

    setlocale(LC_ALL,"Portuguese_Brazil");

    int op;
    float n1, n2, res;

    printf("Qual operacao deseja fazer? \n \n");
    printf("Digite 1 para Somar \n");
    printf("Digite 2 para Subtrair \n");
    printf("Digite 3 para Multiplicar \n");
    printf("Digite 4 para Dividir \n");
    
    do {
        scanf("%d", &op);

        if (op != 1 && op != 2 && op != 3 && op != 4)
        {
             printf("Numero invalido, digite outro numero: \n");
        }
    } while (op != 1 && op != 2 && op != 3 && op != 4);

    printf("Insira seu primeiro numero: \n");
    scanf("%f", &n1);

    printf("Insira seu segundo numero: \n");
    scanf("%f", &n2);

    switch (op)
    {
    case 1:
        res = n1 + n2;
        printf("Soma: %.5f \n", res);
        break;
    case 2 :
        res = n1 - n2;
        printf("Subtracao: %.5f \n", res);

        break;
    case 3 :
        res = n1 * n2;
        printf("Multiplicao: %.5f \n", res);

        break;
    case 4 :
        if (n2 == 0) {
            printf("Impossivel realizar divisao por 0");
        } else {
            res = n1 / n2;
            printf("Divisao: %.5f \n", res);
        }
        break;
    default:
        break;
    }
}