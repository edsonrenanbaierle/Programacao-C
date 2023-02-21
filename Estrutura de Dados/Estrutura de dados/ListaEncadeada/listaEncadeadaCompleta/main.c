//Nome: Edson Renan Baierle
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct LISTA{
    int info;
    struct LISTA *prox;
}LISTA;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    LISTA *PtLista, *PtAnt, *PtNovo, *PtK, *PtAux;
    int K, dados, op, cont=0, conttroca=0, dados1, dados2;//cont conta o tamanho da lista, conttroca vai contar qnts troca ocorreu
    int Knodo=0, igualnodo=0;//Knodo ira dizer em qual posição esta o nodo na OP 7 e igual nodo ira mostrar quantos nodos tem igual
    int soma=0; //soma ira receber quantos nodos são maiores que o número digitado na op 8

    //INICIALIZADOR
    PtLista=NULL;

    printf("\n---LISTA ENCADEADA---");
    printf("\nEscolha a opção: ");
    printf("\n1. ADICIONAR;");
    printf("\n2. REMOVER;");
    printf("\n3.CONSULTAR UMA INFORMAÇÃO NA LISTA;");
    printf("\n4. COMPRIMENTO DA LISTA ;");
    printf("\n5. VALOR DO ULTIMO NODO;");
    printf("\n6.TROQUE UM VALOR POR OUTRO;");
    printf("\n7.DIGITE UM NÚMERO E VEJA A QUANTIDADE DELE NA LISTA");
    printf("\n8.DIGITE UM NÚMERO E VEJA QUANTOS SÃO MAIORES NA LISTA");
    printf("\n9. SAIR");
    printf("\nDIGITE A OPÇÃO: ");
    scanf("%d", &op);

    while(op!=9){
        if(op==1){
            printf("\nDigite o número inteiro que deseja armazenar na lista: ");
            scanf("%d", &dados);
            printf("Digite a posição que deseja inserir na Lista: ");
            scanf("%d", &K);

            PtNovo=(LISTA*)malloc(sizeof(LISTA));
            if(PtNovo==NULL){
                printf("\nImpossível a inserção na Lista!");
            }
                else if((PtLista==NULL)&&(K!=1)||(K<1)){
                    free(PtNovo);
                    printf("\nImpossível adicionar a informação!!");
                }
                    else if(K==1){
                        PtNovo->info=dados;
                        PtNovo->prox=PtLista;
                        PtLista=PtNovo;
                        printf("\nSucesso ao adicionar a informação!\n");
                    }
             else{
                PtAnt=PtLista;
                while((PtAnt->prox!=NULL)&&(K>2)){
                    PtAnt=PtAnt->prox;
                    K--;
                }
                if(K>2){
                    free(PtNovo);
                    printf("\nImpossível incerir, pois digitou uma posição invalida!\n");
                }
                    else{
                        PtNovo->info=dados;
                        PtNovo->prox=PtAnt->prox;
                        PtAnt->prox=PtNovo;
                        printf("\nSucesso ao incerrir na posição!\n");
                    }
             }

        }

        if(op==2){
            printf("\nDigite a posição que deseja remover: ");
            scanf("%d", &K);

            if(K<1){
                printf("\nA posição digitada para remover está fora dos parametros");
            }
            else{
                PtK=PtLista;
                PtAnt=NULL;
                while((PtK!=NULL)&&(K>1)){
                    K--;
                    PtAnt=PtK;
                    PtK=PtK->prox;
                }
                if(PtK==NULL)
                    printf("\nNão existe informação para ser removida\n");
                    else{
                        if(PtK==PtLista)
                            PtLista=PtLista->prox;
                            else
                                PtAnt->prox=PtK->prox;

                    free(PtK);
                    printf("\nSucesso ao Remover\n");
                    }
            }
        }

        if(op==3){
            printf("\nDigite a posição que deseja consultar: ");
            scanf("%d", &K);

            if((K<1)||(PtLista==NULL))
                printf("\nNão existe informações na Lista\n");

            else{
                PtK=PtLista;
                while((PtK!=NULL)&&(K>1)){
                    K--;
                    PtK=PtK->prox;
                }
                if(K>1)
                    PtK=NULL;
                else
                    printf("\nNúmero: %d", PtK->info);

            }
        }

        if(op==4){
            PtAux=PtLista;
            while(PtAux!=NULL){
               PtAux=PtAux->prox;
               cont++;
            }
            printf("\nO tamanho da lista é: %d", cont);
            cont=0;
        }

        if(op==5){
            PtAux=PtLista;
            while(PtAux->prox!=NULL){
                PtAux=PtAux->prox;
            }
            printf("\nA última informação na Lista é: %d", PtAux->info);
        }

        if(op==6){
            if(PtLista==NULL)
                printf("\nNão existe informações para ocorrer a troca!!\n");
            else{
                printf("\nDigite o número que deseja que seja inserido na troca: ");
                scanf("%d", &dados2);
                printf("\nDigite o número que deseja que saia da lista para entrada do novo: ");
                scanf("%d", &dados1);
                PtAux=PtLista;
                while(PtAux!=NULL){
                   if(PtAux->info==dados1){
                       PtAux->info=dados2;
                       conttroca++;
                   }
                   PtAux=PtAux->prox;
                }
                printf("\nForam Efetuadas: %d", conttroca);
                cont=0;
            }

        }

        if(op==7){
            if(PtLista==NULL)
                printf("\nNão existe informações na Lista!!\n");
            else{
                printf("\nDigite o número que deseja saber quantas vezes está presente na Lista e sua posição: ");
                scanf("%d", &dados1);
                PtAux=PtLista;
                while(PtAux!=NULL){
                    Knodo++;
                   if(PtAux->info==dados1){
                       igualnodo++;
                       printf("\nO número %d está na %d posição", dados1, Knodo);
                   }
                   PtAux=PtAux->prox;
                }
                if(igualnodo==1)
                    printf("\nDando ao total %d número igual", igualnodo);
                else
                    printf("\nDando ao total %d números iguais\n", igualnodo);
                Knodo=0;
                igualnodo=0;
            }
        }

        if(op==8){
            if(PtLista==NULL)
                printf("\nNão existe informações na Lista!!\n");
            else{
                printf("\nDigite um número e veja quantos nodos são maiore que ele na Lista: ");
                scanf("%d", &dados1);
                PtAux=PtLista;
                while(PtAux!=NULL){
                   if(PtAux->info>dados1){
                       soma++;
                   }
                   PtAux=PtAux->prox;
            }
                printf("\nA quantidade de números maiores que %d é: %d\n", dados1, soma);
                soma=0;
            }
        }

        printf("\n---LISTA ENCADEADA---");
        printf("\nEscolha a opção: ");
        printf("\n1. ADICIONAR;");
        printf("\n2. REMOVER;");
        printf("\n3.CONSULTAR UMA INFORMAÇÃO NA LISTA;");
        printf("\n4. COMPRIMENTO DA LISTA ;");
        printf("\n5. VALOR DO ULTIMO NODO;");
        printf("\n6.TROQUE UM VALOR POR OUTRO;");
        printf("\n7.DIGITE UM NÚMERO E VEJA A QUANTIDADE DELE NA LISTA");
        printf("\n8.DIGITE UM NÚMERO E VEJA QUANTOS SÃO MAIORES NA LISTA");
        printf("\n9. SAIR");
        printf("\nDIGITE A OPÇÃO: ");
        scanf("%d", &op);
    }
}
