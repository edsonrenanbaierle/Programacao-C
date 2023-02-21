/* Nome: Edson Renan Baierle
9. Fa�a um programa que l� 2 valores, o primeiro servindo de indicador de opera��o e o segundo
correspondendo ao raio de uma circunfer�ncia. Se o valor for 1, calcular e imprimir a �rea da
circunfer�ncia (fun��o 1 sem retorno). Se o valor lido for 2, calcular e imprimir o per�metro da
circunfer�ncia (fun��o 2 sem retorno), e se o valor lido for diferente destes dois valores, imprimir
uma mensagem dizendo que o indicador de opera��o foi mal fornecido.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calc_area(int R);
void calc_perimetro(int R);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int opc, raio;

    printf("\n1 para calcular a �rea da circunfer�ncia.");
    printf("\n2 para calcular o per�metro da circunfer�ncia.");
    printf("\nDigite sua escolha: ");
    scanf("%d", &opc);
    printf("\nDigite o raio da circunfer�ncia: ");
    scanf("%d", &raio);

    if(opc==1)
        calc_area(raio);
        else if(opc==2)
            calc_perimetro (raio);
        else
            printf("\nO indicador de opera��o foi mal fornecido.\n");
}


void calc_area(int R){
    float A;

    A=3.14*(R*R);
    printf("O valor da �rea da circunfer�ncia � de: %.2f", A);
}

void calc_perimetro(int R){
    float P;

    P=2*3.14*R;
    printf("O valor do per�metro da circunfer�ncia � de: %.2f", P);
}
