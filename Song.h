#ifndef SONG_H
#define SONG_H
#include <vector>

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
