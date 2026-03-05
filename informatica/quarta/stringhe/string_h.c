/*provare la libreria string.h
per le seguete operazioni
1. calcola lunghezza stringa
2. contollo stringa uguali 
3.copiare una stringa
4. cercare un carattere e comunicare la frequenza
5.concatenare due stringhe
6,ricarica di una stringa in altra*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef char* string;

int main(){
    int len=0 , scelta=0;
    string frase=malloc(100);
    string str=malloc(100);
    string s=malloc(100);
    if (frase == NULL || str == NULL)
    {
        printf("non c'è spazio nella memoria\n");
        exit(1);
    }
    
    printf("inserisci la stringa1:\n");
    fgets(frase, len+1, stdin);
    printf("inserisci la stringa2:\n");
    fgets(str, len+1, stdin);
    switch (scelta)
    {
    case 1:
        printf("la dimensione della stringa 1 è: %d\n", strlen(frase));
        printf("la dimensione della stringa 1 è: %d\n", strlen(str));
        break;
    case 2:
        if (strcmp(frase , str) == 0)
            printf("le stringHE sono uguale\n");
        else
            printf("le stringhe non sono uguale\n");
        break;
    case 3:
        printf("se vuoi coppiare la stringa 1 in 2 primi 1 senno un'altro numero\n");
        scanf("%d", len);
        if (len == 1)
        {
            strcpy(str , frase);
            printf("la stringha1 = %s la stringa2 = %s\n",str , frase);
        }else{
            strcpy(frase , str);
            printf("la stringha1 = %s la stringa2 = %s\n",str , frase);
        }
        break;    
    case 4:
        printf("la dimensione della stringa 1 è: %d\n", strlen(frase));
        printf("la dimensione della stringa 1 è: %d\n", strlen(str));
        break;    
    default:
        break;
    }
    
    free(frase);
    free(str);
}