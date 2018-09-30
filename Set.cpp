/*
Set.cpp
Kiara Barias
September 25, 2018
Project 2
Implementation of set
*/
#include <iostream>
#include <string>
#include <vector>
#include "Set.h"

// default constructor to initialize
template <class ItemType>
Set<ItemType>::Set() 
{ 
  item_count_ = 0;
  max_items_ = DEFAULT_SET_SIZE;
}


template <class ItemType>
int Set<ItemType>::getCurrentSize() const 
{
  return item_count_;
}


template <class ItemType>
bool Set<ItemType>::isEmpty() const 
{
  return item_count_ == 0;
}


template <class ItemType>
bool Set<ItemType>::add(const ItemType& newEntry) 
{
  bool has_room_to_add = (item_count_ < max_items_); //if the number of items in the bag is less than the max that it can hold, that means it has room to add
   if (has_room_to_add) 
   {
      if (contains(newEntry)) //checks to make sure that the new entry isn't already in the bag
      {
         return false;
      }
      items_[item_count_] = newEntry; //takes the last empty space in the items_ array and puts in new entry
      item_count_++; 
   }  // end if
    
   return has_room_to_add;
}


template <class ItemType>
bool Set<ItemType>::remove(const ItemType& anEntry) 
{
  int located_index = getIndexOf(anEntry); 
   bool can_remove_item = !isEmpty() && (located_index > -1); //if the item type is not empty and it's actually on the array than it can be removed
   if (can_remove_item)
   {
      item_count_--;
      items_[located_index] = items_[item_count_]; //move what was in the very last entry to the place where the item was removed
   }  // end if
    
   return can_remove_item;
}


template <class ItemType>
void Set<ItemType>::clear() 
{
  item_count_ = 0; //just sets item count to 0
}


template <class ItemType>
bool Set<ItemType>::contains(const ItemType& anEntry) const 
{
  return getIndexOf(anEntry) > -1;
}


template <class ItemType>
std::vector<ItemType> Set<ItemType>::toVector() const 
{
  std::vector<ItemType> bag_contents; //creates a vector
   for (int i = 0; i < item_count_; i++)
      bag_contents.push_back(items_[i]); //adds stuff from what was in the array items into the vector bag_contents 
      
   return bag_contents;
}

template <class ItemType>
int Set<ItemType>::getIndexOf(const ItemType& target) const 
{
  bool found = false;
   int result = -1;
   int search_index = 0;
   
   // If the bag is empty, item_count_ is zero, so loop is skipped
   while (!found && (search_index < item_count_))
   {
      if (items_[search_index] == target) //if element was found in the array return the index
      {
         found = true;
         result = search_index;
      } 
      else
      {
         search_index++;
      }  // end if
   }  // end while
   
   return result;
}
