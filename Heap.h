//
// Created by Chris Reyes on 11/15/23.
//

#ifndef ASSIGN8FINAL_HEAP_H
#define ASSIGN8FINAL_HEAP_H

#endif //ASSIGN8FINAL_HEAP_H

#ifndef HEAP_H
#define HEAP_H

template<class ItemType>
class Heap
{
public:
    Heap();
    // Constructor

    bool IsEmpty() const;
    // Determines whether the heap is empty.

    bool IsFull() const;
    // Determines whether the heap is full.

    void Insert(ItemType item);
    // Adds item to the heap.

    void Delete(ItemType& item);
    // Removes the top item from the heap.

private:
    int length;
    ItemType* elements;
    int maxItems;

    void ReheapDown(int root, int bottom);
    // Repairs the heap by moving the element at root
    // down to its proper position within the range [root, bottom].

    void ReheapUp(int root, int bottom);
    // Repairs the heap by moving the element at bottom
    // up to its proper position within the range [root, bottom].
};

#endif
