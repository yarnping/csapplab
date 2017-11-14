#include "cachelab.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 1024

void printLine(char *path);

int main()
{
    char *path = "./traces/yi.trace";
    printLine(path);
    return 0;
}

void printLine(char *path){
    char buffer[MAX_LENGTH];
    int num = 1;
    FILE *pf = fopen(path,"r");

    while (fgets(buffer, MAX_LENGTH, pf) != NULL) {
        char action = buffer[1];

        printf("No.%d:%c\n", num, buffer[1]);
//        num++;
    }


    fclose(pf);
}
