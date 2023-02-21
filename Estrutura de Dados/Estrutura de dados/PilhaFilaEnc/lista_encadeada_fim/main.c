#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {           // registro para uma pessoa
       int  codigo;
       char nome[30];
} INFORMACAO;

typedef struct nodo {
       INFORMACAO info;    // dados do registro
       struct nodo *prox;  // ponteiro para o pr�ximo registro(nodo)
} NODO;


//Variaveis globais
NODO *PtLista, *PtNovo, *PtNovo2, *PtAnt;

//voids
void adicionarFim();

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int op;
    char continuar='S';

    //inicializador
    PtLista=NULL;

    while(continuar=='S' || continuar=='s'){
    printf("\n---Digite a opção desejada---");
    printf("\n1. Adicionar no fim da Lista!");
    printf("\n2. Adicionar na Lista!");
    printf("\n3. Remover da Lista!");
    printf("\n4. Consultar a Lista!");
    printf("\nOpcao desejada: ");
    scanf("%d", &op);

    switch(op){
    case 1:
        adicionarFim();
    break;
    case 2:
        adicionar();
    break;
    }


    printf("\n\nCaso deseje continuar no programa digite S ou s: ");
    scanf("%s", &continuar);
    sleep(1);
    system("cls");
    }
}

void adicionarFim(){

    PtNovo=(NODO*)malloc(sizeof(NODO));

    if(PtNovo==NULL)
        printf("\nNao eh possivel a insercao!");
    else{
        printf("\nDigite o codigo do aluno: ");
        scanf("%d", &PtNovo->info.codigo);
        printf("\nDigite o nome do aluno: ");
        scanf("%s", &PtNovo->info.nome);
        PtNovo->prox=NULL;
        if(PtLista==NULL)
            PtLista=PtNovo;
        else{
            PtNovo2=PtLista;
            while(PtNovo2->prox!=NULL){
                PtNovo2=PtNovo2->prox;
                PtNovo2->prox=PtNovo;
            }
        }
    printf("\nSucesso ao Adicionar!");
    }
}

void adicionar(){


}
