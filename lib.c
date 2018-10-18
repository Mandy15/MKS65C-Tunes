#include <stdio.h>
#include "lib.h"
// #include "list.c"

struct song_node * lib[27];
// for(i=0;i<27;i++){
//   lib[i] = malloc(sizeof(struct song_node));
// }
// int i;
// char x = 'a';
// for(i=0;i<27;i++){
//   insert_front(lib[i], x, x);
//   x++;
// }

struct song_node * add(struct song_node *lib, char s[100], char a[100]){
  // int i;
  // for(i = 0; i < 27; i++){
  //   if(lib[i]->artist == a){}
  // }
  // insert_order(lib[i], s, a);
  return lib;
}

struct song_node * search_song(struct song_node *lib, char s[100], char a[100]){
  return lib;
}

struct song_node * search_artist(struct song_node *lib, char a[100]){
  return lib;
}

void print_letter(struct song_node *lib, char l){
  ;
}

void print_artist(struct song_node *lib, char a[100]){
  ;
}

void print_lib(struct song_node *lib){
  ;
}

void shuffle(struct song_node *lib){
  ;
}

struct song_node * delete_song(struct song_node *lib, char s[100], char a[100]){
  return lib;
}

struct song_node * clear(struct song_node *lib){
  // int i;
  // for(i=27; i>0; i--){
  //   if(head[i]){
  //     free_list(head[i]);
  //   }
  // }
  return lib;
}
