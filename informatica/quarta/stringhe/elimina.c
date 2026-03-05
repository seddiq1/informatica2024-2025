/*elimina spazio*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
typedef char* string;
void compatta(string buffer , int len){
    char c;
    if (len>0 && buffer[len-1]=='\n'){
        buffer[len-1]= '\0';
        len--;
    }
    for (int i = 0; i < len; i++){
        if (buffer[i]==' '){
        for (int j = i; j < len; j++)
            buffer[j]=buffer[j+1];
        len--;
        }
    }
    buffer=(string)realloc(buffer,len * sizeof(char));
}


int main(){
    char buffer[200];
    string frase;


    printf("inserisci stringa \n");
    fgets(buffer, sizeof(buffer) , stdin);
    int len = strlen(buffer);
    frase=(string)malloc((len+1) * sizeof(char));
    strcpy(frase,buffer);
    compatta(frase , len);
    if (frase == NULL)
    {
        printf("c'è un errore\n");
        return 1;
    }
    printf("%s", frase);
    free(frase);
    
}