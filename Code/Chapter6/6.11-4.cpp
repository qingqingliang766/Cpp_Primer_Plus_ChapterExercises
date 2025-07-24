/*4. 加入Benevolent Order of Programmer后，在BOP大会上，人们便可以通过加入者的真实姓名、头衔或秘密BOP姓名来了解他（她）。请编写一个程序，可以使用真实姓名、头衔、秘密姓名或成员偏好来列出成员。编写该程序时，请使用下面的结构：
// Benevolent Order of Programmers name structure
struct bop {
char fullname[strsize]; // real name
char title[strsize];    // job title
char bopname[strsize];  // secret BOP name
int preference;         // 0 = fullname, 1 = title, 2 = bopname
};
该程序创建一个由上述结构组成的小型数组，并将其初始化为适当的值。另外，该程序使用一个循环，让用户在下面的选项中进行选择：
a. display by name        b. display by title
c. display by bopname     d. display by preference
q. quit
注意，“display by preference” 并不意味着显示成员的偏好，而是意味着根据成员的偏好来列出成员。例如，如果偏好号为1，则选择d将显示程序员的头衔。该程序的运行情况如下：
Benevolent Order of Programmers Report
a. display by name        b. display by title
c. display by bopname     d. display by preference
q. quit
Enter your choice: a
Wimp Macho
Raki Rhodes
Celia Laiter
Hoppy Hipman
Pat Hand
Next choice: d
Wimp Macho
Junior Programmer
Raki Rhodes
MIPS
Celia Laiter
Analyst Trainee
Hoppy Hipman
LOOPY
Pat Hand
LOOPY
Next choice: q
Bye!*/
#include <iostream>