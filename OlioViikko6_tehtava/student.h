#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class student
{
public:
    student(string n,int a);
    void setAge(int newAge);
    void setName(const string &newName);
    string getName() const;
    int getAge() const;
    void printStudentInfo();
private:
    string name;
    int age;
};

#endif // STUDENT_H
