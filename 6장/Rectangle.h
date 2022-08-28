/* Header for Rectangle class (Rectangle.h) */
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

// The class Rectangle is a subclass of Shape
class Rectangle : public Shape {
private:
	int length;
	int width;

public:
	Rectangle(int length = 1, int width = 1, const string& color = "red");
	int getLength() const;
	void setLength(int length);
	int getWidth() const;
	void setWidth(int width);
	void print() const;      // Override the virtual function
	double getArea() const;  // to implement virtual function
};

#endif#pragma once
