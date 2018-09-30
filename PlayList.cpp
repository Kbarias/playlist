/*
PlayList.cpp
Kiara Barias
September 25, 2018
Project 2
Implementation of playlist
*/
#include <iostream>
#include <string>
#include <vector>
#include "Set.h"
#include "Song.h"
#include "PlayList.h"


PlayList::PlayList() //constuctor
{

}


PlayList::PlayList(const Song& a_song) 
{
  playlist_.add(a_song); //
}



int PlayList::getNumberOfSongs() const 
{
  return playlist_.getCurrentSize();
}


bool PlayList::isEmpty() const 
{
  return playlist_.isEmpty();
}


bool PlayList::addSong(const Song& new_song) 
{
  return playlist_.add(new_song);
}


bool PlayList::removeSong(const Song& a_song) 
{
  return playlist_.remove(a_song);
}


void PlayList::clearPlayList() 
{
  playlist_.clear();
}


void PlayList::displayPlayList() const 
{
  std::vector<Song> output = playlist_.toVector(); //puts the stuff in the playlist into a vector
  for(int i = 0; i < playlist_.getCurrentSize(); i++)
  {
    std::cout << "* Title: " << output[i].getTitle()<< " * " << "Author: " << output[i].getAuthor()<< " * " << "Album: " << output[i].getAlbum() << " *"<< std::endl;
    }   
  std::cout << "End of playlist" << std::endl;
}
