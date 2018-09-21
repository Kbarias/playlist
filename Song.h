#ifndef SONG_H_
#define SONG_H_
#include <vector>
#include <iostream>

using namespace std;

class Song

{

public:
	Song();

	Song(const string& title, const string& author = "", const string& album = "");

	void setTitle(string title); 
	void setAuthor(string author);
	void setAlbum(string album);

	string getTitle() const;

	string getAuthor() const;

	string getAlbum() const;

	friend bool operator==(const Song& lhs, const Song& rhs);

private: 

	string title_;

	string author_;

	string album_;

}; // end Set

#endif /* SET_H_ */
