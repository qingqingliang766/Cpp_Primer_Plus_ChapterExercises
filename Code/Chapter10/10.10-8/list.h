#ifndef LIST_H_
#define LIST_H_
typedef int Item;
class List
{
private:
    Item *arr;
    int count;
    int arr_size;
public:
    List(int max_size = 5);

    ~List();

    bool isfull();

    bool isempty();

    bool add(Item& item);

    void visit(void (*pf)(Item &));
};
#endif