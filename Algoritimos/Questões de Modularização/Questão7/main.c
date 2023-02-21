/*Nome: Edson Renan Baierle
7. Dados três valores, A, B e C, verificar, por meio de uma função com retorno, se eles podem ser
lados de um triângulo. Caso sejam, outra função deverá calcular e informar sua área e se compõem
um triângulo isósceles, escaleno ou equilátero.
Fórmula de Heron para a área de um triângulo qualquer:
onde s é o semi-perímetro do triângulo (s= (a+b+c)/2).
Para que três valores possam ser lados de um triângulo, cada um deles deverá ser inferior a soma dos
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

    printf("\nDigite os 3 lados de um triângulo!");
    printf("\nDigite o 1° lado do triângulo: ");
    scanf("%d", &A);
    printf("Digite o 2° lado do triângulo: ");
    scanf("%d", &B);
    printf("nDigite o 3° lado do triângulo: ");
    scanf("%d", &C);

    X=poss_triangulo(A, B, C);
    AT=calc_triangulo(A, B, C, X);

    printf("\nA área do triângulo é: %d", AT);

    TIPO=tipo_triangulo(A, B, C);

    if(TIPO==0)
        printf("\nÉ um triângulo ESCALENO!\n");
        else if(TIPO==1)
            printf("\nÉ um triângulo EQUILATERO!\n");
            else
                printf("\nÉ um triângulo ISÓSCELES!\n");
}

int poss_triangulo(int D, int E, int F){
    int opt;

    if((D<E+F)&&(E<D+F)&&(F<D+E)){
        printf("\nPossível formar um triângulo!\n");
        opt=1;
    }
        else{
            printf("\nNão é possível formar um triângulo\n");
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
