/* Header for Shape class (Shape.h) */
#ifndef SHAPE_H
#define SHAPE_H

#include <string>
using namespace std;

class Shape {
private:
	string color;   // Private data member

public:
	Shape(const string& color = "red");  // Constructor
	string getColor() const;            // Getter
	void setColor(const string& color);  // Setter
	// Virtual function, run subclass version if overridden
	virtual void print() const;
	// Pure virtual, to be implemented by subclass
	// You cannot create instance of Shape
	virtual double getArea() const = 0;
};

#endif
#pragma once
