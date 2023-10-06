#ifndef UNSORTEDLIST_H
#define UNSORTEDLIST_H

class UnsortedList {
public:
    UnsortedList();  // Constructor
    ~UnsortedList(); // Destructor

    void PutItem(int item);
    void DeleteItem(int item);
    bool IsFull() const;
    bool GetItem(int item) const;
    void MakeEmpty();
    int GetLength() const;
    void PrintList() const;

private:
    static const int MAX_ITEMS = 100;
    int length;
    int list[MAX_ITEMS];
};

#endif // UNSORTEDLIST_H