/*dato una stringa la scrivi in inverso*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
typedef char* string;
void compatta(string buffer , int len){

    if (len>0 && buffer[len-1]=='\n')
    {
        buffer[len-1]= '\0';
        len--;
    }
    
}
void inversaStringa(string fras, int dim){
    int cnt=0;
    char temp; 
    for (int i = dim-1; i >= dim/2; i--)
    {
        temp=fras[i];
        fras[i]=fras[cnt];
        fras[cnt++]=temp;
    }
    

}

int main(){
    string frase;

    frase=(string)malloc(30 * sizeof(char));
    if (frase == NULL)
    {
        printf("c'è un errore\n");
        return 1;
    }
    printf("inserisci stringa \n");
    fgets(frase, 30 , stdin);
    compatta(frase , 30);
    inversaStringa(frase, strlen(frase));
    printf("la stringa inverta è %s", frase);
    free(frase);
}