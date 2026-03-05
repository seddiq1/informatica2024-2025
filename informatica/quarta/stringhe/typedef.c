/* stringa con malloc*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *buffer;
    int dim=0;
    do{
        printf("inserisci la quantità degli elementi:\n");
        scanf("%d", &dim);
    }while (dim<0);
    buffer=(char *)malloc((dim+1)*sizeof(char));
    if (buffer == NULL)
        return 1;
    printf("inserisci la stringa:\n");
    fgets(buffer, dim+1, stdin);
    printf("hai inserito: %s", buffer);
    free(buffer);
}