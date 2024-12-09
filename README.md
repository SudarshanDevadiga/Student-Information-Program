Student Information Program
Overview
This program defines a Student class that stores and displays information about a student, including their name, roll number, and marks. The program demonstrates basic class usage in C++ by setting and printing student data.

Code Structure
Header Files: The program includes the <iostream> and <string> headers for input-output operations and string handling.
Namespace: The std namespace is used to avoid prefixing standard library names with std::.
Class: Student
Private Members:

string name: Stores the name of the student.
int rollNo: Stores the roll number of the student.
float marks: Stores the marks of the student.
Public Methods:

void setData(string n, int r, float m): Sets the student's name, roll number, and marks.
void printData(): Prints the student's name, roll number, and marks.
Main Function
Creates an instance of the Student class.
Sets the data for the student using the setData method.
Prints the student's data using the printData method.
