#include "Mechanics.h"

#ifndef BALL_H
#define BALL_H

class Ball{
private:
	double m_mass;
	double radius;
public:
	Ball(double);
	void SetBall(double);
	double getMass(){ return m_mass; }
	double getRadius(){ return radius; }
};

#endif