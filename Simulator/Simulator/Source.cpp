#include "Ball.h"
#include "Mechanics.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main(){
	//all functions
	Mechanics func;
	//new object
	Ball *a = new Ball(10);
	std::cout << "Mass of ball: " << a->getMass() << std::endl;
	std::cout << "Radius of ball: " << a->getRadius() << std::endl;


	system("pause");
	return 0;
}
