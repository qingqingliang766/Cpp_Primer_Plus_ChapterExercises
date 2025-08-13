#include "move.h"

int main()
{
    Move mo = {1,2};
    mo.showmove();

    Move mo1 = {4,3};
    Move mo2 = mo.add(mo1);
    mo2.showmove();

    mo2.reset();
    mo2.showmove();


    return 0;
}