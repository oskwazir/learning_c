#include <stdio.h>

int main(int argc, char *argv[]){
    int i = 0;

    if(argc == 1){
        printf("You need to enter some arguments!\n");
    } else if (argc > 1 && argc < 4){
        printf("Here are your arguments:\n");

        for(int i = 1; i < argc; i++){
            printf("%s ", argv[i]);
        }

        printf("\n");
    } else {
        printf("You entered too many arguments.\n");
    }

    return 0;
}