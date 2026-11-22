
#include <iostream>
using namespace std;

class Personal {
protected:
    string name, address;
    int age;

public:
    void getPersonal() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Address: ";
        cin >> address;
        cout << "Enter Age: ";
        cin >> age;
    }
};

class Professional : virtual public Personal {
protected:
    string designation, company;

public:
    void getProfessional() {
        cout << "Enter Designation: ";
        cin >> designation;
        cout << "Enter Company: ";
        cin >> company;
    }
};

class Academic : virtual public Personal {
protected:
    string qualification;
    float percentage;

public:
    void getAcademic() {
        cout << "Enter Qualification: ";
        cin >> qualification;
        cout << "Enter Percentage: ";
        cin >> percentage;
    }
};

class Employee : public Professional, public Academic {
public:
    void display() {
        cout << "\n----- EMPLOYEE BIO-DATA -----";
        cout << "\nName: " << name;
        cout << "\nAddress: " << address;
        cout << "\nAge: " << age;
        cout << "\nDesignation: " << designation;
        cout << "\nCompany: " << company;
        cout << "\nQualification: " << qualification;
        cout << "\nPercentage: " << percentage << "%";
    }
};

int main() {
    Employee e;

    e.getPersonal();
    e.getProfessional();
    e.getAcademic();
    e.display();

    return 0;
}
