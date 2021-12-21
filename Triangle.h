//
//  Triangle.h
//  Lab5
//
//  Created by Tarek Abdelrahman on 2020-11-25.
//  Copyright © 2020 Tarek Abdelrahman.
//
//  Permission is hereby granted to use this code in ECE244 at
//  the University of Toronto. It is prohibited to distribute
//  this code, either publicly or to third parties.

#ifndef Triangle_h
#define Triangle_h

#include <iostream>
#include <string>
using namespace std;


// This class implements the triangle Shape objects.
// ECE244 Student: Write the definition of the class here.

#include "Shape.h"

class Triangle : Shape {
private:
    float x1_pos;
    float x2_pos;
    float x3_pos;
    float y1_pos;
    float y2_pos;
    float y3_pos;
    
public:
    // Constructor
    Triangle (string n, float xcent, float ycent, float x1, 
            float y1, float x2, float y2, float x3, float y3);
    
    // Destructor
    virtual ~Triangle();
    
    // Accessors
    float getX1() const;
    float getX2() const;
    float getX3() const;
    float getY1() const;
    float getY2() const;
    float getY3() const;
    
    // Mutators
    void setX1(float x);
    void setX2(float x);
    void setX3(float x);
    void setY1(float y);
    void setY2(float y);
    void setY3(float y);
    
    // Utility Methods
    virtual void draw() const;
    
    virtual float computeArea() const;
    
    virtual Shape* clone() const;
    
};

#endif /* Triangle_h */


