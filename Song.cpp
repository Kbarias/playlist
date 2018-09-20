#include "Song.h"
#include <cstddef>
#include <iostream>
using namespace std;

Song::Song()
{

}

void Song::setTitle(string title) 
{
	title_ = title;
}
void Song::setAuthor(string author)
{
	author_ = author;
}
void Song::setAlbum(string album)
{
	album_ = album;
}


string Song::getTitle()
{
	return title_;
}

string Song::getAuthor()
{
	return author_;
}

string Song::getAlbum()
{
	return album_;
}
