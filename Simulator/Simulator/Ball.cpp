#include "Ball.h"

Ball::Ball(double mass, double radius){
	SetBall(mass, radius);
}

void Ball::SetBall(double mass, double radius){
	m_mass = mass;
	m_radius = radius;
}