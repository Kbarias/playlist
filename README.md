# playlist

Class Set
You are given an interface: SetInterface.h (just like BagInterface.h but it does not allow duplicates)
This is a public interface, and completely specifies what the Set class operations must be.
SetInterface is an abstract class (it has no implementation), so your Set class must inherit from SetInterface and implement all of its methods.
Set differs from Bag only in the fact that it does not allow duplicates. This means that it does not have a getFrequencyOf()method because an item can be in the Set only once. This also means that add()must check that an element is not in Set already, if it is the item will not be added.

Other than the methods specified by the SetInterface, your Set class, similarly to the Bag class, will also have some private data members:

static const int DEFAULT_SET_SIZE = 4; // for testing purposes we will keep the set small

ItemType items_[DEFAULT_SET_SIZE]; // array of set items

int item_count_;                  // current count of set items

int max_items_;                   // max capacity of the set

Set also has a private member function (a helper function) other than the public methods specified by SetInterface.h
It is used by some of its' public methods to find out where a particular item is

// post: Either returns the index of target in the array items_ 

// or -1 if the array does not contain the target

int getIndexOf(const ItemType& target) const;

Remember,  Set is an Abstract Data Type! Since you are doing the work, you want to make it as general as possible... you may need to implement film streaming software tomorrow if something goes wrong with your television set 
So Set is templated and can store an arbitrary ItemType.



Class PlayList
Your PlayList class will have a single data member (private member variable), a Set object called playlist_ which will store your Songs:

Set<Song> playlist_;

Your PlayList will have the following operations (public member functions)

PlayList();

PlayList(const Song& a_song);
int getNumberOfSongs() const;

bool isEmpty() const;

bool addSong(const Song& new_song);

bool removeSong(const Song& a_song);

void clearPlayList();

void displayPlayList() const;


You will notice that the Set ADT did serve you well. Most of the things you want to do to your PlayList are functionalities your Set ADT provides, so all of these functions will essentially be making calls to the corresponding Set public members... good design goes a long way!!!

Once again, since you are the best programmer in town I trust you will do a great job at commenting these thoroughly!!!

A few things to notice:

The parameterized constructor needs to add a_song to playlist_
Depending on your design/implementation, when removing an item, Set may or may not have preserved an order for the remaining items because in a Set THERE IS NO ORDER. In a PlayList, on the other hand, you may like to have Songs play in a certain order. Don't worry about that for now, although it may not be the most desirable behavior, you can simply remove a Song from the PlayList by calling the Set::remove() member function no matter how you implemented it. We will take care of this in Project 3.
displayPlayList() will take advantage of Set::toVector() to access and display to the console (cout) data for all the songs in playlist_ . For each song it will display: * Title: title * Author: author * Album: album *  on a new line, where the text in red should be replaced by the value of the corresponding Song member variable. After displaying data for all the songs it will display: End of playlist on a new line. 
