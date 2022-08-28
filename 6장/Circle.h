/* Header for Circle (Circle.h) */
#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

// The class Circle is a subclass of Shape
class Circle : public Shape {
private:
	int radius;   // Private data member

public:
	Circle(int radius = 1, const string& color = "red"); // Constructor
	int getRadius() const;                // Getter
	void setRadius(int radius);     // Setter
	void print() const;      // Override the virtual function
	double getArea() const;  // to implement virtual function
};

#endif
#pragma once
