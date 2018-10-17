#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "list.h"

struct song_node * insert_front(struct song_node *n, char a[100], char s[100]){
  struct song_node *x = malloc(sizeof(struct song_node));
	strcpy(x->artist, a);
	strcpy(x->song, s);
  x->next = n;
	return x;
}

struct song_node * insert_order(struct song_node *n, char a[100], char s[100]){
  struct song_node *y = n;
  struct song_node *x = malloc(sizeof(struct song_node));
  strcpy(x->artist, a);
	strcpy(x->song, s);
  if(y->artist > x->artist){
    x->next = y;
    return x;
  }
  // while(y->next){
  //   if(y->a < x->a){
  //     y = y->next;
  //   }else if(y->s < x->s){
  //     y = y->next;
  //   }
  // }
  // x->next = y->next;
  // y->next = x;

  y->next = x;
  x->next = NULL;
  return n;
}

void print_list(struct song_node *n){
  while(n){
		printf("\t\"%s\" - %s", n->artist, n->song);
		n = n->next;
	}
	printf("\n");
}

struct song_node * find(struct song_node *n, char a[100], char s[100]){
  while(n){
    if(n->artist != a && n->song != s){
      n = n->next;
    }else{
      printf("Found: %s - %s\n", a, s);
      return n;
    }
  }
  return n;
}

struct song_node * find_artist(struct song_node *n, char a[100]){
  return n;
}

struct song_node * random_song(struct song_node *n){
  srand( time(NULL));
  int i = rand();
  return n;
}

struct song_node * remove_song(struct song_node *n){
  return n;
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
