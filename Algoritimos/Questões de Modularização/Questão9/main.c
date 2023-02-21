/* Nome: Edson Renan Baierle
9. Faça um programa que lê 2 valores, o primeiro servindo de indicador de operação e o segundo
correspondendo ao raio de uma circunferência. Se o valor for 1, calcular e imprimir a área da
circunferência (função 1 sem retorno). Se o valor lido for 2, calcular e imprimir o perímetro da
circunferência (função 2 sem retorno), e se o valor lido for diferente destes dois valores, imprimir
uma mensagem dizendo que o indicador de operação foi mal fornecido.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calc_area(int R);
void calc_perimetro(int R);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int opc, raio;

    printf("\n1 para calcular a área da circunferência.");
    printf("\n2 para calcular o perímetro da circunferência.");
    printf("\nDigite sua escolha: ");
    scanf("%d", &opc);
    printf("\nDigite o raio da circunferência: ");
    scanf("%d", &raio);

    if(opc==1)
        calc_area(raio);
        else if(opc==2)
            calc_perimetro (raio);
        else
            printf("\nO indicador de operação foi mal fornecido.\n");
}


void calc_area(int R){
    float A;

    A=3.14*(R*R);
    printf("O valor da área da circunferência é de: %.2f", A);
}

void calc_perimetro(int R){
    float P;

    P=2*3.14*R;
    printf("O valor do perímetro da circunferência é de: %.2f", P);
}
