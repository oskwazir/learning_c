#include <stdio.h>

int main(int argc, char *argv[]){

    if(argc != 2){
        printf("You must supply one argument!\n");
        //this is how you abort a program.
        return 1;
    }

    return 0;
}