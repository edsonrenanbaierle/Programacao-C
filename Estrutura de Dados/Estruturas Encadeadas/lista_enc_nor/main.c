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
NODO *PtLista, *PtNovo, *PtNovo2, *PtAnt, *PtK;

int K; //k guarda a posição

//voids
void adicionarFim();
void remover();
void adicionar();
void consulta();

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
    case 3:
        remover();
    break;
    case 4:
        consulta();
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

    printf("\nDigite a posicao que deseja adicionar: ");
    scanf("%d", &K);

    PtNovo=(NODO*)malloc(sizeof(NODO));
    if(PtNovo==NULL)
        printf("\nNão eh possivel adicionar uma nova informacao");
        else if(((PtLista==NULL)&&(K!=1))||(K<1)){
            free(PtNovo);
            printf("\nNão eh possivel adicionar uma nova informacao");
        }
            else if(K==1){
                printf("\nDigite o codigo do aluno: ");
                scanf("%d", &PtNovo->info.codigo);
                printf("\nDigite o nome do aluno: ");
                scanf("%s", &PtNovo->info.nome);
                PtNovo->prox=PtLista;
                PtLista=PtNovo;
                printf("\nSucesso ao incerir na posicao 1");
            }
            else{
                PtAnt=PtLista;
                while((PtAnt->prox!=NULL)&&(K>2)){
                    PtAnt=PtAnt->prox;
                    K--;
                }
                if(K>2){
                    free(PtNovo);
                    printf("\nNao eh possivel incerir nesta posicao");
                }
                else{
                    printf("\nDigite o codigo do aluno: ");
                    scanf("%d", &PtNovo->info.codigo);
                    printf("\nDigite o nome do aluno: ");
                    scanf("%s", &PtNovo->info.nome);
                    PtNovo->prox=PtAnt->prox;
                    PtAnt->prox=PtNovo;
                    printf("\nSucesso ao incerir");
                }
            }
}

void remover(){

    printf("\nDigite a posicao que deseja remover: ");
    scanf("%d", &K);

    if(K<1)
        printf("\nNao eh possivel adicionar numa posicao menor que 1");
    else{
        PtK=PtLista;
        PtAnt=NULL;
        while((PtK !=NULL)&&(K>1)){
            K--;
            PtAnt=PtK;
            PtK=PtK->prox;
        }
            if(PtK==NULL)
                printf("\nNao eh possivel remover");
            else{
                if(PtK==PtLista)
                    PtLista=PtLista->prox;
                else
                    PtAnt->prox=PtK->prox;

                free(PtK);
                printf("\nSucesso ao remover");
            }

    }
}

void consulta(){

    printf("\nDigite a posicao que deseja consultar: ");
    scanf("%d", &K);

    if(K<1||PtLista==NULL){
        PtK=NULL;
        printf("\nSem informacoes contidas na lista");
    }
    else{
        PtK=PtLista;
        while((PtK !=NULL)&&(K>1)){
            K--;
            PtK=PtK->prox;
        }
            if(K > 1)
                PtK = NULL;
    }
                if(PtK == NULL){
                    printf("\nImpossivel consultar a Lista!");
                }
                else{
                    printf("\nCodigo do aluno na posicao desejada: %d", PtK->info.codigo);
                    printf("\nNome do aluno na posicao desejada: %s", PtK->info.nome);

                }
}
