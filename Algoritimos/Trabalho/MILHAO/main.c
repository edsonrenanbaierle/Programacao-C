//Nome:Iury da Silva e Edson Renan Baierle.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//FUNCTIONS
float q1(char optc1);
float q2(char optc2);
float q3(char optc3);
float q4(char optc4);
float q5(char optc5);
float q6(char optc6);
float q7(char optc7);
float q8(char optc8);
float q9(char optc9);
float q10(char optc10);
float pontos (float results);
void notas (float resultado);


 float certas = 0;


//PRINCIPAL
int main()
{

    setlocale(LC_ALL,"Portuguese");

 //VARIAVEIS
   char optc1;
   char optc2;
   char optc3;
   char optc4;
   char optc5;
   char optc6;

   char optc7;
   char optc8;
   char optc9;
   char optc10;

   float resultado;
   float points;


   char player[25];

printf("*==================================*\n");
printf("|     ____  __ __  ____    __ __   |\n");
printf("|    |    ||  |  ||    \  |  |  |   |\n");
printf("|     |  | |  |  ||  D  )|  |  |   |\n");
printf("|     |  | |  |  ||    / |  ~  |   |\n");
printf("|     |  | |  :  ||    \  |___, |   |\n");
printf("|     |  | |     ||  .  \ |     |   |\n");
printf("|    |____|  \__,_||__|\_| |____/    |\n");


printf("|  ___   ___   _____  ___  ____    |\n");
printf("| /  _] |    \ / ___//   \ |    \     |\n");
printf("|/  [_  |    (   \_ |     ||  _  |  |\n");
printf("|    _]|  D   \__  ||  O  ||  |  |  |\n");
printf("|   [_ |      /  \ ||     ||  |  |  |\n");
printf("|     ||      \    ||     ||  |  |  |\n");
printf("|_____||_____| \___| \___/  |__|__|  |\n\n");
printf("*==================================*\n");





        //---------------

        printf("\n\nInsira seu nome jogador(a): \n>");
        scanf("%s", &player);
        printf("\nA cada acerto voc� recebera 2 pontos\n");
        printf("Let's go!!");
        sleep(2);
        system("cls");


        //PERGUNTA 1 !!
        //------------------------------------------------------------------------------------
        printf ("*--------------------------------*\n");
        printf ("|         Pergunta n - 1         |\n");
        printf ("*--------------------------------*\n\n");
        printf("1. Normalmente, quantos litros de sangue uma pessoa tem?\n\n");
        printf("A - Tem entre 2 a 4 litros.\n");
        printf("B - Tem entre 4 a 6 litros.\n");
        printf("C - Tem 10 litros.\n");
        printf("D - Tem 7 litros.\n");
        printf("E - Tem 0,5 litros.");
        printf("\n\n------------------>%s<----------------------\n\n", player);
        printf("Escolha => ");
        scanf("%s", &optc1);

        resultado = q1(optc1);
        sleep(2);
        system("cls");



        //PERGUNTA 2 !!
        //------------------------------------------------------------------------------------
        printf ("*--------------------------------*\n");
        printf ("|         Pergunta n - 2         |\n");
        printf ("*--------------------------------*\n\n");
        printf("2. De onde � a inven��o do chuveiro el�trico?\n\n");
        printf("A - Fran�a.\n");
        printf("B - Inglaterra.\n");
        printf("C - Brasil.\n");
        printf("D - Austr�lia.\n");
        printf("E - It�lia.");
        printf("\n\n------------------>%s<----------------------\n\n", player);
        printf("Escolha => ");
        scanf("%s", &optc2);

        resultado = q2(optc2);
        sleep(2);
        system("cls");




         //PERGUNTA 3 !!
        //------------------------------------------------------------------------------------
        printf ("*--------------------------------*\n");
        printf ("|         Pergunta n - 3         |\n");
        printf ("*--------------------------------*\n\n");
        printf("3. Quais o menor e o maior pa�s do mundo?\n\n");
        printf("A - Vaticano e R�ssia.\n");
        printf("B - Nauru e China.\n");
        printf("C - M�naco e Canad�.\n");
        printf("D - Malta e Estados Unidos.\n");
        printf("E - S�o Marino e �ndia.");
        printf("\n\n------------------>%s<----------------------\n\n", player);
        printf("Escolha => ");
        scanf("%s", &optc3);

        resultado = q3(optc3);
        sleep(2);
        system("cls");



         //PERGUNTA 4 !!
        //------------------------------------------------------------------------------------
        printf ("*--------------------------------*\n");
        printf ("|         Pergunta n - 4         |\n");
        printf ("*--------------------------------*\n\n");
        printf("4. Quantas casas decimais tem o n�mero pi?\n\n");
        printf("A - Duas.\n");
        printf("B - Centenas.\n");
        printf("C - Infinitas.\n");
        printf("D - Vinte.\n");
        printf("E - Milhares.");
        printf("\n\n------------------>%s<----------------------\n\n", player);
        printf("Escolha => ");
        scanf("%s", &optc4);

        resultado = q4(optc4);
        sleep(2);
        system("cls");


         //PERGUNTA 5 !!
        //------------------------------------------------------------------------------------
        printf ("*--------------------------------*\n");
        printf ("|         Pergunta n - 5         |\n");
        printf ("*--------------------------------*\n\n");
        printf("5. Quais as duas datas que s�o comemoradas em novembro?\n\n");
        printf("A - Independ�ncia do Brasil e Dia da Bandeira.\n");
        printf("B - Proclama��o da Rep�blica e Dia Nacional da Consci�ncia Negra.\n");
        printf("C - Dia do M�dico e Dia de S�o Lucas.\n");
        printf("D - Dia de Finados e Dia Nacional do Livro.\n");
        printf("E - Black Friday e Dia da �rvore.");
        printf("\n\n------------------>%s<----------------------\n\n", player);
        printf("Escolha => ");
        scanf("%s", &optc5);

        resultado = q5(optc5);
        sleep(2);
        system("cls");


          //PERGUNTA 6 !!
        //------------------------------------------------------------------------------------
        printf ("*--------------------------------*\n");
        printf ("|         Pergunta n - 6         |\n");
        printf ("*--------------------------------*\n\n");
        printf("6. Quais os planetas do sistema solar?\n\n");
        printf("A - Terra, V�nus, Saturno, Urano, J�piter, Marte, Netuno, Merc�rio.\n");
        printf("B - J�piter, Marte, Merc�rio, Netuno, Plut�o, Saturno, Terra, Urano, V�nus.\n");
        printf("C - V�nus, Saturno, Urano, J�piter, Marte, Netuno, Merc�rio.\n");
        printf("D - J�piter, Marte, Merc�rio, Netuno, Plut�o, Saturno, Sol, Terra, Urano, V�nus.\n");
        printf("E - Terra, V�nus, Saturno, J�piter, Marte, Netuno, Merc�rio.");
        printf("\n\n------------------>%s<----------------------\n\n", player);
        printf("Escolha => ");
        scanf("%s", &optc6);

        resultado = q6(optc6);
        sleep(2);
        system("cls");


          //PERGUNTA 7 !!
        //------------------------------------------------------------------------------------
        printf ("*--------------------------------*\n");
        printf ("|         Pergunta n - 7         |\n");
        printf ("*--------------------------------*\n\n");
        printf("7. Qual o maior animal terrestre?\n\n");
        printf("A - Baleia Azul.\n");
        printf("B - Dinossauro.\n");
        printf("C - Elefante africano.\n");
        printf("D - Tubar�o Branco.\n");
        printf("E - Girafa .");
        printf("\n\n------------------>%s<----------------------\n\n", player);
        printf("Escolha => ");
        scanf("%s", &optc7);

        resultado = q7(optc7);
        sleep(2);
        system("cls");


           //PERGUNTA 8 !!
        //------------------------------------------------------------------------------------
        printf ("*--------------------------------*\n");
        printf ("|         Pergunta n - 8         |\n");
        printf ("*--------------------------------*\n\n");
        printf("8. Qual a religi�o monote�sta que conta com o maior n�mero de adeptos no mundo?\n\n");
        printf("A - Juda�smo.\n");
        printf("B - Zoroastrismo.\n");
        printf("C - Islamismo.\n");
        printf("D - Cristianismo.\n");
        printf("E - Hindu�smo .");
        printf("\n\n------------------>%s<----------------------\n\n", player);
        printf("Escolha => ");
        scanf("%s", &optc8);

        resultado = q8(optc8);
        sleep(2);
        system("cls");



           //PERGUNTA 9 !!
        //------------------------------------------------------------------------------------
        printf ("*--------------------------------*\n");
        printf ("|         Pergunta n - 9         |\n");
        printf ("*--------------------------------*\n\n");
        printf("9. As pessoas de qual tipo sangu�neo s�o consideradas doadores universais?\n\n");
        printf("A - Tipo A.\n");
        printf("B - Tipo B.\n");
        printf("C - Tipo O.\n");
        printf("D - Tipo AB.\n");
        printf("E - Tipo ABO .");
        printf("\n\n------------------>%s<----------------------\n\n", player);
        printf("Escolha => ");
        scanf("%s", &optc9);

        resultado = q9(optc9);
        sleep(2);
        system("cls");

           //PERGUNTA 10 !!
        //------------------------------------------------------------------------------------
        printf ("*--------------------------------*\n");
        printf ("|         Pergunta n - 10        |\n");
        printf ("*--------------------------------*\n\n");
        printf("10. Qual o metal cujo s�mbolo qu�mico � o Au?\n\n");
        printf("A - Cobre.\n");
        printf("B - Prata.\n");
        printf("C - Merc�rio.\n");
        printf("D - Ouro.\n");
        printf("E - Mangan�s.");
        printf("\n\n------------------>%s<----------------------\n\n", player);
        printf("Escolha => ");
        scanf("%s", &optc10);

        resultado = q10(optc10);
        sleep(2);
        system("cls");

        points = pontos(resultado);

        if(points>=10){
            printf("*=================================================================*\n");
            printf("|                      ACERTOS %.lf/10                               |\n", resultado);
            printf("|                      PONTOS  %.lf                                 |\n", points);
            notas(resultado);
            printf("*=================================================================*");
        }else{
            printf("*=================================================================*\n");
            printf("|                      ACERTOS %.lf/10                               |\n", resultado);
            printf("|                      PONTOS  %.lf                                  |\n", points);
            notas(resultado);
            printf("*=================================================================*");
        }

}

