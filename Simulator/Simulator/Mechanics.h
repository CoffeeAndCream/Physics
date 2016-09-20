#include <math.h>
#ifndef MECHANICS_H
#define MECHANICS_H

class Mechanics{

private:
	const double g = 9.807;
	const long double G = -6.67408*pow(10.0, -11);
	const double pi = 3.14159;
public:
	double velocity(double, double);
	double acceleration(double, double);
	double F(double, double);
	double centripedalA(double, double);
	double momentum(double, double);
	double kineE(double, double);
	double gravPE(double, double);
	double work(double, double);
	double power(double, double);
	double angularV(double, double);
	double angularM(double, double);
	double momentI(double, double);
	double rotationalKE(double, double);
	double universalFG(double, double, double);
	double universalGPE(double, double, double);
	double frequency(double);
	double angular_freq(double);
	double density(double, double);
	double pressure(double, double);
};


#endif