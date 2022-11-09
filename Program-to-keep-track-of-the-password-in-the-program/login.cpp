/*
    Program to keep record of the password in the map where the password has
    length>=6, upper case letter>=1, lower case letter>=1, numeric character>=1, special character = 1;
*/
#include <iostream>
#include <string>
#include <map>
using namespace std;

class User {
    protected:
        string password;
    public:
        User() {
            password = "";
        }
        User(string p) {
            password = p;
        }
        string getPassword() {
            return password;
        }
        void setPassword(string p) {
            password = p;
        }
        void input() {
            cout << "Enter password: ";
            cin >> password;
        }
        void output() {
            cout << "Password: " << password << endl;
        }
};

class Database {
    public:
        map<string, User> database;
    public:
        Database() {
            database.clear();
        }
        void output() {
            for (auto it = database.begin(); it != database.end(); it++) {
                it->second.output();
                cout << endl;
            }
        }
        bool checkUser(string u) {
            if (database.find(u) == database.end()) {
                return false;
            }
            return true;
        }
        bool checkLogin(string p) {
            if (database.find(p) == database.end()) {
                return false;
            }
            if (database[p].getPassword() != p) {
                return false;
            }
            return true;
        }
};

class Password {
    protected:
        int length;
        int upper;
        int lower;
        int numeric;
        int special;
    public:
        Password() {
            length = 6;
            upper = 1;
            lower = 1;
            numeric = 1;
            special = 1;
        }
        void output() {
            cout << "Minimum password length: " << length << endl;
            cout << "Minimum number of upper case letters: " << upper << endl;
            cout << "Minimum number of lower case letters: " << lower << endl;
            cout << "Minimum number of numeric characters: " << numeric << endl;
            cout << "Minimum number of special characters: " << special << endl;
        }
        bool checkPassword(string p) {
            int len = 0;
            int up = 0;
            int low = 0;
            int num = 0;
            int spe = 0;
            for (int i = 0; i < p.length(); i++) {
                if (('A' <= p[i] && p[i] <= 'Z') || ('a' <= p[i] && p[i] <= 'z')) {
                    len++;
                    if ('A' <= p[i] && p[i] <= 'Z') {
                        up++;
                    }
                    if ('a' <= p[i] && p[i] <= 'z') {
                        low++;
                    }
                } 
                else if ('0' <= p[i] && p[i] <= '9') {
                    len++;
                    num++;
                } 
                else {
                    len++;
                    spe++;
                }
            }
            if (len < length) {
                return false;
            }
            if (up < upper) {
                return false;
            }
            if (low < lower) {
                return false;
            }
            if (num < numeric) {
                return false;
            }
            if (spe < special) {
                return false;
            }
            return true;
        }
};
class Login {
    protected:
        int attempts;
        Database database;
        Password password;
    public:
        Login() {
            attempts = 0;
        }
        void output() {
            database.output();
            password.output();
        }
        void run() {
            int choice;
            while (true) {
                cout << endl << "MAIN MENU:" << endl;
                cout << "1) Create Password." << endl;
                cout << "2) Login." << endl;
                cout << "3) Exit." << endl;
                cout << "Enter your choice: ";
                cin >> choice;
                if (choice == 1) {
                    createPassword();
                } 
                else if (choice == 2) {
                    login();
                } 
                else if (choice == 3) {
                    return;
                } 
                else {
                    cout << "Invalid choice!" << endl;
                }
            }
        }
        void createPassword() {
            string p;
            while (true) {
                cout << "Enter password: ";
                cin >> p;
                if (database.checkUser(p)) {
                    cout << "Password already exists!" << endl << endl;
                    continue;
                }
                if (!password.checkPassword(p)) {
                    cout << "Invalid password!" << endl;
                } 
                else {
                    cout << "Password has been added to the database." << endl;
                    break;
                }
            }
            User user(p);
            database.database[p] = user;
        } 
        void login() {
            string p;
            while (true) {
                cout << "Enter password: ";
                cin >> p;
                if (!database.checkLogin(p)) {
                    cout << "Wrong password!" << endl;
                    attempts++;
                    if (attempts == 3) {
                        cout << "You are logged out!" << endl;
                        attempts=0;
                        return;
                    }
                } 
                else {
                    cout << "Welcome!" << endl;
                    return;
                }
            }
        }
};

int main() {
    Login login;
    login.output();
    login.run();
    return 0;
}
