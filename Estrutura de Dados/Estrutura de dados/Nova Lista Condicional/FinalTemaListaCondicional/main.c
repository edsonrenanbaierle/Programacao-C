/* Nome: Edson Renan Baierle
Crie um programa uma lista linear que permita a inserção e remoção de informação sobre até 10 livros
adquiridos de uma biblioteca. Armazenar as seguintes informações ISBN(int), nome(char[50] e ano int*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    struct livro {
    int isbn;
    char nome[50];
    int ano;
};
    struct livro livros[10];
    int x, IA=0, FA=9, IL, FL, k, opt = 0, Ind;


    IL=FL=IA-1;
    while(opt!=3){
        printf("Digite 1 para inserção!\n2 para remoção!\n3 para sair!\n");
        scanf("%d", &opt);
        if(opt==1){
        printf("Digite qual a posição que deseja inserir:");
        scanf("%d", &k);
        if((IA==IL&&FA==FL)||(k>FL-IL+2)||(k<=0)||(IL==-1&&k!=1))
            printf("\nImpossivel adicionar nesta posição\n");
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
    printf("\nDigite o nome do livro: ");
    scanf("%s",&livros[IL + k-1].nome);
    printf("\nDigite o isbn do livro: ");
    scanf("%d",&livros[IL + k-1].isbn);
    printf("\nDigite o ano do livro: ");
    scanf("%d",&livros[IL + k-1].ano);
    fflush(stdin);

    for (x = IL; x <= FL; x++){
        printf("\nNome do livro %d: %s \t", x+1, livros[x].nome);
        printf("\nIsbn do livro %d: %d \t", x+1, livros[x].isbn);
        printf("\nAno do livro %d: %d \n\n", x+1, livros[x].ano);
    }
}
    else if(opt==2){
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
            printf("\nIsbn do livro %d: %d \t", x+1, livros[x].isbn);
            printf("\nAno do livro %d: %d \n\n", x+1, livros[x].ano);
            }
       }
    else if(opt=3)
        printf("Fim da execução!!");
    }

}
