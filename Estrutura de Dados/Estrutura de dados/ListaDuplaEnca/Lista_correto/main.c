#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {  // registro para uma pessoa
       int  codigo;
       char nome[30];
} INFORMACAO;

typedef struct lista{
    INFORMACAO info;
    struct lista *ant; // apontador para o elemento anterior
    struct lista *prox; // apontador para o pr�ximo elemento
}LISTA;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    LISTA *PtLista, *PtK, *Pt, *PtAnt,  *PtNovo;
    int op, K;

    //Inicializador
    PtLista = NULL;

    printf("\nEscolha a op��o desejada: ");
    printf("\n1. Inserir uma informa��o na Lista;");
    printf("\n2. Remover uma informa��o da Lista;");
    printf("\n3. Consultar uma informa��o da Lista;");
    printf("\n4. Sair;");
    printf("\nOp��o: ");
    scanf("%d", &op);

    while(op != 4){
        if(op == 1){
            printf("\nDigite em qual posi��o deseja inserir: ");
            scanf("%d", &K);

            PtNovo = (LISTA*)malloc(sizeof(LISTA));
            if(PtNovo == NULL){
                printf("\nN�o foi poss�vel alocar mem�ria!");
                exit(1);
            }else if(((PtLista == NULL) && (K != 1)) || (K < 1)){
                free(PtNovo);
                printf("\nN�o � poss�vel inserir!");
            }else if(K == 1){
                printf("\nDigite o nome que deseja inserir: ");
                scanf("%s", &PtNovo->info.nome);
                fflush(stdin);
                printf("\nDigite o c�digo do nome: ");
                scanf("%d", &PtNovo->info.codigo);
                fflush(stdin);
                PtNovo->prox = PtLista;
                if (PtLista != NULL)
                     PtLista->ant = PtNovo;
                PtNovo->ant = NULL;
                PtLista = PtNovo;
                printf("\nValor inserido com sucesso!");
            }else{
                PtAnt = PtLista;
                while((PtAnt->prox != NULL) && (K > 2)){
                    PtAnt = PtAnt->prox;
                    K--;
                }
                if(K > 2){
                    free(PtNovo);
                    printf("\nN�o � poss�vel inserir!");
                }else {
                    printf("\nDigite o nome que deseja inserir: ");
                    scanf("%s", &PtNovo->info.nome);
                    fflush(stdin);
                    printf("\nDigite o c�digo do nome: ");
                    scanf("%d", &PtNovo->info.codigo);
                    fflush(stdin);
                    PtNovo->prox = PtAnt->prox;
                    PtNovo->ant = PtAnt;
                    PtAnt->prox = PtNovo;
                    if(PtNovo->prox != NULL)
                        PtNovo->prox->ant = PtNovo;
                    printf("\nValor inserido com sucesso!");
                }
            }
        }

        if(op == 2){ // Remo��o
            printf("\nDigite qual a posi��o que deseja remover da Lista: ");
            scanf("%d", &K);

            if(K < 1 || (PtLista == NULL && K != 1)){
                printf("\nImposs�vel remover valor da Lista!");
            }else {
                PtK = PtLista;
                while((PtK != NULL) && (K > 1)){
                    K--;
                    PtK = PtK->prox;
                }
                if(PtK == NULL){
                    printf("\nImposs�vel remover valor da Lista!");
                }else {
                    printf("\nValor removido com sucesso!");
                    if(PtK == PtLista){
                        PtLista->ant = NULL;
                        PtLista = PtLista->prox;
                        }else{
                            PtK->ant->prox = PtK->prox;
                            if(PtK->prox != NULL)
                                PtK->prox->ant = PtK->ant;
                            free(PtK);
                        }
                }
            }
        }

        if(op == 3){ //Consulta
            printf("\nDigite qual a posi��o que deseja consultar: ");
            scanf("%d", &K);

            if((K < 1) || (PtLista == NULL))
                PtK = NULL;
                else{
                    PtK = PtLista;
                    while((PtK != NULL) && (K > 1)){
                        K--;
                        PtK = PtK->prox;
                    }
                    if(K > 1)
                        PtK = NULL;
                }
                if(PtK == NULL)
                    printf("\nImpossivel consultar a Lista!");
                    else{
                        printf("\nInforma��o da posi��o %d da lista:", K);
                        printf("\nNome: %s", PtK->info.nome);
                        printf("\nC�digo: %d\n", PtK->info.codigo);
                    }

        }

        printf("\nEscolha a op��o desejada: ");
        printf("\n1. Inserir uma informa��o na Lista;");
        printf("\n2. Remover uma informa��o da Lista;");
        printf("\n3. Consultar uma informa��o da Lista;");
        printf("\n4. Sair;");
        printf("\nOp��o: ");
        scanf("%d", &op);
    }

    // Destrui��o da Lista

    while(PtLista != NULL){
        Pt = PtLista;
        PtLista = PtLista->prox;
        free(Pt);
    }
    free(PtLista);

}
