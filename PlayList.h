/*
PlayList.h
Kiara Barias
September 25, 2018
Project 2
Interface of a playlist
*/
#ifndef PLAY_LIST_H
#define PLAY_LIST_H
#include <string>
#include <iostream>
#include "Song.h"
#include "Set.h"

class PlayList {
public:
  //default constructor
  PlayList();

  /*Task: adds a song into playlist
  Input:  a song
  Output: song is put into the playlist */
  PlayList(const Song& a_song);

  /*Task: gets the current size of the playlist
  Input:  none
  Output: reports the current number of songs in playlist */
  int getNumberOfSongs() const;

  /*Task: checks if the playlist is empty
  Input:  none
  Output: reports true or false if there are no items in the playlist */
  bool isEmpty() const;

  /*Task: adds a new song to the playlist
  Input:  new song
  Output: reports true or false if the new song was succesfully added to the playlist */
  bool addSong(const Song& new_song);

  /*Task: removes a song from the playlist
  Input:  a song
  Output: reports true or false if a song was succesfully removed from the playlist */
  bool removeSong(const Song& a_song);

  /*Task: clears the playlist
  Input:  none
  Output: clears the playlist */
  void clearPlayList();

  /*Task: prints out the contents of the playlist
  Input:  none
  Output: prints out the title, author, and album of every song in the playlist */
  void displayPlayList() const;

private:
  // declaring a private variable; playlist_ is an object from class set
  Set<Song> playlist_;
  
};

#endif // PLAY_LIST_H
