#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


// Funçao principal
int main(){
setlocale(LC_ALL, "Portuguese");    //Para não ter erros de portugues

    int valorIngresso = 30;     // Valor do ingresso
    int desconto = valorIngresso / 2;       // Desconto de Meia-entrada
    int opcao;      // Variavel para opçoes

    printf("Tem direito a Meia-entrada as seguintes opções:\n");
    // Declarando opçoes
    printf("1-Crianças entre 02 e 12 anos.\n2-Adultos a partir de 60 anos.\n3-Estudantes.\n4-Professores da rede Pública de Ensino.\nCaso não tenha direito a desconto, digite 5.");
    // Inicio do laço de repetiçao "Do / While" para opçoes INVALIDAS
    do{
    printf("\nInforme sua opção: ");
    scanf("%d", &opcao);
    switch(opcao){      // "Switch case" para (opcao) digitada
        case 1:
            printf("Desconto para Crianças entre 02 e 12 anos.");
            printf("\nO valor do seu ingresso é: R$%d,00",desconto);
            break;
        case 2:
            printf("Desconto para Adultos a partir de 60 anos.");
            printf("\nO valor do seu ingresso é: R$%d,00",desconto);
            break;
        case 3:
            printf("Desconto para Estudantes.");
            printf("\nO valor do seu ingresso é: R$%d,00",desconto);
            break;
        case 4:
            printf("Desconto para Professores da rede Publica de Ensino.");
            printf("\nO valor do seu ingresso é: R$%d,00",desconto);
            break;
        case 5:
            printf("Igresso integral.");
            printf("\nO valor do seu ingresso é: R$%d,00",valorIngresso);
            break;
        default:
            printf("Opção Invalida.");      // "Default" finalizando Switch case
        }
    }while(opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4 && opcao != 5);     // "While" indicando quais opções não serão repetidas.(Se opçao invalida repete o laço ate ser digitado uma opção valida)
return 0;
}

