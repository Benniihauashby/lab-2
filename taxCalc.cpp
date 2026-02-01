#include <iostream>
#include <iomanip>

double taxRate = 0.075;
double itemPrice;
double salesTax;

int main(){
    // Enter the price of the item: 19.99
    std::cout << "Enter the price of the item: ";
    std::cin >> itemPrice;
    double salesTax = itemPrice * taxRate;
    // Original Price: $19.99
    // Sales Tax:    $1.50
    // Total Cost:   $21.49
    std:: cout << "Original Price: " << itemPrice << std::endl;
    std:: cout << "Sales Tax: " << salesTax << std::endl;
    std:: cout << "Total Cost: " << itemPrice + salesTax << std::endl;

}

// to get the output to be a clean two decimal points add
    // cout << fixed << setprecision(2);