#include <iostream>
#include "list.h"

List::~List()
{
    delete[] arr;
}

List::List(int max_size)
{
    count = 0;
    arr_size = max_size;
    arr = new Item[arr_size];
}

bool List::isempty()
{
    return 0 == count;
}

bool List::isfull()
{
    return count == arr_size;
}

bool List::add(Item& item)
{
    return arr[count++] = item;
}

void List::visit(void (*pf)(Item &))
{
    for (int i = 0; i < count; i++)
    {
        pf(arr[i]);
    }
}
