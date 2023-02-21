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

    printf("\nEsolha uma das opções!!");
    printf("\n1.soma");
    printf("\n2.Subtração");
    printf("\n3.Multiplicação");
    printf("\n4.Divisão");

    printf("\nDigite a opção desejavel para a operação: ");
    scanf("%d", &op);

    switch(op){
        case 1:
            printf("\nOpção selecionada: 1.soma");
            resultado=x+y;
            printf("\nO resultado da adição foi de: %d\n", resultado);
            break;
            case 2:
                printf("\nOpção selecionada: 2.Subtração");
                resultado=x-y;
                printf("\nO resultado da Subtração foi de: %d\n", resultado);
                break;
                case 3:
                    printf("\nOpção selecionada: 3.Multiplicação");
                    resultado=x*y;
                    printf("\nO resultado da Multiplicação foi de: %d\n", resultado);
                    break;
                    case 4:
                        printf("\nOpção selecionada: 4.Divisão");
                        resultado=x/y;
                        printf("\nO resultado da Divisão foi de: %d\n", resultado);
                        break;
    }



}
