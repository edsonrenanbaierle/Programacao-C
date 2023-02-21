//tipo do ponteiro é incompativel
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {           // registro para uma pessoa
       float  codigo;
       char nome[30];
} INFORMACAO;

typedef struct nodo {
       INFORMACAO info;    // dados do registro
       struct nodo* prox;  // ponteiro para o pr�ximo registro
} NODO;

void PilhaADD(NODO *PtPilha2);
void PilhaRemover(NODO *PtPilha2);
void PilhaConsulta(NODO *PtPilha2);

int main()
{

    setlocale(LC_ALL, "Portuguese");
    NODO *PtPilha;

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
            PilhaADD(&PtPilha);
        break;

        case 2:
            PilhaRemover(&PtPilha);
        break;

        case 3:
            PilhaConsulta(&PtPilha);
        break;
        }

        printf("\n\nDeseja Continuar no programa? S/N");
        printf("\nEscolha -> ");
        scanf("%s", &continuar);
        sleep(1);
        system("cls");
    }




}


void PilhaADD(NODO *PtPilha2){
    NODO *PtNovo;

    PtNovo=(NODO*)malloc(sizeof(NODO));
    printf("\nDigite o nome do ALUNO: ");
    scanf("%s", &PtNovo->info.nome);
    printf("Digite o codigo do ALUNO: ");
    scanf("%f", &PtNovo->info.codigo);
    PtNovo->prox=PtPilha2;
    PtPilha2->info=PtNovo->info;
    printf("\ninformacao INCERIDA com sucesso no topo!\n");
}

void PilhaRemover(NODO *PtPilha2){
    NODO *PtAux;

    if(PtPilha2!=NULL){
        PtAux=PtPilha2;
        PtPilha2=PtPilha2->prox;
        free(PtAux);
        printf("\nRemovido no topo < SUCESSO >\n");
    }
    else
        printf("\nNao se encontra INFORMACAO na pilha!\n");
}

void PilhaConsulta(NODO *PtPilha2){


    if(PtPilha2==NULL)
            printf("\nNao contem INFORMACOES na pilha!!\n");
    else{
        printf("\nNOME do aluno -> %s", PtPilha2->info.nome);
        printf("\nCODIGO do aluno -> %1.f", PtPilha2->info.codigo);
    }
}
