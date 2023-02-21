/*5. Nome: Edson Renan Baierle
 Faça um algoritmo que receba duas notas de seis alunos, calcule e mostre:
- a média aritmética das duas notas de cada aluno;
- a mensagem que está na tabela a seguir.
Média aritmética Mensagem
Até 3,0 Reprovado
Entre 3,0 e 7,0 Exame
Acima de 7,0 Aprovado
- o total de alunos aprovados;
- o total de alunos em exame;
- o total de alunos reprovados;
- a média da classe.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float media2notas(float n1, float n2);
void mensagem(float media2);
int totrepro(float media3);
int totexame(float media4);
int totapro(float media5);
float totmed(float medi6);


int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, nalunos=1, nrep, nex, napr;
    float nota1, nota2, media, totmedia;

    for(x=1;x<=6;x++){
        printf("\n---%d Aluno---", nalunos);
        printf("\nNota 1: ");
        scanf("%f", &nota1);
        printf("Nota 2: ");
        scanf("%f", &nota2);
        media=media2notas(nota1, nota2);
        mensagem(media);
        nrep=totrepro(media);
        nex=totexame(media);
        napr=totapro(media);
        totmedia=totmed(media);
        nalunos++;
    }
    printf("\nTotal de Reprovados - %d\n", nrep);
    printf("Total em Exame - %d\n", nex);
    printf("Total de Aprovados - %d\n", napr);
    printf("Total da Média de todos os alunos - %.2f", totmedia);
}

float media2notas(float n1, float n2){
    float total;

    total=(n1+n2)/2;

    printf("Média das 2 notas - %.2f\n", total);

    return total;
}

void mensagem(float media2){

    if(media2>=0 && media2<=2.99)
        printf("Aluno Reprovado!\n");
        else if(media2>=3 && media2<=7)
            printf("Aluno em Exame!\n");
            else if(media2>7)
                printf("Aluno Aprovado!\n");
}

int totrepro(float media3){
    int static totrepro=0;

    if(media3<3)
        totrepro++;

    return totrepro;
}

int totexame(float media4){
    int static totexame=0;

    if(media4>=3 && media4<=7)
        totexame++;

    return totexame;
}

int totapro(float media5){
    int static totapro=0;

    if(media5>7)
        totapro++;

    return totapro;
}

float totmed(float media6){
    float static totnotas=0;
    float totmed;

    totnotas=totnotas+media6;
    totmed=totnotas/6;

    return totmed;
}
