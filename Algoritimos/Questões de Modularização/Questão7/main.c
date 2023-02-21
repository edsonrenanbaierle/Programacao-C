/*Nome: Edson Renan Baierle
7. Dados tr�s valores, A, B e C, verificar, por meio de uma fun��o com retorno, se eles podem ser
lados de um tri�ngulo. Caso sejam, outra fun��o dever� calcular e informar sua �rea e se comp�em
um tri�ngulo is�sceles, escaleno ou equil�tero.
F�rmula de Heron para a �rea de um tri�ngulo qualquer:
onde s � o semi-per�metro do tri�ngulo (s= (a+b+c)/2).
Para que tr�s valores possam ser lados de um tri�ngulo, cada um deles dever� ser inferior a soma dos
outros dois.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int poss_triangulo(int D, int E, int F);
int calc_triangulo(int A1, int B1, int C1, int opc);
int tipo_triangulo(int A2, int B2, int C2);

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int A, B, C, X, AT, TIPO;

    printf("\nDigite os 3 lados de um tri�ngulo!");
    printf("\nDigite o 1� lado do tri�ngulo: ");
    scanf("%d", &A);
    printf("Digite o 2� lado do tri�ngulo: ");
    scanf("%d", &B);
    printf("nDigite o 3� lado do tri�ngulo: ");
    scanf("%d", &C);

    X=poss_triangulo(A, B, C);
    AT=calc_triangulo(A, B, C, X);

    printf("\nA �rea do tri�ngulo �: %d", AT);

    TIPO=tipo_triangulo(A, B, C);

    if(TIPO==0)
        printf("\n� um tri�ngulo ESCALENO!\n");
        else if(TIPO==1)
            printf("\n� um tri�ngulo EQUILATERO!\n");
            else
                printf("\n� um tri�ngulo IS�SCELES!\n");
}

int poss_triangulo(int D, int E, int F){
    int opt;

    if((D<E+F)&&(E<D+F)&&(F<D+E)){
        printf("\nPoss�vel formar um tri�ngulo!\n");
        opt=1;
    }
        else{
            printf("\nN�o � poss�vel formar um tri�ngulo\n");
        }

    return opt;
}

int calc_triangulo(int A1, int B1, int C1, int opc){
        int S;

        if(opc==1)
            S=(A1+B1+C1)/2;

        return S;
}

int tipo_triangulo(int A2, int B2, int C2){
        int tip;

        if((A2!=B2)&&(B2!=C2)&&(A2!=C2)){
            tip=0;
        }
            else if((A2==B2)&&(B2==C2)&&(A2==C2)){
            tip=1;
            }
                else
                    tip=2;

        return tip;
}
