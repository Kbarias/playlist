#ifndef SET_H_
#define SET_H_
#include <vector>
#include <iostream>
#include "SetInterface.h"

using namespace std;


template<class ItemType>  //ItemType is just giving a general data type
class Set : public SetInterface<ItemType>
{

public:
	virtual int getCurrentSize() const;

   	virtual bool isEmpty() const;

   	virtual bool add(const ItemType& newEntry);

   	virtual bool remove(const ItemType& anEntry);

   	virtual void clear();

   	virtual bool contains(const ItemType& anEntry) const;

   	virtual std::vector<ItemType> toVector() const;

private: 

  static const int DEFAULT_SET_SIZE = 4; // for testing purposes we will keep the set small

  ItemType items_[DEFAULT_SET_SIZE]; // array of set items

  int item_count_;                  // current count of set items

  int max_items_;                   // max capacity of the set



  // post: Either returns the index of target in the array items_ 

  // or -1 if the array does not contain the target

  int getIndexOf(const ItemType& target) const;

}; // end Set

#endif /* SET_INTERFACE_H_ */
