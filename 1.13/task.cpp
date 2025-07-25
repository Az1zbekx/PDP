#include <bits/stdc++.h>
using namespace std;

int main(){
    double money = 100;
    string password = "0708", newpassword;
    int choice;
    bool sms = false;
    int cnt = 0;

    while (true) {
        system("clear"); // Linux uchun ekran tozalash
        cout << "Enter the password: ";
        cin >> newpassword;

        if (newpassword == password) {
            cnt = 0; // agar to'g'ri kiritsa urinishlar tiklanadi
            while (true) {
                system("clear");
                cout << "--- BANK MENU ---\n";
                cout << "1. Withdraw money\n";
                cout << "2. Check balance\n";
                cout << "3. Change password\n";
                cout << "4. View password\n";
                cout << "5. Connect to SMS\n";
                cout << "6. Exit\n";
                cout << "Enter choice: ";
                cin >> choice;

                if (choice == 1) {
                    double amount;
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;
                    if (amount > money) cout << "Insufficient funds.\n";
                    else {
                        money -= amount;
                        cout << "Withdrawal successful.\n";
                        if (sms) cout << "[SMS] You withdrew " << amount << ". Balance: " << money << "\n";
                    }
                } else if (choice == 2) {
                    cout << "Current balance: " << money << endl;
                } else if (choice == 3) {
                    string oldPass, new1, new2;
                    cout << "Enter old password: ";
                    cin >> oldPass;
                    if (oldPass == password) {
                        cout << "Enter new password: ";
                        cin >> new1;
                        cout << "Confirm new password: ";
                        cin >> new2;
                        if (new1 == new2) {
                            password = new1;
                            cout << "Password changed successfully.\n";
                        } else cout << "Passwords do not match!\n";
                    } else cout << "Wrong old password!\n";
                } else if (choice == 4) {
                    string conf;
                    cout << "Enter password to view: ";
                    cin >> conf;
                    if (conf == password) cout << "Current password: " << password << endl;
                    else cout << "Access denied!\n";
                } else if (choice == 5) {
                    sms = true;
                    cout << "SMS service connected.\n";
                } else if (choice == 6) {
                    cout << "Exiting program.\n";
                    cout << "Press Enter to exit...";
                    cin.ignore();
                    cin.get();
                    return 0;
                } else {
                    cout << "Invalid choice.\n";
                }

                cout << "\nPress Enter to continue...";
                cin.ignore();
                cin.get();
            }
        } else {
            cnt++;
            cout << "Incorrect password. Try again.\n";

            if (cnt >= 3) {
                cout << "Plastik bloklandi!\n";
                cout << "Press Enter to exit...";
                cin.ignore();
                cin.get();
                return 0;
            }

            cout << "Attempts left: " << (3 - cnt) << "\n";
            cout << "Press Enter to retry...";
            cin.ignore();
            cin.get();
        }
    }
}
