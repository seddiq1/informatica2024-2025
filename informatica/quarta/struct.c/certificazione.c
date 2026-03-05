/* date le informazione di alcuni studenti ,  */
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct studenti
{
    char cognome[40];
    char nome[40];
    char classi[3];
    int anno;
    float prezzo;
};

struct certificazione
{
    int matricola;
    struct esame
    {
        char corso[40];
        int livello;
    }esame;
    
};
typedef char* stringa;
void compatta(stringa buffer , int lug){
    if (lug>0 && buffer[lug-1] == '\n')
    {
        buffer[lug-1];
        lug--;
    }
    
}
int main(){
    struct studente *studenti;
    int n=3;
    
}