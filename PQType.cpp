#include "PQType.h"

template<class ItemType>
PQType<ItemType>::PQType(int max)
{
    maxItems = max;
    items.elements = new ItemType[max];
    length = 0;
}

template<class ItemType>
PQType<ItemType>::~PQType()
{
    delete [] items.elements;
}

template<class ItemType>
bool PQType<ItemType>::IsEmpty() const
{
    return length == 0;
}

template<class ItemType>
bool PQType<ItemType>::IsFull() const
{
    return length == maxItems;
}

template<class ItemType>
void PQType<ItemType>::Enqueue(ItemType newItem)
{
    if (IsFull())
        throw "Priority queue is full.";
    else
    {
        length++;
        items.Insert(newItem);
    }
}

template<class ItemType>
void PQType<ItemType>::Dequeue(ItemType& item)
{
    if (IsEmpty())
        throw "Priority queue is empty.";
    else
    {
        items.Delete(item);
        length--;
    }
}