/*
You should start by making your linked lists work with the following functionality:
insert nodes at the front
insert nodes in order
  alphabetical by Artist then by Song
print the entire list
find and return a pointer to a node based on artist and song name
find and return a pointer to the first song of an artist based on artist name
Return a pointer to random element in the list.
remove a single specified node from the list
free the entire list */

struct song_node{
  char song[100];
  char artist[100];
  struct song_node *next;
};

struct song_node * insert_front(struct song_node *head, char s[100], char a[100]);

int compare(struct song_node *x, struct song_node *y);

struct song_node * insert_order(struct song_node *head, char s[100], char a[100]);

void print_list(struct song_node *head);

struct song_node * find(struct song_node *head, char s[100], char a[100]);

struct song_node * find_artist(struct song_node *head, char a[100]);

int num_elements(struct song_node *head);

struct song_node * random_song(struct song_node *head);

struct song_node * remove_song(struct song_node *head, char s[100], char a[100]);

struct song_node * free_list(struct song_node *head);
