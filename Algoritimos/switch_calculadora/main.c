//Nome: Edson Renan Baierle     Calculadora
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, y, op, resultado;

    printf("Digite o primeiro operando: ");
    scanf("%d", &x);
    printf("Digite o segundo operando: ");
    scanf("%d", &y);

    printf("\nEsolha uma das op��es!!");
    printf("\n1.soma");
    printf("\n2.Subtra��o");
    printf("\n3.Multiplica��o");
    printf("\n4.Divis�o");

    printf("\nDigite a op��o desejavel para a opera��o: ");
    scanf("%d", &op);

    switch(op){
        case 1:
            printf("\nOp��o selecionada: 1.soma");
            resultado=x+y;
            printf("\nO resultado da adi��o foi de: %d\n", resultado);
            break;
            case 2:
                printf("\nOp��o selecionada: 2.Subtra��o");
                resultado=x-y;
                printf("\nO resultado da Subtra��o foi de: %d\n", resultado);
                break;
                case 3:
                    printf("\nOp��o selecionada: 3.Multiplica��o");
                    resultado=x*y;
                    printf("\nO resultado da Multiplica��o foi de: %d\n", resultado);
                    break;
                    case 4:
                        printf("\nOp��o selecionada: 4.Divis�o");
                        resultado=x/y;
                        printf("\nO resultado da Divis�o foi de: %d\n", resultado);
                        break;
    }



}