float q1(char optc1){


    if(optc1=='B'||optc1=='b'){

        printf("\nResposta correta!!\n\n");
        certas++;
    }else{
        printf("\nResposta errada\n\n");
        printf("Resposta correta letra > B <");
    }
    return certas;

}

float q2(char optc2){

    //static float certas =0;

    if(optc2=='C'||optc2=='c'){

        printf("\nResposta correta!!\n\n");
        certas++;
    }else{
        printf("\nResposta errada\n\n");
        printf("Resposta correta letra > C <");
    }
    return certas;

}

float q3(char optc3){

    //static float certas =0;

    if(optc3=='A'||optc3=='a'){

        printf("\nResposta correta!!\n\n");
        certas++;
    }else{
        printf("\nResposta errada\n\n");
        printf("Resposta correta letra > A <");
    }
    return certas;

}

float q4(char optc4){

    //static float certas =0;

    if(optc4=='C'||optc4=='c'){

        printf("\nResposta correta!!\n\n");
        certas++;
    }else{
        printf("\nResposta errada\n\n");
        printf("Resposta correta letra > C <");
    }
    return certas;

}

float q5(char optc5){

   // static float certas =0;

    if(optc5=='B'||optc5=='b'){

        printf("\nResposta correta!!\n\n");
        certas++;
    }else{
        printf("\nResposta errada\n\n");
        printf("Resposta correta letra > B <");
    }
    return certas;

}
float q6(char optc6){

  //  static float certas =0;

    if(optc6=='A'||optc6=='a'){

        printf("\nResposta correta!!\n\n");
        certas++;
    }else{
        printf("\nResposta errada\n\n");
        printf("Resposta correta letra > A <");
    }
    return certas;

}

