#include <iostream>
#include <fstream>


int main() {
    std::fstream ffs;
    std::string filename = "accounts.csv";

    std::cout << "Welcome to Sulphuric Banking!" << std::endl;
    std::string name;
    int account;

    std::cout << "Enter your full name: ";
    std::cin >> name;

    std::cout << "Enter your account number:" << std::endl;
    std::cin >> account;

    ffs.open(filename, std::ios::in)

    return 0;
}
