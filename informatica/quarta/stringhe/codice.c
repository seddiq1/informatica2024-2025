/*Il codice fiscale è un codice alfanumerico di 16 caratteri che serve per identificare in modo univoco ogni cittadino italiano.
È composto in questo modo:
CCC NNN YYMDD LLLL C
dove:
CCC → prime tre lettere del cognome, formate prendendo le consonanti (o le vocali, se le consonanti non bastano);
NNN → prime tre lettere del nome, con una regola simile a quella del cognome (ma se ci sono quattro consonanti, si prendono la 1ª, 3ª e 4ª);
YY → ultime due cifre dell’anno di nascita;
M → lettera che rappresenta il mese di nascita (A = gennaio, B = febbraio, C = marzo, D = aprile, E = maggio, H = giugno, L = luglio, M = agosto, P = settembre, R = ottobre, S = novembre, T = dicembre);
DD → giorno di nascita (per le donne si aggiunge 40 al giorno); se sesso==f g+=40
LLLL → codice del comune di nascita (per questo esercizio useremo G186, che è il codice del comune di Ostiglia);
C → lettera di controllo calcolata con una formula basata sui precedenti 15 caratteri.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    
    char *str=(char *)malloc(20 * sizeof(char)) , *frase=(char *)malloc(20 * sizeof(char)) , c , alfabetto[]={'n','a', 'b','c', 'd' , 'e', 'h', 'l' ,'m',  'p',  'r' , 's', 't' } ; 
    if (frase == NULL || str == NULL)
    {
        printf("non c'è spazio nella memoria\n");
        exit(1);
    }

    printf("inserisci il cognome:\n");
    fgets(frase, 20, stdin);
    int len = strlen(frase) , flag=0 , cnt=0 , NUM=0;
    for (int i = 0; i < len; i++)
    {
        if((frase[i]>='a' && frase[i] <= 'z') || (frase[i]>='A' && frase[i] <= 'Z')){
                flag=1;
                break;
        }
    }
    if (flag == 1)
    {
        for (int i = 0; (i != len-1) && (cnt != 3); i++)
        {
            if(frase[i] != 'a' && frase[i] != 'o' && frase[i] != 'i' && frase[i] != 'u' && frase[i] != 'e' && frase[i] != 'A' && frase[i] != 'O' && frase[i] != 'I' && frase[i] != 'U' && frase[i] != 'E'){
                str[cnt++]=frase[i];
            }
        }
        for (int i = 0; (i != len-1) && (cnt != 3); i++)
        {
            if(frase[i] == 'a' || frase[i] == 'o' || frase[i] == 'i' || frase[i] == 'u' || frase[i] == 'e' || frase[i] == 'A' || frase[i] == 'O' || frase[i] == 'I' || frase[i] == 'U' || frase[i] == 'E')
                str[cnt++]=frase[i];
        }
    }else
        for (int i = 0; i < 3; i++)
            str[i]='X';
    str[cnt++]=' ';
    printf("inserisci il nome:\n");
    fgets(frase, 20, stdin);
    len = strlen(frase);
    for (int i = 0; i < len; i++)
    {
        if((frase[i]>='a' && frase[i] <= 'z') || (frase[i]>='A' && frase[i] <= 'Z')){
                flag=1;
                break;
        }
    }
    if (flag == 1)
    {
        for (int i = 0; (i != len-1) && (cnt>3 && cnt<7); i++)
            if(frase[i] != 'a' && frase[i] != 'o' && frase[i] != 'i' && frase[i] != 'u' && frase[i] != 'e' && frase[i] != 'A' && frase[i] != 'O' && frase[i] != 'I' && frase[i] != 'U' && frase[i] != 'E')
                str[cnt++]=frase[i];
        for (int i = 0; (i != len-1) && (cnt>3 && cnt<7); i++)
            if(frase[i] == 'a' || frase[i] == 'o' || frase[i] == 'i' || frase[i] == 'u' || frase[i] == 'e' || frase[i] == 'A' || frase[i] == 'O' || frase[i] == 'I' || frase[i] == 'U' || frase[i] == 'E')
                str[cnt++]=frase[i];
        
    }else
        for (int i = 4; i < 8; i++)
            str[i]='X';
    
    str[cnt++]=' ';
    do
    {
        printf("inserisci il tuo sesso f O M");
        scanf("%c", c);
    } while (c!='m' && c!='M' && c!='F' && c!='f');
    int j=cnt;
    str[cnt++]=c;
    str[cnt++]=' ';
    printf("inserisci l'anno di nascita:\n");
    fgets(frase, 20, stdin);
    len = strlen(frase);
    if (len=5)
        for (int i = 2; i < 5; i++)
            str[cnt++]=frase[i];
    else
        for (int i = 1; i < 3; i++)
            str[cnt++]='X';
    
    printf(" %s  \n",str);
    str[cnt++]=' ';
    do
    {
        printf("inserisci il mese di nascita da 1 a 12:\n");
        scanf("%d", &NUM);
    } while (NUM<0 && NUM>10);
    for (int i = 1; i < 13; i++)
    {
        if (NUM = i){
            str[cnt++]=alfabetto[i];
            break;
        }
    }
    str[cnt++]=' ';
    do
    {
        printf("inserisci il mese di nascita da 1 a 12:\n");
        scanf("%d", &NUM);
    } while (NUM<0 && NUM>32);
    if (str[j] = 'f' || str[j] = 'F')
        str[cnt++]=NUM+40;
    else
        str[cnt++]=NUM;
    str[cnt++]=' ';
    printf("inserisci il codice:\n");
    fgets(frase, 20, stdin);
    
    
    
    
    
    
    
}