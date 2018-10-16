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

struct song_node * lib[27];

struct song_node * add(song_node);

search_song();
search_artist();
print_letter();
print_artist();
print_lib();
shuffle();
delete();
clear();
