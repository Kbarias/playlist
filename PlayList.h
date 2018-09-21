#ifndef PLAYLIST_H_
#define PLAYLIST_H_
#include <vector>
#include "Set.h"
#include "Song.h"

using namespace std;

class PlayList
{

public:
	PlayList();

	PlayList(const Song& a_song);

	int getNumberOfSongs() const;

	bool isEmpty() const;

	bool addSong(const Song& new_song);

	bool removeSong(const Song& a_song);

	void clearPlayList();

	void displayPlayList() const;

private: 

	Set<Song> playlist_; //using the template SET, we're going to plug in Song as the data type and call it "playlist"

}; // end Set

#endif /* PlayList_H_ */
