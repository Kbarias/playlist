#include "SetInterface.h"
#include <cstddef>
#include <vector>
#include <iostream>
using namespace std;

template<class ItemType>
ArrayBag<ItemType>::ArrayBag(): item_count_(0), max_items_(DEFAULT_CAPACITY)
{
}  // end default constructor



template<class ItemType>
int ArrayBag<ItemType>::getCurrentSize() const
{
	return item_count_;
}  // end getCurrentSize



template<class ItemType>
bool ArrayBag<ItemType>::isEmpty() const
{
	return item_count_ == 0;
}  // end isEmpty




template<class ItemType>
bool ArrayBag<ItemType>::add(const ItemType& newEntry)
{
	bool has_room_to_add = (item_count_ < max_items_);
	if (has_room_to_add)
	{
		items_[item_count_] = newEntry;
		item_count_++;
	}  // end if
    
	return has_room_to_add;
}  // end add




/*
// STUB
 template<class ItemType>
 bool ArrayBag<ItemType>::remove(const ItemType& anEntry)
 {
    return false; // STUB
 }  // end remove
*/   
 
template<class ItemType>
bool ArrayBag<ItemType>::remove(const ItemType& anEntry)
{
   int located_index = getIndexOf(anEntry);
	bool can_remove_item = !isEmpty() && (located_index > -1);
	if (can_remove_item)
	{
		item_count_--;
		items_[located_index] = items_[item_count_];
	}  // end if
    
	return can_remove_item;
}  // end remove




/*
 // STUB
 template<class ItemType>
 void ArrayBag<ItemType>::clear()
 {
    // STUB
 }  // end clear
*/

template<class ItemType>
void ArrayBag<ItemType>::clear()
{
	item_count_ = 0;
}  // end clear





// template<class ItemType>
// int ArrayBag<ItemType>::getFrequencyOf(const ItemType& anEntry) const
// {
//    int frequency = 0;
//    int current_index = 0;       // Current array index
//    while (current_index < item_count_)
//    {
//       if (items_[current_index] == anEntry)
//       {
//          frequency++;
//       }  // end if
      
//       current_index++;          // Increment to next entry
//    }  // end while
   
//    return frequency;
// }  // end getFrequencyOf

template<class ItemType>
bool ArrayBag<ItemType>::contains(const ItemType& anEntry) const
{
	return getIndexOf(anEntry) > -1;
}  // end contains



template<class ItemType>
std::vector<ItemType> ArrayBag<ItemType>::toVector() const
{
   std::vector<ItemType> bag_contents;
	for (int i = 0; i < item_count_; i++)
		bag_contents.push_back(items_[i]);
      
   return bag_contents;
}  // end toVector
