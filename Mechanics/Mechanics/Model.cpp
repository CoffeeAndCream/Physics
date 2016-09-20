#include "Mechanics.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>

class Ball{
public:
	double mass;
	Ball(double m){
		mass = m;
	}

};

int main(){
	Ball *a = new Ball(10);
	std::cout << F((*a).mass, 10) << std::endl;

	system("pause");
	return 0;
}