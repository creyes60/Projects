//
// Created by Chris Reyes on 11/15/23.
//

#ifndef ASSIGN8FINAL_PQTYPE_H
#define ASSIGN8FINAL_PQTYPE_H

#endif //ASSIGN8FINAL_PQTYPE_H

#ifndef PQTYPE_H
#define PQTYPE_H

#include "Heap.h"


template<class ItemType>
class PQType



{
public:
    PQType(int max);
    // Constructor

    ~PQType();
    // Destructor

    bool IsEmpty() const;
    // Determines whether the priority queue is empty.

    bool IsFull() const;
    // Determines whether the priority queue is full.

    void Enqueue(ItemType newItem);
    // Adds newItem to the priority queue.

    void Dequeue(ItemType& item);
    // Removes the highest priority item from the priority queue and returns it in item.

private:
    int length;
    Heap <ItemType> items;
    int maxItems;
};

#endif