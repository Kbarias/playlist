#include "Set.h"
#include <cstddef>
#include <vector>
#include <iostream>
using namespace std;


// private
template<class ItemType>
int ArrayBag<ItemType>::getIndexOf(const ItemType& target) const
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
