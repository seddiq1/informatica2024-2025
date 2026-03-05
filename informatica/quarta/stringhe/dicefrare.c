

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
typedef char* string;

void dicefrare(string buffer , int len , int N){
    int c=0;
    for (int i = 0; i < len; i++){
        if ((buffer[i] >= 65 && buffer[i] + N <= 90) || (buffer[i] >= 97 && buffer[i] + N < 122)){
            buffer[i]+=N;
        }else if (buffer[i] + N > 90 && buffer[i] + N < 90+N+1)
        {
            c=(buffer[i]+N)-91;
            buffer[i]='A'+c;
        }else if (buffer[i] + N > 97 && buffer[i] + N < 122+N+1)
        {
            c=(buffer[i]+N)-123;
            buffer[i]='a'+c;
        }
        
    }
}

int main(){
    string frase;


    
    frase=(string)malloc((50) * sizeof(char));
    if (frase == NULL)
    {
        printf("c'è un errore\n");
        return 1;
    }
    printf("inserisci stringa \n");
    fgets(frase, 50 , stdin);
    int len = strlen(frase) , num=0;
    printf("inserisci un numero\n");
    scanf("%d", &num);
    
    dicefrare(frase,len,num);
    printf("la stringa è %s\n", frase);
    
    free(frase);
}