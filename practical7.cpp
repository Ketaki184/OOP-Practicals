
#include <iostream>
#include <string>
using namespace std;

class InvalidUser {
public:
    string msg;

    InvalidUser(string m) {
        msg = m;
    }
};

int main() {
    int age;
    float income;
    string city, vehicle;

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Monthly Income: ";
    cin >> income;

    cout << "Enter City: ";
    cin >> city;

    cout << "Do you have a 4-wheeler? (Yes/No): ";
    cin >> vehicle;

    try {
        if (age < 18 || age > 55)
            throw InvalidUser("Age must be between 18 and 55.");

        if (income < 50000 || income > 100000)
            throw InvalidUser("Income must be between 50000 and 100000.");

        if (city != "Pune" && city != "Mumbai" &&
            city != "Bangalore" && city != "Chennai")
            throw InvalidUser("City is not allowed.");

        if (vehicle != "Yes" && vehicle != "yes")
            throw InvalidUser("User must have a 4-wheeler.");

        cout << "\nUser satisfies all conditions.";

    }
    catch (InvalidUser e) {
        cout << "\nException: " << e.msg;
    }

    return 0;
}
