#include "Planet.h"

Planet::Planet(double r, double m) {
	radius = r;
	mass = m;
}

double Planet::getMass() {
	return mass;
}

void Planet::setMass(double m) {
	mass = m;
}

double Planet::getRadius() {
	return radius;
}

void Planet::setRadius(double r) {
	radius = r;
}

double Planet::calculateGravity() {
	double gravity = (G * mass) / (radius * radius);
	return gravity;
}

#include <iostream>
#include "Planet.h"
using namespace std;

int main() {
	Planet earth(6.38e6, 5.98e24);
	double m = earth.getMass();
	cout << "Mass: " << m << endl;
	double gravStrength = earth.calculateGravity();
	cout << "Gravitational strength: " << gravStrength << endl;
}
