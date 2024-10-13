#include <iostream>
#include <iomanip>

int main() {
    int number;
   std:: cin >> number;

    // Display the number with leading zeros
    std::cout << std::setfill('0') << std::setw(2) << number << std::endl;

    return 0;
}