float q7(char optc7){

   // static float certas =0;

    if(optc7=='C'||optc7=='c'){

        printf("\nResposta correta!!\n\n");
        certas++;
    }else{
        printf("\nResposta errada\n\n");
        printf("Resposta correta letra > C <");
    }
    return certas;

}

float q8(char optc8){

   // static float certas =0;

    if(optc8=='D'||optc8=='d'){

        printf("\nResposta correta!!\n\n");
        certas++;
    }else{
        printf("\nResposta errada\n\n");
        printf("Resposta correta letra > D <");
    }
    return certas;

}

float q9(char optc9){

   // static float certas =0;

    if(optc9=='C'||optc9=='c'){

        printf("\nResposta correta!!\n\n");
        certas++;
    }else{
        printf("\nResposta errada\n\n");
        printf("Resposta correta letra > C <");
    }
    return certas;

}

float q10(char optc10){

   // static float certas =0;

    if(optc10=='D'||optc10=='d'){

        printf("\nResposta correta!!\n\n");
        certas++;
    }else{
        printf("\nResposta errada\n\n");
        printf("Resposta correta letra > D <");
    }
    return certas;

}

float pontos (float results){

     float points;

    if(results>=1){

        points = results*2;
    }

    return points;
}

void notas (float resultado){

    if(resultado>=0 && resultado<=5){

        printf("|                      Nota => RUIM!!                             |\n");
        printf("|                      Voc� precisa estudar mais!                 |\n");
    }else if(resultado==6){

        printf("|                      Nota => MEDIA!!                            |\n");
        printf("|                      �...Ta bom!                                |\n");
    }else if(resultado>6 && resultado<=8){

        printf("|                      Nota => BOM!!                              |\n");
    }else
        printf("|                      Nota => EXCELENTE                          |\n");




}
