#ifndef _PERSON_H
#define _PERSON_H
#include <string>
using std::string;
class Person {
private:
    static const int LIMIT = 25;
    string lname;      // Person's last name
    char fname[LIMIT]; // Person's first name
public:
    Person() { lname = ""; fname[0] = '\0'; } // #1
    Person(const string & ln, const char * fn = "Heyyou"); // #2
    // 以下方法显示 lname 和 fname
    void Show() const; // firstname lastname format
    void FormalShow() const; // lastname, firstname format
};
#endif