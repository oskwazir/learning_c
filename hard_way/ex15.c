#include <stdio.h>

int main(int argc, char *argv[]){

  //create two arrays we care about
  int ages[] = {23,55,15,34,78,12};
  char *names[] = {
    "Feinb", "Fhilp", "Wastan", "Wustak","Henris","Abkar"
  };

  //safely get the size of ages
  int count = sizeof(ages) / sizeof(int);

  int i = 0;

  //first way using indexing
  for(i = 0; i < count; i++){
    printf("%s has lived for %d years.\n", names[i], ages[i]);
  }

  printf("---\n");

  //setup pointers to the start of the arrays
  int *cur_age = ages;
  char **cur_name = names;

  // second way using pointers
  for(i = 0; i < count; i++){
    printf("%s is %d years old.\n",
      *(cur_name+i), *(cur_age+i));
  }

  printf("---\n");

  return 0;
}