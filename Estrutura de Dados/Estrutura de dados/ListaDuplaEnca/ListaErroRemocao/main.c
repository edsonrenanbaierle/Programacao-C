#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{//registro para pessoa
    int codigo;
    char nome[50];
}INFORMACAO;

typedef struct nodo{
    INFORMACAO info;//dados do registro
    struct nodo *ant;//ponteiro q aponta para o anterior
    struct nodo *prox;//ponteiro que aponta para o próximo
}NODO;

NODO *PtAnt, *PtNovo, *PtK;

void adicionar_lista(NODO* Lista);
void remover_lista(NODO* Lista);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    NODO *PtLista;
    int op;//opção do usuário

    PtLista=NULL;

    printf("-----------------------------------");
    printf("\n[1] Adicionar na Lista.          ");
    printf("\n[2] Remover da Lista.            ");
    printf("\n[3] Imprime Lista.               ");
    printf("\n[4] Sair do Programa.            ");
    printf("\n---------------------------------");
    printf("\nOpção: ");
    scanf("%d", &op );

    while(op!=4){
        switch(op){
        case 1://Adiciona Na Lista
            adicionar_lista(&PtLista);
            break;
        case 2://remover da lista
            remover_lista(&PtLista);
            break;
        case 3: //ver
            ver_lista(&PtLista);
            break;
        }





        printf("-----------------------------------");
        printf("\n[1] Adicionar na Lista.          ");
        printf("\n[2] Remover da Lista.            ");
        printf("\n[3] Imprime Lista.               ");
        printf("\n[4] Sair do Programa.            ");
        printf("\n---------------------------------");
        printf("\nOpção: ");
        scanf("%d", &op );
    }
}
void adicionar_lista(NODO* Lista){
    int K;

    printf("\nDigite a posição que deseha inserir: ");
    scanf("%d", &K);

    PtNovo=(NODO*)malloc(sizeof(NODO));

    if(PtNovo==NULL){
        printf("\nNão é possível adicionar\n");
    }
        else if((Lista==NULL)&&(K!=1)||(K<1)){
            free(PtNovo);
            printf("\nImpossível adicionar nesta posição\n");
        }
            else if(K==1){
                printf("\nDigite o código da pessoa: ");
                scanf("%d", &Lista->info.codigo);
                printf("\nDigite o seu nome: ");
                scanf("%s", &Lista->info.nome);
                PtNovo->prox=Lista;
                if(Lista!=NULL)
                        Lista->ant=PtNovo;

                    PtNovo->ant=NULL;
                    Lista=PtNovo;
                    printf("\nSucesso ao incerir na posição 1\n");

            }
            else{
                PtAnt=Lista;
                while((PtAnt->prox!=NULL)&&(K>2)){
                    PtAnt=PtAnt->prox;
                    K--;
                }
                if(K>2){
                    free(PtNovo);
                    printf("\nERRO AO INCERIR!");
                }
                else{
                    printf("\nDigite o código da pessoa: ");
                    scanf("%d", &PtNovo->info.codigo);
                    printf("\nDigite o seu nome: ");
                    scanf("%s", &PtNovo->info.nome);
                    PtNovo->ant=PtAnt;
                    PtAnt->prox=PtNovo;
                    if(PtNovo->prox!=NULL)
                        PtNovo->prox->ant=PtNovo;

                    printf("\nSucesso ao INCERIR!");
                }
            }

}

void remover_lista(NODO* Lista){
    int K;

    printf("Digite a posição que deseja remover: ");
    scanf("%d", &K);

    if((Lista==NULL)&&(K!=1)||(K<1)){
        printf("\nImpossível Remover");
    }
        else{
            PtK=Lista;
            while((PtK!=NULL)&&(K>1)){
                K--;
                PtK=PtK->prox;
            }
            if(PtK==NULL)
                printf("\nNão é possível remover");
                else
                    printf("\nSucesso ao remover");

            if(PtK==Lista){
                Lista->ant=NULL;
                Lista=Lista->prox;
            }

                else{
                    PtK->ant->prox=PtK->prox;
                    if(PtK->prox!=NULL){
                        PtK->prox->ant=PtK->ant;
                        free(PtK);
                    }
                }
        }
}

void ver_lista(NODO* Lista){
    int K;

    PtK = Lista;
        while(PtK != NULL)
        {
            printf("\nCODIGO: %d", PtK->info.codigo);
            printf("\nNOME: %s\n", PtK->info.nome);
            PtK = PtK->prox;
        }
    if(PtK == NULL)
    printf("\nImpossivel consultar a Lista!");
}
