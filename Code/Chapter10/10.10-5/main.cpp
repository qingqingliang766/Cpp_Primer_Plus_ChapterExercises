// stacker.cpp -- testing the Stack class
#include <iostream>
#include <cctype> // or ctype.h
#include "customer.h"

int main()
{
    using namespace std;
    Stack st; // create an empty stack
    char ch;
    customer po;
    double total = 0.0; // 用于累计payment总数

    cout << "Please enter A to add a customer,\n"
         << "P to process a customer, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
            case 'A':
            case 'a': cout << "Enter customer name: ";
                      cin.getline(po.fullname, 35);
                      cout << "Enter payment amount: ";
                      cin >> po.payment;
                      cin.get(); // 消耗换行符
                      if (st.isfull())
                          cout << "Stack is full\n";
                      else
                          st.push(po);
                      break;
            case 'P':
            case 'p': if (st.isempty())
                          cout << "Stack is empty\n";
                      else
                      {
                          st.pop(po);
                          total += po.payment;
                          cout << "Customer " << po.fullname << " processed\n";
                          cout << "Payment: " << po.payment << " added to total\n";
                          cout << "Current total: " << total << endl;
                      }
                      break;
        }
        cout << "Please enter A to add a customer,\n"
             << "P to process a customer, or Q to quit.\n";
    }
    cout << "Final total: " << total << endl;
    cout << "Bye\n";
    return 0;
}