#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {           // registro para uma pessoa
       int  codigo;
       char nome[30];
} INFORMACAO;

typedef struct nodo {
       INFORMACAO info;    // dados do registro
       struct nodo* prox;  // ponteiro para o pr�ximo registro
} NODO;

typedef struct {
       NODO* prin;      // ponteiro para o in�cio da estrutura
       NODO* ult;         // ponteiro para o fim da estrutura
} dNODO;                  // com descritor

int main()
{
    setlocale(LC_ALL, "Portuguese");

    dNODO *PtDFila;
    NODO *PtNovo, *PtAux;
    char continuar='S';
    int op;

    PtDFila=(dNODO*)malloc(sizeof(dNODO));
    PtDFila->prin=NULL;
    PtDFila->ult=NULL;

    while(continuar!='N'&& continuar!='n'){
        printf("\n========FILA ENCADEADA========");
        printf("\nDigite 1 para INCERIR na fila!");
        printf("\nDigite 2 para REMOVER da fila!");
        printf("\nDigite 3 para CONSULTAR o topo da fila!");
        printf("\nEscolha -> ");
        scanf("%d", &op);

            switch(op){
        case 1:
            PtNovo=(NODO*)malloc(sizeof(NODO));
            printf("\nDigite o nome do ALUNO: ");
            scanf("%s", &PtNovo->info.nome);
            printf("Digite o codigo do ALUNO: ");
            scanf("%d", &PtNovo->info.codigo);
            PtNovo->prox=NULL;
            if(PtDFila->prin==NULL)
                PtDFila->prin=PtNovo;
            else
                PtDFila->ult->prox=PtNovo;

            PtDFila->ult=PtNovo;
            printf("\nSucesso ao INCERIR na fila!\n");
        break;

        case 2:
            if(PtDFila->prin!=NULL){
                PtAux=PtDFila->prin;
                PtDFila->prin=PtAux->prox;
                free(PtAux);

            if(PtDFila->prin==NULL)
                PtDFila->ult=NULL;

            printf("\nREMOVIDO da fila!");
            } else
                printf("\nNao CONTEM informacoes na lista!");


        break;

        case 3:
            if(PtDFila->prin!=NULL){
                printf("\nNOME do aluno -> %s", PtDFila->prin->info.nome);
                printf("\nCODIGO do aluno -> %d", PtDFila->prin->info.codigo);
            }
            else
                printf("\nNao contem INORMACOES na fila!");
        break;
        }

        printf("\n\nDeseja Continuar no programa? S/N");
        printf("\nEscolha -> ");
        scanf("%s", &continuar);
        sleep(1);
        system("cls");
    }





}
