#include "Mechanics.h"

#ifndef BALL_H
#define BALL_H

class Ball : public Mechanics{
private:
	double m_mass;
	double m_radius;
public:
	Ball(double, double = 1);
	void SetBall(double, double);
	double getMass(){ return m_mass; }
	double getRadius(){ return m_radius; }
};

#endif