/* Implementation for Shape class (Shape.cpp) */
#include "Shape.h"
#include <iostream>

// Constructor
Shape::Shape(const string& color) {
	this->color = color;
}

// Getter
string Shape::getColor() const {
	return color;
}

// Setter
void Shape::setColor(const string& color) {
	this->color = color;
}

void Shape::print() const {
	std::cout << "Shape of color=" << color;
}