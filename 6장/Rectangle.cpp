/* Implementation for Rectangle (Rectangle.cpp) */
#include "Rectangle.h"
#include <iostream>

// Constructor
Rectangle::Rectangle(int length, int width, const string& color)
	: Shape(color), length(length), width(width) { }

// Getters
int Rectangle::getLength() const {
	return length;
}
int Rectangle::getWidth() const {
	return width;
}

// Setters
void Rectangle::setLength(int length) {
	this->length = length;
}
void Rectangle::setWidth(int width) {
	this->width = width;
}

void Rectangle::print() const {
	std::cout << "Rectangle length=" << length << " width=" << width << ", subclass of ";
	Shape::print();
}

// Implement virtual function inherited from superclass Shape
double Rectangle::getArea() const {
	return length * width;
}