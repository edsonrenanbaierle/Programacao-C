//Nome: Edson Renan Baierle Matricula: 131545
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {           // registro para uma pessoa
       int  codigo;
} INFORMACAO;

typedef struct nodo {
       INFORMACAO info;    // dados do registro
       struct nodo* prox;  // ponteiro para o pr�ximo registro
} NODO;

//pilha 2
typedef struct {           // registro para uma pessoa
       int  codigo2;
} INFORMACAO2;

typedef struct nodo2 {
       INFORMACAO2 info2;    // dados do registro
       struct nodo2* prox2;  // ponteiro para o pr�ximo registro
} NODO2;

//pilha 3
typedef struct {           // registro para uma pessoa
       int  codigo3;
} INFORMACAO3;

typedef struct nodo3 {
       INFORMACAO3 info3;    // dados do registro
       struct nodo3* prox3;  // ponteiro para o pr�ximo registro
} NODO3;

//pilha 4
typedef struct {           // registro para uma pessoa
       int  codigo4;
} INFORMACAO4;

typedef struct nodo4 {
       INFORMACAO4 info4;    // dados do registro
       struct nodo4* prox4;  // ponteiro para o pr�ximo registro
} NODO4;

//pilha 1
NODO *PtPilha, *PtNovo, *PtAux, *PtAjudante;

//pilha 2
NODO2 *PtPilha2, *PtNovo2, *PtAux2, *PtAjudante2;

//pilha 3
NODO3 *PtPilha3, *PtNovo3, *PtAux3, *PtAjudante3;

//pilha 4
NODO4 *PtPilha4, *PtNovo4, *PtAux4, *PtAjudante4;

//Contadores para conferir se ambas as pilhas possuem o mesmo tamanho
int cont1=0, cont2=0;

//voids
void addPilha1();
void addPilha2();
int consultaIgualdade();

int main()
{

    setlocale(LC_ALL, "Portuguese");

    char continuar='S';
    int op, retorno; //retorno vai receber um número inteiro e conferir se é igual ou diferente a pilha;

    //inicializador das pilhas
    PtPilha=NULL;
    PtPilha2=NULL;
    PtPilha3=NULL;
    PtPilha4=NULL;


    while(continuar!='N'&& continuar!='n'){
        printf("\n========PILHA ENCADEADA========");
        printf("\nDigite 1 para INCERIR na pilha 1!");
        printf("\nDigite 2 para INCERIR na pilha 2!");
        printf("\nDigite 3 para CONSULTAR se ambas as pilhas sao iguais");
        printf("\nEscolha -> ");
        scanf("%d", &op);

        switch(op){
        case 1:
            addPilha1();
        break;

        case 2:
            addPilha2();
        break;

        case 3:
            retorno=consultaIgualdade();
            if(retorno==1)
                printf("\nPILHAS IGUAIS");
                else if(retorno==2)
                    printf("\nPILHAS DIFERENTES");
                        else if(retorno==3)
                            printf("\nAMBAS PILHAS SEM INFORMACOES");


        break;
        }

        printf("\n\nDeseja Continuar no programa? S/N");
        printf("\nEscolha -> ");
        scanf("%s", &continuar);
        sleep(1);
        system("cls");
    }
}

void addPilha1(){

    PtNovo=(NODO*)malloc(sizeof(NODO));
    printf("Digite um numero INTEIRO: ");
    scanf("%d", &PtNovo->info.codigo);
    PtNovo->prox=PtPilha;
    PtPilha=PtNovo;
    printf("\ninformacao INCERIDA com sucesso no topo da PILHA 1!\n");
    cont1++;
}

void addPilha2(){

    PtNovo2=(NODO2*)malloc(sizeof(NODO2));
    printf("Digite um numero INTEIRO: ");
    scanf("%d", &PtNovo2->info2.codigo2);
    PtNovo2->prox2=PtPilha2;
    PtPilha2=PtNovo2;
    printf("\ninformacao INCERIDA com sucesso no topo da PILHA 2!\n");
    cont2++;
}

int consultaIgualdade(){
    int x, diferente=0;

    if(cont1!=cont2)
        diferente=2;
    else{
        PtAjudante=PtPilha;
        PtAjudante2=PtPilha2;

        if(PtAjudante==NULL && PtAjudante2==NULL)
            x=3;
        else{
            while(PtAjudante!=NULL && PtAjudante2!=NULL){
                if(PtAjudante->info.codigo != PtAjudante2->info2.codigo2)
                    diferente++;

                //Pilha 3 recebe Pilha 1
                PtNovo3=(NODO3*)malloc(sizeof(NODO3));
                PtNovo3->info3.codigo3=PtAjudante->info.codigo;
                PtNovo3->prox3=PtPilha3;
                PtPilha3=PtNovo3;
                //remoção dos dados da pilha 1
                PtAux=PtPilha;
                PtPilha=PtPilha->prox;
                free(PtAux);

                //Pilha 4 recebe Pilha 2
                PtNovo4=(NODO4*)malloc(sizeof(NODO4));
                PtNovo4->info4.codigo4=PtAjudante2->info2.codigo2;
                PtNovo4->prox4=PtPilha4;
                PtPilha4=PtNovo4;
                //remoção dos dados da pilha 2
                PtAux2=PtPilha2;
                PtPilha2=PtPilha2->prox2;
                free(PtAux2);

                PtAjudante=PtAjudante->prox;
                PtAjudante2=PtAjudante2->prox2;
            }

            PtAjudante3=PtPilha3;
            PtAjudante4=PtPilha4;

            while(PtAjudante3!=NULL && PtAjudante4!=NULL){

                //Pilha 1 recebe Pilha 3
                PtNovo=(NODO*)malloc(sizeof(NODO));
                PtNovo->info.codigo=PtAjudante3->info3.codigo3;
                PtNovo->prox=PtPilha;
                PtPilha=PtNovo;
                //remoção dos dados da pilha 3
                PtAux3=PtPilha3;
                PtPilha3=PtPilha3->prox3;
                free(PtAux3);

                //Pilha 2 recebe Pilha 4
                PtNovo2=(NODO2*)malloc(sizeof(NODO2));
                PtNovo2->info2.codigo2=PtAjudante4->info4.codigo4;
                PtNovo2->prox2=PtPilha2;
                PtPilha2=PtNovo2;
                //remoção dos dados da pilha 4
                PtAux4=PtPilha4;
                PtPilha4=PtPilha4->prox4;
                free(PtAux4);

                PtAjudante3=PtAjudante3->prox3;
                PtAjudante4=PtAjudante4->prox4;

            }
        }
    }

    if(diferente>=1)
        x=2;
        else if(diferente==0)
            x=1;

    if(PtPilha==NULL && PtPilha2==NULL)
        x=3;

    return x;
}



