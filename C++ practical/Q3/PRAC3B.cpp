#include <iostream.h>
#include <conio.h>
using namespace std;

class BankEmployee {
private:
    string name;
    long long account_no;
    double balance;
    double depositAmount, withdrawAmount;
public:

    void Input_employee_details(){
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter account number: ";
        cin >> account_no;
        cout << "Enter initial balance: $";
        cin >> balance;
    }

    void displayEmployeeDetails() {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << account_no << endl;
        cout << "Balance: $"<< balance << endl;
    }

    void deposit() {
        cout << "\nEnter deposit amount: $";
        cin >> depositAmount;
        balance += depositAmount;
        cout << "Deposit successful!" << endl;
    }

    void withdraw() {
        cout << "\nEnter withdrawal amount: $";
        cin >> withdrawAmount;
        if (withdrawAmount <= balance) {
            balance -= withdrawAmount;
            cout << "Withdrawal successful!" << endl;
        } else {
            cout << "Insufficient balance. Withdrawal failed." << endl;
        }
    }
};

int main() {
    clrscr();
    BankEmployee B1;
    B1.Input_employee_details();
    B1.displayEmployeeDetails();
    B1.deposit();
    B1.displayEmployeeDetails();
    B1.withdraw();
    B1.displayEmployeeDetails();

    getch();
    return 0;
}
