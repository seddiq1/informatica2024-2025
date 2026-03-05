/*Scrivere un programma in C che gestisca un insieme di numeri interi usando un array dinamico.
Il programma deve permettere, tramite menù:
    1. Aggiungere un numero (espandendo l’array con realloc)
    2. Visualizzare tutti i numeri
    3. Cercare un numero specifico
    4. Ordinare i numeri in ordine crescente
    5. Eliminare un numero scelto
    6. Uscire */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array = NULL;
    int size = 0;
    int choice, num, i, found, pos, temp;

    do {
        printf("\nMenu:\n");
        printf("1. Aggiungere un numero\n");
        printf("2. Visualizzare tutti i numeri\n");
        printf("3. Cercare un numero specifico\n");
        printf("4. Ordinare i numeri in ordine crescente\n");
        printf("5. Eliminare un numero scelto\n");
        printf("6. Uscire\n");
        printf("Scelta: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Inserisci il numero da aggiungere: ");
                scanf("%d", &num);
                array = realloc(array, (size + 1) * sizeof(int));
                if (array == NULL) {
                    printf("Errore di allocazione memoria\n");
                    return 1;
                }
                array[size] = num;
                size++;
                break;

            case 2:
                if (size == 0) {
                    printf("L'array è vuoto.\n");
                } else {
                    printf("Numeri nell'array: ");
                    for (i = 0; i < size; i++) {
                        printf("arr[%d]=%d ", i , array[i]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                if (size == 0) {
                    printf("L'array è vuoto.\n");
                } else {
                    printf("Inserisci il numero da cercare: ");
                    scanf("%d", &num);
                    found = 0;
                    for (i = 0; i < size; i++) {
                        if (array[i] == num) {
                            found = 1;
                            break;
                        }
                    }
                    if (found == 1) {
                        printf("Numero %d trovato nell'array.\n", num);
                    } else {
                        printf("Numero %d non trovato nell'array.\n", num);
                    }
                }
                break;

            case 4:
                if (size < 2) {
                    printf("Non ci sono abbastanza numeri per ordinare.\n");
                } else {
                    for (i = 0; i < size - 1; i++) {
                        for (int j = i + 1 ; j < size; j++) {
                            if (array[i] > array[j]) {
                                temp = array[i];
                                array[i] = array[j];
                                array[j] = temp;
                            }
                        }
                    }
                    printf("Array ordinato in ordine crescente.\n");
                }
                break; 
            case 5:
                if (size == 0) {
                    printf("L'array è vuoto.\n");
                } else {
                    printf("Inserisci il numero da eliminare: ");
                    scanf("%d", &num);
                    found = 0;
                    for (i = 0; i < size; i++) {
                        if (array[i] == num) {
                            found = 1;
                            pos = i;
                            break;
                        }
                    }
                    if (found == 1) {
                        for (i = pos; i < size - 1; i++) {
                            array[i] = array[i + 1];
                        }
                        size--;
                        array = realloc(array, size * sizeof(int));
                        printf("Numero %d eliminato dall'array.\n", num);
                    } else {    
                        printf("Numero %d non trovato nell'array.\n", num);
                    }
                }
                break;
            case 6:
                printf("Uscita dal programma.\n");
                break;
            default:
                printf("Scelta non valida. Riprova.\n");
        }
    } while (choice != 6);
      
  
    free(array);
    return 0;
}