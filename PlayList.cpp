#include "PlayList.h"
#include <cstddef>
using namespace std;

PlayList::PlayList()
{

}

PlayList::PlayList(const Song& a_song)
{
	addSong(a_song);
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
	return playlist_.clear();
}

void PlayList::displayPlayList() const
{
	vector<Song> output = playlist_.toVector();
	for(int i = 0; i < output.size(); i++)
	{
		cout << output[i].getTitle()<< " " << output[i].getAuthor()<< " " << output[i].getAlbum(); 
	}
}
