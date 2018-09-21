#include "Song.h"
#include <cstddef>
#include <iostream>
using namespace std;

Song::Song()
{

}

Song::Song(const string& title, const string& author, const string& album)
{
	title_ = title;
	author_ = author;
	album_ = album;
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


string Song::getTitle() const
{
	return title_;
}

string Song::getAuthor() const
{
	return author_;
}

string Song::getAlbum() const
{
	return album_;
}

bool operator==(const Song& lhs, const Song& rhs)
{
	if((lhs.title_ == rhs.title_) && (lhs.author_ == rhs.author_) && (lhs.album_ == rhs.album_))
	{
		return true;
	}
		return false;
}
