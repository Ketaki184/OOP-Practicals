#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Item
{
public:
string name;
float cost;
int quantity;
void input()
{
cout << "Enter item name: ";
cin >> name;
cout << "Enter cost: ";
cin >> cost;
cout << "Enter quantity: ";
cin >> quantity;
}
void display()
{
cout << name << "\t" << cost << "\t" << quantity << endl;
}
};
int main()
{
vector<Item> items;
Item temp;
int n, choice;
cout << "Enter number of items: ";
cin >> n;
for (int i = 0; i < n; i++)
{
cout << "\nEnter details of item " << i + 1 << endl;
temp.input();
items.push_back(temp);
}
cout << "\nItem Records:\n";cout << "Name\tCost\tQuantity\n";
for (auto it = items.begin(); it != items.end(); it++)
{
it->display();
}
cout << "\nSort By:\n";
cout << "1. Name\n";
cout << "2. Cost\n";
cout << "3. Quantity\n";
cout << "Enter choice: ";
cin >> choice;
if (choice == 1)
{
sort(items.begin(), items.end(),
[](Item a, Item b) {
return a.name < b.name;
});
}
else if (choice == 2)
{
sort(items.begin(), items.end(),
[](Item a, Item b) {
return a.cost < b.cost;
});
}
else if (choice == 3)
{
sort(items.begin(), items.end(),
[](Item a, Item b) {
return a.quantity < b.quantity;
});
}
else
{
cout << "Invalid choice!";
return 0;
}
cout << "\nSorted Item Records:\n";
cout << "Name\tCost\tQuantity\n";
for (auto it = items.begin(); it != items.end(); it++)
{
it->display();
}
string searchName;cout << "\nEnter item name to search: ";
cin >> searchName;
auto it = find_if(items.begin(), items.end(),
[searchName](Item a) {
return a.name == searchName;
});
if (it != items.end())
{
cout << "\nItem Found!\n";
cout << "Name\tCost\tQuantity\n";
it->display();
}
else
{
cout << "\nItem Not Found!";
}
return 0;
}
