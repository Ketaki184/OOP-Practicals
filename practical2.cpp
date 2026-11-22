#include <iostream>
#include <string>
using namespace std;
class BankAccount
{
private:
int accountNumber;
string accountHolderName;
double balance;
string accountType;
// Static data member
static int totalAccounts;
public:
// Function to enter account details
void setAccountDetails(int accountNumber, string accountHolderName,
double balance, string accountType)
{
// Using this pointer
this->accountNumber = accountNumber;
this->accountHolderName = accountHolderName;
this->balance = balance;
this->accountType = accountType;
totalAccounts++;
}
// Function to display account information
void displayAccount()
{
cout << "\nAccount Number : " << accountNumber;
cout << "\nAccount Holder : " << accountHolderName;
cout << "\nAccount Balance : Rs. " << balance;
cout << "\nAccount Type : " << accountType << endl;
}
// Inline function to calculate interest
inline double calculateInterest(double rate)
{
return (balance * rate) / 100;
}
// Static member function
static void showTotalAccounts()
{
cout << "\nTotal Accounts = " << totalAccounts << endl;
}// Friend function declaration
friend void compareBalance(BankAccount acc1, BankAccount acc2);
};
// Definition of static data member
int BankAccount::totalAccounts = 0;
// Friend function definition
void compareBalance(BankAccount acc1, BankAccount acc2)
{
if (acc1.balance > acc2.balance)
{
cout << "\n" << acc1.accountHolderName
<< " has a higher balance than "
<< acc2.accountHolderName << "." << endl;
}
else if (acc2.balance > acc1.balance)
{
cout << "\n" << acc2.accountHolderName
<< " has a higher balance than "
<< acc1.accountHolderName << "." << endl;
}
else
{
cout << "\nBoth accounts have the same balance." << endl;
}
}
int main()
{
BankAccount acc1, acc2;
// Enter account details
acc1.setAccountDetails(1001, "Alice", 50000, "Savings");
acc2.setAccountDetails(1002, "Bob", 75000, "Current");
// Display account information
cout << "----- Account 1 Information -----";
acc1.displayAccount();
cout << "\n----- Account 2 Information -----";
acc2.displayAccount();
// Calculate interest using inline function
double interest1 = acc1.calculateInterest(5);
double interest2 = acc2.calculateInterest(5);
cout << "\nInterest for Alice at 5% = Rs. " << interest1;
cout << "\nInterest for Bob at 5% = Rs. " << interest2 << endl;
// Compare balances using friend functioncompareBalance(acc1, acc2);
// Display total number of accounts
BankAccount::showTotalAccounts();
return 0;
}