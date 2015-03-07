#include <stdio.h>

int main(int argc, char *argv[]){
    int numbers[4] = {0};
    char name[5] = {'a'};

    //first print them out raw
    printf("numbers: %d %d %d %d.\n",
        numbers[0],
        numbers[1],
        numbers[2],
        numbers[3]);

    printf("name each: %c %c %c %c %c.\n",
        name[0],
        name[1],
        name[2],
        name[3],
        name[4]);

    printf("name: %s.\n", name);

    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;

    //setup the name
    name[0] = 'O';
    name[1] = 'm';
    name[2] = 'e';
    name[3] = 'r';
    name[4] = '\0';

    //then print them out initialized
    printf("numbers: %d %d %d %d.\n",
        numbers[0],
        numbers[1],
        numbers[2],
        numbers[3]);

    printf("name each: %c %c %c %c %c.\n",
        name[0],
        name[1],
        name[2],
        name[3],
        name[4]);

    //print the name like a string
    printf("name: %s.\n", name);
    
    return 0;
}