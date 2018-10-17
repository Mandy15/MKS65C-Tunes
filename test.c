#include <stdio.h>
#include "list.h"
#include "lib.h"

int main(){
  struct song_node * head = NULL;

  printf("Testing linked lists:\n\tPrint list (after additions):\n");
  head = insert_front(head, "A", "A");
  // insert_order(head, "A", "B");
  print_list(head);
  // printf("\tFind \"\" by :\n");
  // find(head, "","");
  // printf("\tFind 's first song:\n");
  // find_artist(head, "");
  // printf("\tRandom song:\n");
  // random(head);
  // printf("\tRemove random song:\n");
  // remove(random(head));
  printf("\tFree list:\n");
  print_list(free_list(head));

  printf("\nTesting library:\n\tPrint library (after additions):\n");
  // print_lib();
  return 0;
}
