/*
Then create your array of linked lists for the full program to have the following functions:
Add song nodes.
Search for a song given song and artist name (return a pointer).
Search for an artist.
Print out all the entries under a certain letter.
Print out all the songs of a certain artist
Print out the entire library.
Shuffle - print out a series of randomly chosen songs.
Delete a song
Clear the library. */

// struct song_node * lib[27];

struct song_node * add_song(struct song_node *lib, char s[100], char a[100]);

struct song_node * search_song(struct song_node *lib, char s[100], char a[100]);

struct song_node * search_artist(struct song_node *lib, char a[100]);

void print_letter(struct song_node *lib, char l);

void print_artist(struct song_node *lib, char a[100]);

void print_lib(struct song_node *lib);

void shuffle(struct song_node *lib);

struct song_node * delete_song(struct song_node *lib, char s[100], char a[100]);

struct song_node * clear(struct song_node *lib);
