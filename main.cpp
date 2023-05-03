#include <iostream>
#include "BlackScholesCallOptionPricing.h"

int main() {
    double S, K, r, sigma, T;
    std::cout << "Enter the underlying asset price: ";
    std::cin >> S;
    std::cout << "Enter the option strike price: ";
    std::cin >> K;
    std::cout << "Enter the risk-free interest rate: ";
    std::cin >> r;
    std::cout << "Enter the volatility of the underlying asset: ";
    std::cin >> sigma;
    std::cout << "Enter the time to expiration in years: ";
    std::cin >> T;
    double callPrice = blackScholesCall(S, K, r, sigma, T);
    std::cout << "The price of the European call option is: " << callPrice << std::endl;
    return 0;
}
