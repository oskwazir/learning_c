#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

/** Our old friend die from ex17 */
void die(const char *message){
  if(errno){
    perror(message);
  } else {
    printf("Error: %s\n", message);
  }

  exit(1);
}

//a typedef creates a fake type, in this case
// for a function pointer
typedef int (*compare_cb)(int a, int b);

/**
* A classic bubble sort function that uses the
* compare_cb to do the sorting.
*/
int *bubble_sort(int *numbers, int count, compare_cb cmp){
  int temp = 0;
  int i = 0;
  int j = 0;
  int *target = malloc(count * sizeof(int));

  if(!target) die("Memory error!");

  memcpy(target, numbers, (count * sizeof(int)));

  for(i=0; i < count; i++){
    for(j=0; j < count - 1; j++){
      if(cmp(target[j], target[j+1]) > 0){
        temp = target[j+1];
        target[j+1] = target[j];
        target[j] = temp;
      }
    }
  }

  return target;
}

int sorted_order(int a, int b){
  return a - b;
}

int reverse_order(int a, int b){
  return b - a;
}

int strange_order(int a, int b){
  return 0;
}

void test_sorting(int *numbers, int count, compare_cb cmp){
  return;
}

int main(int argc, char *argv[]){
 return 0; 
}