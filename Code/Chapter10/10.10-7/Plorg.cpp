#include "Plorg.h"
#include <iostream>

Plorg::~Plorg(){}


//plorg 的 CI 可以修改；
void Plorg::setCI(int ci)
{
    CI = ci;
}

void Plorg::ShowPlorg() const //plorg 可以报告其名称和 CI；
{
    std::cout << "name is " << name << "\t" << "CI is " << CI << "\n";
}
