/*
Set.h
Kiara Barias
September 25, 2018
Project 2
Template interface of a set
*/
#ifndef SET_H
#define SET_H
#include "SetInterface.h" 
#include <iostream>
#include <string>
#include <vector>

template <class ItemType>
class Set: public SetInterface<ItemType> //inheriting class template
{
  public:
    // default constructor to initialize
    Set();

    /*Task: Reports the current number of objects in this bag through itemcount.  
    Input:  None.  
    Output: The number of objects currently in the bag. */
    int getCurrentSize() const;

    /* Task: Sees whether this bag is empty.  
    Input:  None.  
    Output: True or false according to whether the bag is empty by checking if item count is equal to 0.*/
    bool isEmpty() const;

    /*Task: Adds a given object to this bag.  
    Input: newEntry  is an object.  
    Output: True or false according to whether the addition succeeds. */
    bool add(const ItemType& newEntry);

    /*Task: Removes an occurrence of a particular object from this bag, if possible.  
    Input: anEntry  is an object.  
    Output: True or false according to whether the removal succeeds. */
    bool remove(const ItemType& anEntry);

    /*Task: Removes all objects from this bag.  
    Input:  None.  
    Output:  makes bag clear of objects */
    void clear();

    /* Task: Tests whether this bag contains a particular object.  
    Input: anEntry  is an object.  
    Output: True or false according to whether anEntry  occurs in the bag. */
    bool contains(const ItemType& anEntry) const;

    /* Task: Gets all objects in this bag.  
    Input: None. 
    Output: A vector containing all entries currently in the bag. */
    std::vector<ItemType> toVector() const;

  private:
    static const int DEFAULT_SET_SIZE = 4; // for testing purposes we will keep the set small
    ItemType items_[DEFAULT_SET_SIZE]; // array of set items
    int item_count_;    // current count of set items
    int max_items_;    // max capacity of the set

    /*Task: returns the index of the element in the array items_ 
    Input: an element
    Output: the index of the element or if not found returns -1  */
    int getIndexOf(const ItemType& target) const;

};

#include "Set.cpp" 
#endif // SET_H
