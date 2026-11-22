#include<iostream>
using namespace std;

class vehicle
{
public:
    int vehicle_no;
    string type;
    int days;
    int kilometers;

public:
    virtual void input() = 0;
    virtual void calculate_rent() = 0;

    virtual ~vehicle() {}
};

class car : public vehicle
{
public:
    void input()
    {
        cout<<"Enter vehicle number: ";
        cin>>vehicle_no;

        cout<<"Number of days: ";
        cin>>days;

        cout<<"Total number of kilometers required: ";
        cin>>kilometers;}

    void calculate_rent()
    {
        cout<<"Rent= "<<1000*kilometers*days<<endl;
    }
};

class bus : public vehicle
{
public:
    void input()
    {
        cout<<"Enter vehicle number: ";
        cin>>vehicle_no;

        cout<<"Number of days: ";
        cin>>days;

        cout<<"Total number of kilometer required: ";
        cin>>kilometers;
    }

    void calculate_rent()
    {
        cout<<"Rent: "<<2000*days*kilometers;
    }
};class bike : public vehicle
{
public:
    void input()
    {
        cout<<"Enter vehicle number: ";
        cin>>vehicle_no;

        cout<<"Days: ";
        cin>>days;

        cout<<"Total number of kilometer required: ";
        cin>>kilometers;
    }

    void calculate_rent()
    {
        cout<<"Rent: "<<500*days*kilometers;
    }
};

int main()
{
    int choice;
    vehicle *ptr=nullptr;do
    {
        cout<<"1.car"<<endl;
        cout<<"2.Bus"<<endl;
        cout<<"3.Bike"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter choice"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1: //car
                delete ptr;
                ptr = new car();
                cout<<"Enter Car details"<<endl;
                ptr->input();
                ptr->calculate_rent();
                break;

            case 2: //bus
                delete ptr;
                ptr = new bus();
                cout<<"Enter Bus details: "<<endl;
                ptr->input();
                ptr->calculate_rent();
                break;case 3: //bike
                delete ptr;
                ptr = new bike();
                cout<<"Enter bike details: "<<endl;
                ptr->input();
                ptr->calculate_rent();
                break;
        }

    }while(choice!=4);

    delete ptr;

    return 0;
}