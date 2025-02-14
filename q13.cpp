#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 1000.0, amount;
    
    do {
        cout << "\nATM Machine";
        cout << "\n1. Withdraw";
        cout << "\n2. Deposit";
        cout << "\n3. Balance Inquiry";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number." << endl;
            continue;
        }
        
        switch (choice) {
            case 1:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > balance) {
                    cout << "Insufficient balance!" << endl;
                } else if (amount <= 0) {
                    cout << "Invalid amount!" << endl;
                } else {
                    balance -= amount;
                    cout << "Withdrawal successful. Remaining balance: " << balance << endl;
                }
                break;
            
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if (amount <= 0) {
                    cout << "Invalid amount!" << endl;
                } else {
                    balance += amount;
                    cout << "Deposit successful. New balance: " << balance << endl;
                }
                break;
            
            case 3:
                cout << "Your balance is: " << balance << endl;
                break;
            
            case 4:
                cout << "Exiting ATM. Thank you!" << endl;
                break;
            
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
        }
    } while (choice != 4);
    
    return 0;
}
