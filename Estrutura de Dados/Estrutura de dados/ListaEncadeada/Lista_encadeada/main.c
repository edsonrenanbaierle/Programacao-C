//Nome: Edson Renan Baierle
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct LISTA
{
    int info;
    struct LISTA *prox; // apontador para o pr�ximo elemento
} LISTA;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    LISTA *PtLista, *PtNovo, *PtAnt, *PtK, *Pt, *PtAux;
    int op, K, dados, cont=0, dado;

    //Inicializador
    PtLista = NULL;

    printf("\nEscolha a opção desejada: ");
    printf("\n1. Inserir o valor na Lista;");
    printf("\n2. Remover um valor na Lista;");
    printf("\n3. Consultar a Lista;");
    printf("\n4. Comprimento da Lista Linear;");
    printf("\n5. Valor do ultimo nodo;");
    printf("\n6. Sair");
    printf("\n Opção: ");
    scanf("%d", &op);

    while(op != 6)
    {
        if(op == 1)
        {
            //Entrada de dados
            printf("\nDigite o valor que deseja inserir: ");
            scanf("%d", &dados);
            printf("\nDigite em qual posi��o deseja inserir: ");
            scanf("%d", &K);

            //Inser��o
            PtNovo = (LISTA*)malloc(sizeof(LISTA));
            if(PtNovo == NULL)
            {
                printf("\nN�o foi poss�vel alocar mem�ria!");
                exit(1);
            }
            else if(((PtLista == NULL) && (K != 1)) || (K < 1))
            {
                free(PtNovo);
                printf("\nN�o � poss�vel inserir!");
            }
            else if(K == 1)
            {
                PtNovo->info = dados;
                PtNovo->prox = PtLista;
                PtLista = PtNovo;
                printf("\nValor inserido com sucesso!");
            }
            else
            {
                PtAnt = PtLista;
                while((PtAnt->prox != NULL) && (K > 2))
                {
                    PtAnt = PtAnt->prox;
                    K--;
                }
                if(K > 2)
                {
                    free(PtNovo);
                    printf("\nN�o � poss�vel inserir!");
                }
                else
                {
                    PtNovo->info =dados;
                    PtNovo->prox = PtAnt->prox;
                    PtAnt->prox = PtNovo;
                    printf("\nValor inserido com sucesso!");
                }
            }
        }

        if(op == 2)  // Remo��o
        {
            printf("\nDigite qual a posi��o que deseja remover da Lista: ");
            scanf("%d", &K);

            if(K < 1)
            {
                printf("\nImposs�vel remover valor da Lista!");
            }
            else
            {
                PtK = PtLista;
                PtAnt = NULL;
                while((PtK != NULL) && (K > 1))
                {
                    K--;
                    PtAnt = PtK;
                    PtK = PtK->prox;
                }
                if(PtK == NULL)
                {
                    printf("\nImposs�vel remover valor da Lista!");
                }
                else
                {
                    if(PtK == PtLista)
                        PtLista = PtLista->prox;
                    else
                        PtAnt->prox = PtK->prox;
                    free(PtK);
                    printf("\nValor removido com sucesso!");
                }
            }
        }

        if(op == 3)  //Consulta
        {
            printf("\nDigite qual a posi��o que deseja consultar: ");
            scanf("%d", &K);

            if((K < 1) || (PtLista == NULL))
                PtK = NULL;
            else
            {
                PtK = PtLista;
                while((PtK != NULL) && (K > 1))
                {
                    K--;
                    PtK = PtK->prox;
                }
                if(K > 1)
                    PtK = NULL;
            }
            if(PtK == NULL)
                printf("\nImpossivel consultar a Lista!");
            else
                printf("\nValor da posi��o indicada: %d", PtK->info);
        }

        if(op==4)
        {
           PtAux=PtLista;
           while(PtAux!=NULL){
                cont++;
                PtAux=PtAux->prox;
           }
           printf("\nO número no final é: %d", cont);
           cont=0;
        }

        if(op==5){
           PtAux=PtLista;
           while(PtAux->prox!=NULL){
                PtAux=PtAux->prox;
           }
           printf("\nO último nodo da Lista é - %d", PtAux->info);
        }

        printf("\nEscolha a opção desejada: ");
        printf("\n1. Inserir o valor na Lista;");
        printf("\n2. Remover um valor na Lista;");
        printf("\n3. Consultar a Lista;");
        printf("\n4. Comprimento da Lista Linear;");
        printf("\n5. Valor do ultimo nodo;");
        printf("\n6. Sair");
        printf("\n Opção: ");
        scanf("%d", &op);
    }

    // Destrui��o da Lista

    while(PtLista != NULL)
    {
        Pt = PtLista;
        PtLista = PtLista->prox;
        free(Pt);
    }
    free(PtLista);

}
