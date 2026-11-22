#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
string name;
int age, roll;
cout << "Enter student name: ";
cin >> name;
cout << "Enter age: ";
cin >> age;
cout << "Enter roll number: ";
cin >> roll;
ofstream fout("student.txt");
fout << name << endl;
fout << age << endl;
fout << roll << endl;
fout.close();
cout << "\nData saved successfully.\n";
ifstream fin("student.txt");
fin >> name >> age >> roll;
cout << "\nStudent Details:\n";
cout << "Name: " << name << endl;
cout << "Age: " << age << endl;
cout << "Roll Number: " << roll << endl;
fin.close();
return 0; }