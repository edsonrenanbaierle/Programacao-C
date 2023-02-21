/*Escreva um algoritmo que calcule o valor de H, sendo que ele é determinado pela série:
H = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50.*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float resp_calc_H(int J);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int H;
    float resp;

    printf("\nDigite o um número para H calcular: ");
    scanf("%d", &H);
    resp=resp_calc_H(H);
    printf("\nO valor de H é = %.2f", resp);
}

float resp_calc_H(int J){
    int ind;
    float total, baixo=1, cima=1, total2=0;

    for(ind=1;ind<=J;ind++){
        total=cima/baixo;
        total2=total2+total;
        cima=cima+4;
        baixo++;
    }
    return total2;
}
