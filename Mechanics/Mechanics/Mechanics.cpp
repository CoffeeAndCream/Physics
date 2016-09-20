#include <math.h>

class Mechanics{
private:
	const double g = 9.807;
	const long double G = -6.67408*pow(10.0, -11);
	const double pi = 3.14159;
public:
	double velocity(double d, double t){
		return d / t;
	}

	double acceleration(double v, double t){
		return v / t;
	}

	double F(double m, double a = 9.807){
		return m*a;
	}

	double centripedalA(double v, double r){
		return pow(v, 2) / r;
	}

	double momentum(double m, double v){
		return m*v;
	}

	double kineE(double m, double v){
		return .5*m*pow(v, 2);
	}

	double gravPE(double m, double h){
		return m*g*h;
	}

	double work(double F, double d){
		return F*d;
	}

	double power(double W, double t){
		return W / t;
	}

	double angularV(double theta, double t){
		return theta / t;
	}

	double angularM(double I, double omega){
		return I*omega;
	}

	double momentI(double m, double r){
		return m*pow(r, 2);
	}

	double rotationalKE(double I, double omega){
		return .5*I*pow(omega, 2);
	}

	double universalFG(double m1, double m2, double r){
		return (G*m1*m2) / pow(r, 2);
	}

	double universalGPE(double m1, double m2, double r){
		return (G*m1*m2) / r;
	}

	double frequency(double T){
		return 1 / T;
	}

	double angular_freq(double f){
		return 2 * pi*f;
	}

	double density(double m, double V){
		return m / V;
	}

	double pressure(double F, double A){
		return F / A;
	}

};
