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
    printf("%s had  lived for %d years.\n", names[i], ages[i]);
  }

  printf("---\n");

  return 0;
}