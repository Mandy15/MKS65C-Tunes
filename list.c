#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

struct song_node * insert_front(struct song_node *n, char s[100], char a[100]){
  struct song_node *x = malloc(sizeof(struct song_node));
	strcpy(x->artist, s);
	strcpy(x->song, a);
	return x;
}

struct song_node * insert_order(struct song_node *n, char s[100], char a[100]){
  ;
}

void print_list(struct song_node *n){
  ;
}

struct song_node * find(char a[100], char s[100]){
  ;
}

struct song_node * find_first(char a[100]){
  ;
}

struct song_node * random(){
  ;
}

struct song_node * remove(struct song_node *n){
  ;
}

struct song_node * free_list(struct song_node *n){
  if(n){
		struct song_node *x = n->next;
		free(n);
		free_list(x);
	}else{
		return n;
	}
	return NULL;
}
