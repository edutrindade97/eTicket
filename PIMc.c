#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


// Fun�ao principal
int main(){
setlocale(LC_ALL, "Portuguese");    //Para n�o ter erros de portugues

    int valorIngresso = 30;     // Valor do ingresso
    int desconto = valorIngresso / 2;       // Desconto de Meia-entrada
    int opcao;      // Variavel para op�oes

    printf("Tem direito a Meia-entrada as seguintes op��es:\n");
    // Declarando op�oes
    printf("1-Crian�as entre 02 e 12 anos.\n2-Adultos a partir de 60 anos.\n3-Estudantes.\n4-Professores da rede P�blica de Ensino.\nCaso n�o tenha direito a desconto, digite 5.");
    // Inicio do la�o de repeti�ao "Do / While" para op�oes INVALIDAS
    do{
    printf("\nInforme sua op��o: ");
    scanf("%d", &opcao);
    switch(opcao){      // "Switch case" para (opcao) digitada
        case 1:
            printf("Desconto para Crian�as entre 02 e 12 anos.");
            printf("\nO valor do seu ingresso �: R$%d,00",desconto);
            break;
        case 2:
            printf("Desconto para Adultos a partir de 60 anos.");
            printf("\nO valor do seu ingresso �: R$%d,00",desconto);
            break;
        case 3:
            printf("Desconto para Estudantes.");
            printf("\nO valor do seu ingresso �: R$%d,00",desconto);
            break;
        case 4:
            printf("Desconto para Professores da rede Publica de Ensino.");
            printf("\nO valor do seu ingresso �: R$%d,00",desconto);
            break;
        case 5:
            printf("Igresso integral.");
            printf("\nO valor do seu ingresso �: R$%d,00",valorIngresso);
            break;
        default:
            printf("Op��o Invalida.");      // "Default" finalizando Switch case
        }
    }while(opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4 && opcao != 5);     // "While" indicando quais op��es n�o ser�o repetidas.(Se op�ao invalida repete o la�o ate ser digitado uma op��o valida)
return 0;
}

