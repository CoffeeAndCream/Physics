#include "Mechanics.h"
#include "Ball.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main(){
	Ball *a = new Ball(10);
	std::cout << (*a).getMass() << std::endl;

	system("pause");
	return 0;
}
