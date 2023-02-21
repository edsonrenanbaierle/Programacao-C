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

int main()
{

    setlocale(LC_ALL, "Portuguese");
    NODO *PtPilha, *PtNovo, *PtAux;

    PtPilha=NULL;
    char continuar='S';
    int op;

    while(continuar!='N'&& continuar!='n'){
        printf("\n========PILHA ENCADEADA========");
        printf("\nDigite 1 para INCERIR na pilha!");
        printf("\nDigite 2 para REMOVER da pilha!");
        printf("\nDigite 3 para CONSULTAR o topo da pilha!");
        printf("\nEscolha -> ");
        scanf("%d", &op);

        switch(op){
        case 1:
            PtNovo=(NODO*)malloc(sizeof(NODO));
            printf("\nDigite o nome do ALUNO: ");
            scanf("%s", &PtNovo->info.nome);
            printf("Digite o codigo do ALUNO: ");
            scanf("%d", &PtNovo->info.codigo);
            PtNovo->prox=PtPilha;
            PtPilha=PtNovo;
            printf("\ninformacao INCERIDA com sucesso no topo!\n");
        break;

        case 2:
            if(PtPilha!=NULL){
                PtAux=PtPilha;
                PtPilha=PtPilha->prox;
                free(PtAux);
                printf("\nRemovido no topo < SUCESSO >\n");
            }
            else
                printf("\nNao se encontra INFORMACAO na pilha!\n");
        break;

        case 3:
            if(PtPilha==NULL)
                printf("\nNao contem INFORMACOES na pilha!!\n");
            else{
                printf("\nNOME do aluno -> %s", PtPilha->info.nome);
                 printf("\nCODIGO do aluno -> %d", PtPilha->info.codigo);
            }
        break;
        }

        printf("\n\nDeseja Continuar no programa? S/N");
        printf("\nEscolha -> ");
        scanf("%s", &continuar);
        sleep(1);
        system("cls");
    }




}
