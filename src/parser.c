#include <stdio.h>
#include <stdlib.h>
#include "parser.h"

void readFile (FILE *fptr, char* buffer){
    if (fptr) {
        while (fgets (buffer, 1000, fptr)){
            printf("%s", buffer);
        }
    } else printf ("ERROR - Can´t open file");
}

int main (){
// ler um ficheiro de input

FILE *fptr = NULL;
fptr = fopen("teste.txt", "r");
char* buffer = malloc(sizeof(char)*1000);
readFile(fptr,buffer);
fclose (fptr);
return 0;

}