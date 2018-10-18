#include <stdio.h>
#include "list.h"
#include "lib.h"

int main(){
  struct song_node * head;
  head->next = NULL;

  printf("Testing linked lists:\n\nPrint list (after additions):\n");
  insert_front(head, "Natural", "Imagine Dragons");
  insert_order(head, "Always Remember Us This Way", "Lady GaGa");
  insert_order(head, "Head Above Water", "Avril Lavigne");
  insert_order(head, "Thunder", "Imagine Dragons");
  print_list(head);
  printf("\nFinding \"Always Remember Us This Way\" - Lady GaGa\n");
  find(head, "Always Remember Us This Way","Lady GaGa");
  printf("Finding \"Look What I Found\" - Lady GaGa\n");
  find(head, "Look What I Found","Lady GaGa");
  printf("\nFinding Imagine Dragons:\n");
  find_artist(head, "Imagine Dragons");
  printf("Finding Calvin Harris:\n");
  find_artist(head, "Calvin Harris");
  printf("\nRandom song:\n");
  random_song(head);
  printf("\nRemoving \"Natural\" - Imagine Dragons:\n");
  remove_song(head, "Natural", "Imagine Dragons");
  printf("Check remove:\n");
  print_list(head);
  printf("\nFree list:\n");
  print_list(free_list(head));

  printf("\n-----------------------------------------------------------------------");
  // struct song_node * lib[27];
  // int i;
  // char x = 'a';
  // for(i=0;i<27;i++){
  //   strcpy(lib[i]->artist, x);
  //   strcpy(lib[i]->song, x);
  //   lib[i]->next = NULL;
  //   x++;
  // }

  printf("\nTesting library:\n\nPrint library (after additions):\n");
  // add_song(lib);
  // print_lib(lib);
  // printf("\nSearching for \"\" - \n");
  // search_song(lib);
  // printf("\nSearching for \n");
  // search_artist(lib);
  // printf("\nAll songs under \n");
  // print_letter(lib);
  // printf("\nAll songs by \n");
  // print_artist(lib);
  // printf("\nShuffle:\n");
  // shuffle(lib);
  // printf("\nDeleting \"\" - \n");
  // delete_song(lib);
  // printf("\nClear library:\n");
  // clear(lib);

  return 0;
}
