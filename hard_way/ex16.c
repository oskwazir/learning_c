#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person{
  char *name;
  int age;
  int height;
  int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight){
  struct Person *who = malloc(sizeof(struct Person));
  assert(who != NULL);

  who->name = strdup(name);
  who->age = age;
  who->height = height;
  who->weight = weight;

  return who;
}

void Person_destroy(struct Person *who){
  assert(who != NULL);

  free(who->name);
  free(who);
}

void Person_print(struct Person *who){
  printf("Name: %s\n", who->name);
  printf("\tAge: %d\n", who->age);
  printf("\tHeight: %d\n", who->height);
  printf("\tWeight: %d\n", who->weight);
}

int main(int argc, char *argv[]){
  //make two people structures
  struct Person *cj = Person_create("CJ Anderson", 24, 68, 224);
  struct Person *chris = Person_create("Chris Harris JR", 25, 70, 199);

  //print them out and where they are in memory
  printf("CJ is at memory location %p:\n", cj);
  Person_print(cj);

  printf("Chris is at memory location %p:\n", chris);
  Person_print(chris);

  //make everyone age by 20 years and print them again
  cj->age += 20;
  cj->height -= 2;
  cj->weight += 12;
  Person_print(cj);

  chris->age += 10;
  chris->height -= 4;
  chris->weight += 7;
  Person_print(chris);

  // destroy them both so we clean up
  Person_destroy(cj);
  Person_destroy(chris);

  return 0;
}