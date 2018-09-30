/*
Song.cpp
Kiara Barias
September 25, 2018
Project 2
Implementation of song
*/
#include <iostream>
#include <string>
#include <vector>
#include "Song.h"


Song::Song() 
{
  
}


Song::Song (const std::string& title, const std::string& author, const std::string& album) //giving initializing values
{
  title_ = title;
  author_ = author;
  album_ = album;
}

//setting functions
void Song::setTitle(std::string title) 
{
  title_ = title;
}
void Song::setAuthor(std::string author) 
{
  author_ = author;
}
void Song::setAlbum(std::string album)
{
  album_ = album;
}

//getting functions
std::string Song::getTitle() const 
{
  return title_;
}
std::string Song::getAuthor() const 
{
  return author_;
}
std::string Song::getAlbum() const 
{
  return album_;
}


bool operator == (const Song& lhs, const Song& rhs) 
{
  if((lhs.title_ == rhs.title_) && (lhs.author_ == rhs.author_) && (lhs.album_ == rhs.album_)) //checks left hand side song elements and right hand song elements to see if they are the same song
  {
    return true;
  }
    return false;
}
