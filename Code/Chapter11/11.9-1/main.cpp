// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
#include "vect.h"
#include <fstream>
int main()
{
    std::ofstream fout;
    fout.open("thewalk.txt");
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));     // seed random-number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;

        fout << "Target Distance：" << dstep << "  " << "Step Size: " << target << endl;

        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            fout << steps << ": " << result << endl;
            result = result + step;
            steps++;
        }
        // fout << "Target Distance：" << dstep << "  " << "Step Size: " << target << endl;

        // for (int i = 0; i < steps; i++)
        // {
        //     fout << i+1 << ": " << result << endl;
        // }

        fout << "After " << steps << " steps, the subject "
            "has the following location:\n";
        fout << result << endl;
        result.polar_mode();
        fout << " or\n" << result << endl;
        fout << "Average outward distance per step = "
            << result.magval()/steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    fout << "Bye!\n";
/* keep window open
    cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
*/
    return 0; 
}
