#include <iostream>
#include <fstream>
#include <vector>

int main() {
    std::fstream ffs;
    std::string filename = "accounts.csv";

    std::cout << "Welcome to Sulphuric Banking!" << std::endl;
    std::string name;
    std::vector<std::string> account;

    std::cout << "Enter your full name: ";
    std::cin >> name;

    std::cout << "Enter your account number:" << std::endl;
    std::cin >> account;

    ffs.open(filename, std::ios::in);

    std::vector<std::string> accountnumber;
    std::string fullname, dob, number;

    while (ffs >> reinterpret_cast<bool &>(accountnumber)) {
        if (accountnumber == account) {
            std::cout << "Welcome " << name << "!" << std::endl;
            std::cout << "Your account number is " << account << std::endl;
//            std::cout << "Your balance is $" << balance << std::endl;
        }
    }

    return 0;
}
