/*data una stringa  trovare una sottostringa senza utilizzare 
string.h*/
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
int stringaInStringa(string fras, string str ){
    int flag=1 , cnt=0;
    if(strlen(fras)>strlen(str)){
        for(int i=0; i< strlen(fras)-strlen(str)+1 ; i++){
            if (fras[i] == str[0])
            {
                for(int j=1; j< strlen(str)-1 ; j++){
                    if (fras[i+j] != str[j])
                    {
                        flag=0;
                        break;
                    }
                }
                cnt+=flag;
            }
        }
        return cnt;
    }else
    {
        printf("impossible \n");
        return 0;
    }
    
    

}
int main(){
    string frase;
    string str=(string)malloc(30 * sizeof(char));
    frase=(string)malloc(30 * sizeof(char));
    if (frase == NULL)
    {
        printf("c'è un errore\n");
        return 1;
    }
    if (frase == NULL)
    {
        printf("c'è un errore\n");
        return 1;
    }
    printf("inserisci la prima stringa \n");
    fgets(frase, 30 , stdin);
    printf("inserisci la seconda stringa \n");
    fgets(str, 30 , stdin);
    compatta(frase , 30);
    compatta(str , 30);
    printf("la stringa inverta è %d", stringaInStringa(frase, str));
    free(frase);
}