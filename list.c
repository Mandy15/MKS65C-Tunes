#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "list.h"

struct song_node * insert_front(struct song_node *head, char s[100], char a[100]){
  struct song_node *x = malloc(sizeof(struct song_node));
	strcpy(x->song, s);
  strcpy(x->artist, a);
  x->next = head->next;
  head->next = x;
	return head;
}

int compare(struct song_node *x, struct song_node *y){
  if(strcmp(x->artist, y->artist) == 0){
    return strcmp(x->song, y->song);
  }else{
    return strcmp(x->artist, y->artist);
  }
}

struct song_node * insert_order(struct song_node *head, char s[100], char a[100]){
  struct song_node *n = head;
  struct song_node *x = malloc(sizeof(struct song_node));
	strcpy(x->song, s);
  strcpy(x->artist, a);
  while(n->next){
    if(compare(n->next, x) <= 0){
      n = n->next;
    }else{
      break;
    }
  }
  x->next = n->next;
  n->next = x;
  return head;
}

void print_list(struct song_node *head){
  struct song_node *n = head->next;
  while(n){
		printf("\"%s\" - %s\n", n->song, n->artist);
		n = n->next;
	}
}

struct song_node * find(struct song_node *head, char s[100], char a[100]){
  struct song_node *n = head;
  while(n->next){
    if(strcmp(n->next->song, s) != 0 || strcmp(n->next->artist, a) != 0){
      n = n->next;
    }else{
      printf("Song found: \"%s\" - %s\n", n->next->song, n->next->artist);
      return n->next;
    }
  }
  printf("Song not found.\n");
  return head;
}

struct song_node * find_artist(struct song_node *head, char a[100]){
  struct song_node *n = head;
  while(n->next){
    if(strcmp(n->next->artist, a) != 0){
      n = n->next;
    }else{
      printf("Artist found: \"%s\" - %s\n", n->next->song, n->next->artist);
      return n->next;
    }
  }
  printf("Artist not found.\n");
  return head;
}

int num_elements(struct song_node *head){
  struct song_node *n = head->next;
  int x;
  while(n){
    x++;
    n = n->next;
  }
  return x;
}

struct song_node * random_song(struct song_node *head){
  struct song_node *n = head->next;
  srand( time(NULL));
  int i;
  for(i = rand()%num_elements(head); i > 0; i--){
    n = n->next;
  }
  printf("\"%s\" - %s\n", n->song, n->artist);
  return n;
}

struct song_node * remove_song(struct song_node *head, char s[100], char a[100]){
  struct song_node *n = head;
  while(n->next){
    if(strcmp(n->next->song, s) != 0 || strcmp(n->next->artist, a) != 0){
      n = n->next;
    }else{
      printf("Removed: \"%s\" - %s\n", n->next->song, n->next->artist);
      struct song_node *x = n->next->next;
      free(n->next);
      n->next = x;
      return NULL;
    }
  }
  printf("Song not in list.");
  return head;
}

struct song_node * free_list(struct song_node *head){
  struct song_node *n = head;
  struct song_node *x;
  while(n->next){
		x = n->next;
    n->next = n->next->next;
		free(x);
	}
	return head;
}
