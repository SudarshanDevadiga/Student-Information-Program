#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks;

public:
    void setData(string n, int r, float m) {
        name = n;
        rollNo = r;
        marks = m;
    }

    void printData() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student student1;

    student1.setData("John Doe", 101, 95.5);

    student1.printData();

    return 0;
}