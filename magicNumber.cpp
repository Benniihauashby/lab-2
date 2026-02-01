#include <iostream>

int favoriteNumber;

int main() {
    std::cout << "Please enter your favorite number: ";
    std::cin >> favoriteNumber;
    // multiply output by 2, add 10, divide by two, subtract original number
    std::cout << "Your magic number is... " << (((favoriteNumber * 2) + 10) / 2) - favoriteNumber << std::endl;
}