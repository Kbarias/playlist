#include "Set.h"
#include <cstddef>
#include <vector>
#include <iostream>
using namespace std;


// private
template<class ItemType>
int Set<ItemType>::getIndexOf(const ItemType& target) const
{
   bool found = false;
   int result = -1;
   int search_index = 0;
   
   // If the bag is empty, item_count_ is zero, so loop is skipped
   while (!found && (search_index < item_count_))
   {
      if (items_[search_index] == target)
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
}  // end getIndexOf



// template<class ItemType>
// Set<ItemType>::Set(): item_count_(0), max_items_(DEFAULT_CAPACITY)
// {
// }  // end default constructor



template<class ItemType>
int Set<ItemType>::getCurrentSize() const
{
   return item_count_;
}  // end getCurrentSize


template<class ItemType>
bool Set<ItemType>::isEmpty() const
{
   return item_count_ == 0;
}  // end isEmpty


template<class ItemType>
bool Set<ItemType>::add(const ItemType& newEntry)
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
 bool Set<ItemType>::remove(const ItemType& anEntry)
 {
    return false; // STUB
 }  // end remove
*/   
 

template<class ItemType>
bool Set<ItemType>::remove(const ItemType& anEntry)
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
 void Set<ItemType>::clear()
 {
    // STUB
 }  // end clear
*/


template<class ItemType>
void Set<ItemType>::clear()
{
   item_count_ = 0;
}  // end clear


template<class ItemType>
bool Set<ItemType>::contains(const ItemType& anEntry) const
{
   return getIndexOf(anEntry) > -1;
}  // end contains



template<class ItemType>
std::vector<ItemType> Set<ItemType>::toVector() const
{
   std::vector<ItemType> bag_contents;
   for (int i = 0; i < item_count_; i++)
      bag_contents.push_back(items_[i]);
      
   return bag_contents;
}  // end toVector
