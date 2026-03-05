#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef char* string;

int main(){
    int flag=0 , cnt=0;
    string frase=malloc(100);
    string str=malloc(100);
    printf("inserisci la stringa1:\n");
    fgets(frase, 50, stdin);
    printf("inserisci la stringa2:\n");
    fgets(str, 50, stdin);
    int dim1=strlen(frase) , dim2=strlen(str);
    for (int i = 0; i < dim1-dim2+1; i++)
    {
        flag=1;
        if (frase[i] == str[0])
        {
            for (int j = 0; j < dim2; j++){
                if (frase[i+j] != str[j])
                {
                    flag=0;
                    break;
                }
                
            }
            cnt+=flag;
        }
        
    }
    
    printf("la stringa %s c'è nella stringa %s : %d volte", frase , str , cnt);
    free(frase);
    free(str);
}