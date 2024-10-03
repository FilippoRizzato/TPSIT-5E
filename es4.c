#include <stdio.h>
#include <string.h>
#include <stdlib.>

typedef struct{
    char narrativa[20] = "Narrativa";
    char saggistica[20] = "Saggistica";
    char scienze[20] = "Scienze";
    char arte[20]= "Arte";
}categoria;

typedef struct{
    char titolo[20];
    char autore[20];
    int anno;
    float prezzo;
    categoria tipo;
}libro;

void leggi_file(){
    FILE *fp;
    if(fp = fopen(argv[1], "w+") == NULL){//formattare file csv
        printf("Errore di apertura \n");
        return -1;
    }
    while((conta == fgets(fp) != EOF)){
        if(conta == '\n'){
            conta == 0;
        }else{
            if(conta == 0){
                
            }
        }
    }
}
char 



int main(int argc, char*argv[]){

}
