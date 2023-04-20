#include <cmath>
#include <iostream>
using namespace std;

const double pi = 3.14159265358979323846;

double normalCDF(double x) {
    return 0.5 * erfc(-x / sqrt(2.0));
}

double d1(double S, double K, double r, double sigma, double T) {
    return (log(S / K) + (r + 0.5 * sigma * sigma) * T) / (sigma * sqrt(T));
}

double d2(double S, double K, double r, double sigma, double T) {
    return d1(S, K, r, sigma, T) - sigma * sqrt(T);
}

double blackScholesCall(double S, double K, double r, double sigma, double T) {
    return S * normalCDF(d1(S, K, r, sigma, T)) - K * exp(-r * T) * normalCDF(d2(S, K, r, sigma, T));
}
