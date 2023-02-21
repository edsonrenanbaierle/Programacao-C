/* Nome: Edson Renan Baierle
Crie um programa uma lista linear que permita a inserção e remoção de informação sobre até 10 livros
adquiridos de uma biblioteca. Armazenar as seguintes informações ISBN(int), nome(char[50] e ano int*/
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    struct livro{
        int ISBN, ano;
        char nome[50];
    };

    struct livro livros[10];
    int x, IL, FL, IA=0, FA=9, opt,k, Ind;

    IL=FL=IA-1;

    while(opt!=3){
          printf("Digite 1 para INSERIR\nDigite 2 para REMOVER\nDigite 3 para SAIR\n");
          scanf("%d", &opt);
          if(opt==1)
            printf("Em qual posição deseja inserir a informação, caso seja  primeira informação digite 1: ");
            scanf("%d", &k);
            if(((IA==IL)&&(FA==FL))||((k!=1)&&(IL==-1)||(k<=0))||(k>FL-IL+2))
                printf("Impossível a realização da inserção");
                else if(IL==-1)
                    IL=FL=IA;
                else if (IL==-1)
                IL=FL=IA;
                 else if (FL!=FA) {
                for (Ind=FL;Ind>=IL+k-1;Ind--)
                    livros[Ind+1]=livros[Ind];
                FL++;
            }
                else {
                    for (Ind=IL;Ind<=IL+k-2;Ind++)
                        livros[Ind-1]=livros[Ind];
                    IL--;
                }
                printf("Digite o nome do livro: ");
                scanf("%s",&livros[IL + k-1].nome);
                printf("Digite a ISBN do livro: ");
                scanf("%d",&livros[IL + k-1].ISBN);
                printf("Digite o ano do livro: ");
                scanf("%d",&livros[IL + k-1].ano);

                for (x = IL; x <= FL; x++){
                    printf("\nNome do livro %d: %s \t", x+1, livros[x].nome);
                    printf("\nIsbn do livro %d: %d \t", x+1, livros[x].ISBN);
                    printf("\nAno do livro %d: %d \n\n", x+1, livros[x].ano);
            }
         if(opt==2){
            printf("Digite qual a posição que deseja remover: ");
            scanf("%d", &k);
            if((k<=0) || (k>FL-IL+1))
                printf("Impossivel realizar inserção");
            else {
            for(Ind=IL+k-1; Ind<=FL-1; Ind++)
                livros[Ind] = livros[Ind+1];
            FL--;
            if(FL==IL-1)
                IL = FL = -1;
        }
        for (x = IL; x <= FL; x++){
            printf("\nNome do livro %d: %s \t", x+1, livros[x].nome);
            printf("\nIsbn do livro %d: %d \t", x+1, livros[x].ISBN);
            printf("\nAno do livro %d: %d \n\n", x+1, livros[x].ano);
            }
       }
        else if(opt=3)
            printf("Fim da execução!!");
    }
}

