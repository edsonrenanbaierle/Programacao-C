//Nome: Edson Renan Baierle
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//FILA 1
typedef struct {           // registro para uma pessoa
       int  num;
} INFORMACAO;

typedef struct nodo {
       INFORMACAO info;    // dados do registro
       struct nodo* prox;  // ponteiro para o pr�ximo registro
} NODO;

typedef struct {
       NODO* prin;      // ponteiro para o in�cio da estrutura
       NODO* ult;         // ponteiro para o fim da estrutura
} dNODO;                  // com descritor
//


//FILA 2
typedef struct {           // registro para uma pessoa
       int  num2;
} INFORMACAO2;

typedef struct nodo2 {
       INFORMACAO2 info2;    // dados do registro
       struct nodo2* prox2;  // ponteiro para o pr�ximo registro
} NODO2;

typedef struct {
       NODO2* prin2;      // ponteiro para o in�cio da estrutura
       NODO2* ult2;         // ponteiro para o fim da estrutura
} dNODO2;

                        //fila 1
                        dNODO *PtDFila, *PtAjudante;
                        NODO *PtNovo, *PtAux;

                        //fila 2
                        dNODO2 *PtDFila2, *PtAjudante2;
                        NODO2 *PtNovo2, *PtAux2;

void adicionar();
void remover();
void consulta();
void removingImpar();

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char continuar='S';
    int op;

    //inicializador fila 1
    PtDFila=(dNODO*)malloc(sizeof(dNODO));
    PtDFila->prin=NULL;
    PtDFila->ult=NULL;

    //inicializador fila 2
    PtDFila2=(dNODO2*)malloc(sizeof(dNODO2));
    PtDFila2->prin2=NULL;
    PtDFila2->ult2=NULL;

    while(continuar!='N'&& continuar!='n'){
        printf("\n========FILA ENCADEADA========");
        printf("\nDigite 1 para INCERIR na fila!");
        printf("\nDigite 2 para REMOVER da fila!");
        printf("\nDigite 3 para CONSULTAR a fila!");
        printf("\nDigite 4 para REMOVER os numeros pares da fila");
        printf("\nEscolha -> ");
        scanf("%d", &op);

            switch(op){
        case 1:
            adicionar();
        break;

        case 2:
            remover();
        break;

        case 3:
            consulta();
        break;

        case 4:
            removingImpar();
        break;
        }
        printf("\n\nDeseja Continuar no programa? S/N");
        printf("\nEscolha -> ");
        scanf("%s", &continuar);
        sleep(1);
        system("cls");
    }
}

void adicionar(){

            PtNovo=(NODO*)malloc(sizeof(NODO));
            printf("Digite o numero: ");
            scanf("%d", &PtNovo->info.num);
            PtNovo->prox=NULL;
            if(PtDFila->prin==NULL)
                PtDFila->prin=PtNovo;
            else
                PtDFila->ult->prox=PtNovo;

            PtDFila->ult=PtNovo;
            printf("\nSucesso ao INCERIR na fila!\n");
}

void remover(){


    if(PtDFila->prin!=NULL){
        PtAux=PtDFila->prin;
        PtDFila->prin=PtAux->prox;
        free(PtAux);

        if(PtDFila->prin==NULL)
            PtDFila->ult=NULL;

    printf("\nREMOVIDO da fila!");
    }
        else
            printf("\nNao CONTEM informacoes na lista!");
}

void consulta(){

    if(PtDFila->prin!=NULL){
        printf("\nNUMERO CONTIDO NO COMECO DA FILA: %d", PtDFila->prin->info.num);
    }
        else
            printf("\nNao contem INORMACOES na fila!");
}

void removingImpar(){

    if(PtDFila->prin!=NULL){
        PtAjudante=PtDFila;
        while(PtAjudante->prin!=NULL){
            if(PtAjudante->prin->info.num %2 ==0){
                PtNovo2=(NODO2*)malloc(sizeof(NODO2));
                PtNovo2->info2.num2=PtAjudante->prin->info.num;
                PtNovo2->prox2=NULL;
                    if(PtDFila2->prin2==NULL)
                        PtDFila2->prin2=PtNovo2;
                    else
                        PtDFila2->ult2->prox2=PtNovo2;

                    PtDFila2->ult2=PtNovo2;
            }
            PtAjudante->prin=PtAjudante->prin->prox;
        }



        PtAjudante2=PtDFila2;
        while(PtAjudante2->prin2!=NULL){
            if(PtAjudante2->prin2->info2.num2 %2 ==0){
                PtNovo=(NODO*)malloc(sizeof(NODO));
                PtNovo->info.num=PtAjudante2->prin2->info2.num2;
                PtNovo->prox=NULL;
                    if(PtDFila->prin==NULL)
                            PtDFila->prin=PtNovo;
                        else
                            PtDFila->ult->prox=PtNovo;

                    PtDFila->ult=PtNovo;
            }
            PtAjudante2->prin2=PtAjudante2->prin2->prox2;
        }
        printf("\nSUCESSO AO REMOVER OS NUMEROS INPARES");
    }
    else
        printf("\nNao contem INORMACOES na fila!");
}
