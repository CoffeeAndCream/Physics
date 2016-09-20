#include "Mechanics.h"
#include <iostream>
#include <math.h>

double Mechanics::velocity(double d, double t){
	return d / t;
}

double Mechanics::acceleration(double v, double t){
	return v / t;
}

double Mechanics::F(double m, double a = 9.807){
	return m*a;
}

double Mechanics::centripedalA(double v, double r){
	return pow(v, 2) / r;
}

double Mechanics::momentum(double m, double v){
	return m*v;
}

double Mechanics::kineE(double m, double v){
	return .5*m*pow(v, 2);
}

double Mechanics::gravPE(double m, double h){
	return m*g*h;
}

double Mechanics::work(double F, double d){
	return F*d;
}

double Mechanics::power(double W, double t){
	return W / t;
}

double Mechanics::angularV(double theta, double t){
	return theta / t;
}

double Mechanics::angularM(double I, double omega){
	return I*omega;
}

double Mechanics::momentI(double m, double r){
	return m*pow(r, 2);
}

double Mechanics::rotationalKE(double I, double omega){
	return .5*I*pow(omega, 2);
}

double Mechanics::universalFG(double m1, double m2, double r){
	return (G*m1*m2) / pow(r, 2);
}

double Mechanics::universalGPE(double m1, double m2, double r){
	return (G*m1*m2) / r;
}

double Mechanics::frequency(double T){
	return 1 / T;
}

double Mechanics::angular_freq(double f){
	return 2 * pi*f;
}

double Mechanics::density(double m, double V){
	return m / V;
}

double Mechanics::pressure(double F, double A){
	return F / A;
}
