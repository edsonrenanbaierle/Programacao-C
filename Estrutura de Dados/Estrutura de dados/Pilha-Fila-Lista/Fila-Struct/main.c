#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    struct aluno{//cria��o da struct
        int matr;
        int celular;
        char prim_nome[50];
    };

    setlocale(LC_ALL, "Portuguese");

    struct aluno alunos[5];//cria��o do vetor
    int IF, FF, LI=0, LS=4, op;//Inicio da fila, Final da Fila, Limite inferior, limite superior;

    IF=FF=LI-1;//cria��o da fila

    printf("\nDigite 1 para inserir\n2 para remover\n3 consultar\n4 para sair");
    printf("\nDigite sua escolha: ");
    scanf("%d", &op);

    while(op!=4){
    //inser��o na fila sequencial
    if(op==1){
        if((FF!=IF-1)&&((IF!=LI)||(FF!=LS))){//verificar se existe espa�o na fila
            if (IF==LI-1)//quer dizer que n�o existe nodo na lista
                IF=FF=LI;//inser��o do primeiro nodo
                    else if(FF==LS)
                        FF=LI;//inser��o no inicio
                        else
                            FF=FF+1;//inser��o no fim
            printf("\nDigite a matricula do aluno: ");//cria��o para adicionar as informa��es troca pelo info
            scanf("%d", &alunos[FF].matr);
            printf("\nDigite o n�mero de celular do aluno: ");
            scanf("%d", &alunos[FF].celular);
            printf("\nDigite o primeiro nome do aluno: ");
            scanf("%s", &alunos[FF].prim_nome);
            printf("\nInser��o ocorrida com sucesso!");
        }
        else
            printf("\nImposs�vel a inser��o na FILA!\n");
        }

        //REMO��O DA FILA
        if(op==2){
            if(IF!=LI-1){//conferir se tem nodo na lista
                if (IF==FF)//quer dizer que esta na posi��o 1
                    IF=FF=LI-1;//FILA VAZIA
                    else if(IF==LS)
                        IF=LI;
                    else
                        IF++;
                    printf("\nSUCESSO AO REMOVER");
            }
            else
                printf("\nIMPOSS�VEL REMOVER!");
        }

        if(op==3){
            //Mostrar o que foi inserido no vetor, mostrar inicio da fila
            printf("\nA matricula do aluno �: %d", alunos[IF].matr);
            printf("\nO n�mero de celualr do aluno �: %d", alunos[IF].celular);
            printf("\nO primeiro nome: %s\n", alunos[IF].prim_nome);
        }
            else
                printf("\nN�o existe nodo na lista para informar!");


        printf("\nDigite 1 para inserir\n2 para remover\n3 consultar\n4 para sair");
        printf("\nDigite sua escolha: ");
        scanf("%d", &op);

    }
}
