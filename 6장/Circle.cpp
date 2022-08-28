/* Implementation for Circle (Circle.cpp) */
#include "Circle.h"
#include <iostream>
#define PI 3.14159265

// Constructor
Circle::Circle(int radius, const string& color)
	: Shape(color), radius(radius) { }

// Getters
int Circle::getRadius() const {
	return radius;
}

// Setters
void Circle::setRadius(int radius) {
	this->radius = radius;
}

void Circle::print() const {
	std::cout << "Circle radius=" << radius << ", subclass of ";
	Shape::print();
}

// Implement virtual function inherited for superclass Shape
double Circle::getArea() const {
	return radius * radius * PI;
}