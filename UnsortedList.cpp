#include "UnsortedList.h"
#include <iostream>

UnsortedList::UnsortedList() {
    length = 0;
}

UnsortedList::~UnsortedList() {}

void UnsortedList::PutItem(int item) {
    if (length < MAX_ITEMS) {
        list[length++] = item;
    }
}

void UnsortedList::DeleteItem(int item) {
    for (int i = 0; i < length; ++i) {
        if (list[i] == item) {
            list[i] = list[length - 1];
            length--;
            break;
        }
    }
}

bool UnsortedList::IsFull() const {
    return (length == MAX_ITEMS);
}

bool UnsortedList::GetItem(int item) const {
    for (int i = 0; i < length; ++i) {
        if (list[i] == item) {
            return true;
        }
    }
    return false;
}

void UnsortedList::MakeEmpty() {
    length = 0;
}

int UnsortedList::GetLength() const {
    return length;
}

void UnsortedList::PrintList() const {
    for (int i = 0; i < length; ++i) {
        std::cout << list[i] << " ";
    }
    std::cout << std::endl;
}