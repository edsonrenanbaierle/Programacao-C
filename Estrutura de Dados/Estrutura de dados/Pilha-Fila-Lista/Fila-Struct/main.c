#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    struct aluno{//criação da struct
        int matr;
        int celular;
        char prim_nome[50];
    };

    setlocale(LC_ALL, "Portuguese");

    struct aluno alunos[5];//criação do vetor
    int IF, FF, LI=0, LS=4, op;//Inicio da fila, Final da Fila, Limite inferior, limite superior;

    IF=FF=LI-1;//criação da fila

    printf("\nDigite 1 para inserir\n2 para remover\n3 consultar\n4 para sair");
    printf("\nDigite sua escolha: ");
    scanf("%d", &op);

    while(op!=4){
    //inserção na fila sequencial
    if(op==1){
        if((FF!=IF-1)&&((IF!=LI)||(FF!=LS))){//verificar se existe espaço na fila
            if (IF==LI-1)//quer dizer que não existe nodo na lista
                IF=FF=LI;//inserção do primeiro nodo
                    else if(FF==LS)
                        FF=LI;//inserção no inicio
                        else
                            FF=FF+1;//inserção no fim
            printf("\nDigite a matricula do aluno: ");//criação para adicionar as informações troca pelo info
            scanf("%d", &alunos[FF].matr);
            printf("\nDigite o número de celular do aluno: ");
            scanf("%d", &alunos[FF].celular);
            printf("\nDigite o primeiro nome do aluno: ");
            scanf("%s", &alunos[FF].prim_nome);
            printf("\nInserção ocorrida com sucesso!");
        }
        else
            printf("\nImpossível a inserção na FILA!\n");
        }

        //REMOÇÃO DA FILA
        if(op==2){
            if(IF!=LI-1){//conferir se tem nodo na lista
                if (IF==FF)//quer dizer que esta na posição 1
                    IF=FF=LI-1;//FILA VAZIA
                    else if(IF==LS)
                        IF=LI;
                    else
                        IF++;
                    printf("\nSUCESSO AO REMOVER");
            }
            else
                printf("\nIMPOSSÍVEL REMOVER!");
        }

        if(op==3){
            //Mostrar o que foi inserido no vetor, mostrar inicio da fila
            printf("\nA matricula do aluno é: %d", alunos[IF].matr);
            printf("\nO número de celualr do aluno é: %d", alunos[IF].celular);
            printf("\nO primeiro nome: %s\n", alunos[IF].prim_nome);
        }
            else
                printf("\nNão existe nodo na lista para informar!");


        printf("\nDigite 1 para inserir\n2 para remover\n3 consultar\n4 para sair");
        printf("\nDigite sua escolha: ");
        scanf("%d", &op);

    }
}
