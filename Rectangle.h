//
//  Rectangle.h
//  Lab5
//
//  Created by Tarek Abdelrahman on 2020-11-25.
//  Copyright © 2020 Tarek Abdelrahman.
//
//  Permission is hereby granted to use this code in ECE244 at
//  the University of Toronto. It is prohibited to distribute
//  this code, either publicly or to third parties.

#ifndef Rectangle_h
#define Rectangle_h

#include <iostream>
#include <string>
using namespace std;


// This class implements the rectangle Shape objects.
// ECE244 Student: Write the definition of the class here.

#include "Shape.h"

class Rectangle : Shape {
private:
    float width;
    float height;
    
public:
    // Constructor
    Rectangle (string n, float xcent, float ycent, float w, float h);
    
    // Destructor
    virtual ~Rectangle();
    
    // Accessors
    float getWidth() const;
    float getHeight() const;
    
    // Mutators
    void setWidth(float w);
    void setHeight(float h);
    
    // Utility Methods
    virtual void draw() const;
    
    virtual float computeArea() const;
    
    virtual Shape* clone() const;
};

#endif /* Rectangle_h */


