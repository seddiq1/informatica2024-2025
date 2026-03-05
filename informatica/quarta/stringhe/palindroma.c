/**/
/*elimina spazio*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
typedef char* string;

int palindroma(string buffer , int len){
    for (int i = 0; i < len/2; i++){
        if (buffer[i] != buffer[len-2-i]){
            printf("la stringa  è %s ", buffer);
            return 0;
        }
    }
    return 1;        
}
void compatta(string buffer , int len){

    if (len>0 && buffer[len-1]=='\n')
    {
        buffer[len-1]= '\0';
        len--;
    }
    
}


int main(){
    char buffer[200];
    string frase;


    printf("inserisci stringa \n");
    fgets(buffer, sizeof(buffer) , stdin);
    int len = strlen(buffer);
    frase=(string)malloc((len+1) * sizeof(char));
    
    if (frase == NULL)
    {
        printf("c'è un errore\n");
        return 1;
    }
    strcpy(frase,buffer);
    compatta(frase , len);
    if (palindroma(frase , len) == 1)
        printf("\nla stringa %s è palondroma", frase);
    else
        printf("\nla stringa %s non è palondroma", frase);
    free(frase);
    
}