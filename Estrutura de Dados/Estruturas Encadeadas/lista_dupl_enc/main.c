#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


typedef struct {
       int  code;
       char name[30];
} INFORMACAO;

typedef struct lista{
    INFORMACAO info;
    struct lista *prox, *ant;

} lista;

    int opt, k, code, count = 1, count_error = 0;
    lista *ptAnt, *ptLista, *ptNovo, *ptK, *pt;
    char name[30];

void inserir();
void removing();
void consult();

int main()
{
     setlocale(LC_ALL, "Portuguese");

    ptLista = NULL;

    while (opt != 4){
        printf("\n=====================");
        printf("\nDigite o que deseja fazer:");
        printf("\n1 - inserir na lista");
        printf("\n2 - remover");
        printf("\n3 - ver o nodo por posi��o na lista");
        printf("\n4 - sair:");
        printf("\n=====================");
        printf("\nOp��o:");
        scanf("%d", &opt);

        if (opt == 1){
           inserir();
        } else if (opt == 2){
           removing();
        } else if (opt == 3){
           consult();
        }

    }
    return 0;

}
void inserir()
{

    printf("\nDigite a posi��o na qual deseja inserir: ");
    scanf("%d", &k);
    ptNovo = (lista*)malloc(sizeof(lista));

    if (ptNovo == NULL){
        printf("\nErro! Imposs�vel alocar!");
    } else if ((ptLista == NULL && k != 1) || k < 1){
        free(ptNovo);
        printf("\nErro! Imposs�vel alocar! Endere�o inv�lido!");
    } else if (k == 1){
        printf("\nDigite o c�digo que deseja inserir: ");
        scanf("%d", &ptNovo->info.code);

        printf("\nDigite o primeiro nome do estudante: ");
        scanf("%s", &ptNovo->info.name);

	ptNovo->prox = ptLista;
        if (ptLista != NULL){
            ptLista->ant = ptNovo;
        }
        ptNovo->ant = NULL;
        ptLista = ptNovo;
    } else {
        ptAnt = ptLista;
        while ((ptAnt->prox != NULL) && (k > 2)){
            ptAnt = ptAnt->prox;
            k --;
        }
        if (k > 2){
            free(ptNovo);
            printf("\nErro! Imposs�vel inserir nesta posi��o!");

        } else {
            printf("\nDigite o c�digo que deseja inserir: ");
            scanf("%d", &ptNovo->info.code);

            printf("\nDigite o primeiro nome do estudante: ");
            scanf("%s", &ptNovo->info.name);

            ptNovo->prox = ptAnt->prox;
            ptNovo->ant = ptAnt;
            ptAnt->prox = ptNovo;
            if (ptNovo->prox != NULL){
                ptNovo->prox->ant = ptNovo;
            }
    }
            }
}

void removing()
{
     printf("\nDigite qual a posi��o que deseja remover da Lista: ");
            scanf("%d", &k);

            if((ptLista == NULL && k != 1) || k < 1){
                printf("\nImposs�vel remover valor da Lista!");
            }else {
                ptK = ptLista;
                while((ptK != NULL) && (k > 1)){
                    k--;
                    ptK = ptK->prox;
                }
                if(ptK == NULL){
                    printf("\nImposs�vel remover valor da Lista!");
                }else {
                    if(ptK == ptLista){
                        ptLista->ant = NULL;
                        ptLista = ptLista->prox;
                    }
                    else {
                        ptK->ant->prox = ptK->prox;
                        if (ptK->prox != NULL){
                            ptK->prox->ant = ptK->ant;
                        }
                        free(ptK);
                    }

                    printf("\nValor removido com sucesso!");
                }
            }

}

void consult()
{
     printf("\nDigite qual a posi��o que deseja consultar: ");
            scanf("%d", &k);

            if((k < 1) || (ptLista == NULL)){
                ptK = NULL;
            }
                else{
                    ptK = ptLista;
                    while((ptK != NULL) && (k > 1)){
                        k--;
                        ptK = ptK->prox;
                    }
                    if(k > 1)
                        ptK = NULL;
                }
                if(ptK == NULL){
                    printf("\nImpossivel consultar a Lista!");
                }
                else{
                    printf("\nC�digo da posi��o indicada: %d", ptK->info.code);
                    printf("\nNome da posi��o indicada: %s", ptK->info.name);

        }
}
