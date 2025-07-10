#include <stdio.h>
#include <stdlib.h>

int main() {
    int fila[5];
    int frente = 0;
    int tras = 0;
    int opcao, valor;
    system("cls");
    do{

        printf("1 - Inserir\n");
        printf("2 - Remover\n");
        printf("3 - Mostrar\n");
        printf("4 - Reiniciar\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%i", &opcao);

        switch(opcao){
            case 1:
            system("cls");
                 if (tras == 5) {
                printf("Fila cheia!\n");
            } else {
                printf("Valor: ");
                scanf("%i", &valor);
                fila[tras] = valor;
                tras++;
                
            }
            break;
            case 2:
            system("cls");
                if (frente == tras) {
                printf("Fila vazia!\n");
            } else {
                printf("Removido: %i\n", fila[frente]);
                frente++;
            }
            break;
            case 3:
            system("cls");
                if (frente == tras) {
                    printf("Fila vazia!\n");
                } else {
                    printf("Fila: \n");
                    for (int i = frente; i < tras; i++) {
                        printf("%i ", fila[i]);
                    }
                }
                break;
            case 4:
                system("cls");
                frente = 0;
                tras = 0;
                valor = 0;
                printf("Reiniciando vetor!\n");
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao Invalida");
        }
    }while(opcao != 0);

        return 0;

}