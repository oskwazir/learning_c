#include <stdio.h>

int main(int argc, char *argv[]){
    int i = 0;

    while(i < argc){
        printf("arg %d:%s\n",i, argv[i]);
        i++;
    }

    //let’s make our own array of strings
    char *states[] = { "Colorado","California","Arizona","Oregon" };
    int num_of_states = 4;

    //watch for this
    i = 0;
    while(i < num_of_states){
        printf("state %d:%s\n",i, states[i]);
        i++;
    }

    return 0;
}