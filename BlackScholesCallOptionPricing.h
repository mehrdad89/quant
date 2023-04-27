#ifndef BLACKSCHOLESCALLOPTIONPRICING_H
#define BLACKSCHOLESCALLOPTIONPRICING_H

#include <cmath>

const double pi = 3.14159265358979323846;

double normalCDF(double x);
double d1(double S, double K, double r, double sigma, double T);
double d2(double S, double K, double r, double sigma, double T);
double blackScholesCall(double S, double K, double r, double sigma, double T);

#endif // BLACKSCHOLESCALLOPTIONPRICING_H
