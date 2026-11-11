
#include <iostream>
#include <string>
using namespace std;

// Bank Account Class
class BankAccount
{
private:
    string name;
    int accountNumber;
    float balance;

public:
    // Function to create account
    void createAccount()
    {
        cout << "Enter Account Holder Name: ";
        cin >> name;

        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Initial Balance: ";
        cin >> balance;

        cout << "\nAccount Created Successfully!\n";
    }

    // Function to deposit money
    void deposit()
    {
        float amount;

        cout << "Enter Deposit Amount: ";
        cin >> amount;

        if (amount > 0)
        {
            balance += amount;
            cout << "Money Deposited Successfully!\n";
        }
        else
        {
            cout << "Invalid Amount!\n";
        }
    }

    // Function to withdraw money
    void withdraw()
    {
        float amount;

        cout << "Enter Withdraw Amount: ";
        cin >> amount;

        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Money Withdrawn Successfully!\n";
        }
        else
        {
            cout << "Insufficient Balance or Invalid Amount!\n";
        }
    }

    // Function to check balance
    void checkBalance()
    {
        cout << "Current Balance: Rs. " << balance << endl;
    }

    // Function to display account details
    void displayDetails()
    {
        cout << "\n===== ACCOUNT DETAILS =====\n";
        cout << "Account Holder: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: Rs. " << balance << endl;
    }
};

int main()
{
    BankAccount account;
    int choice;

    account.createAccount();

    do
    {
        cout << "\n===== BANK ACCOUNT SYSTEM =====\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Display Account Details\n";
        cout << "5. Exit\n";

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                account.deposit();
                break;

            case 2:
                account.withdraw();
                break;

            case 3:
                account.checkBalance();
                break;

            case 4:
                account.displayDetails();
                break;

            case 5:
                cout << "Thank You for Using Bank System!\n";
                break;

            default:
                cout << "Invalid Choice! Try Again.\n";
        }

    } while (choice != 5);

    return 0;
}

