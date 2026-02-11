#include "student.h"
#include <iostream>
using namespace std;


student::student(string n,int a) {
    name = n;
    age = a;
}

void student::setAge(int newAge) {
    age = newAge;
}

void student::setName(const string &newName) {
    name = newName;
}

string student::getName() const {
    return name;
}

int student::getAge() const {
    return age;
}

void student::printStudentInfo() {
    cout << "Name: " << name << " Age: " << age << endl;
}


