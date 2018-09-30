/*
Song.h
Kiara Barias
September 25, 2018
Project 2
Interface of a song
*/
#ifndef SONG_H
#define SONG_H
#include <iostream>
#include <string>

class Song 
{
public:
  // default constructor
  Song();

  //constructor with parameters that sets private members (title, author , and album) to empty
  Song(const std::string& title, const std::string& author = "", const std::string& album = "");

  /*Task: set the song's title to entered title.  
  Input:  user entered title.  
  Output:  title is set to entered title */
  void setTitle(std::string title);

  /*Task: set the song's author to entered author.  
  Input:  user entered author.  
  Output:  author is set to entered author */
  void setAuthor(std::string author);

  /*Task: set the song's album to entered album.  
  Input:  user entered album.  
  Output:  album is set to entered album */
  void setAlbum(std::string album);

  /*Task: return the song's title.  
  Input:  None.  
  Output:  return the song's title */
  std::string getTitle() const;

  /*Task: return the song's author.  
  Input:  None.  
  Output:  return the song's author */
  std::string getAuthor() const;

  /*Task: return the song's album.  
  Input:  None.  
  Output:  return the song's album */
  std::string getAlbum() const;

  /*Task: make sure that we are not repeating the songs by checking that the song's elements are not the same
  Input:  takes left hand side song and right hand side song  
  Output: true or false if the songs are the same*/
  friend bool operator == (const Song& lhs, const Song& rhs);

private:
  std::string title_;
  std::string author_;
  std::string album_;

};

#endif // SONG_H
