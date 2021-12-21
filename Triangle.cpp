//
//  Triangle.cpp
//  Lab5
//
//  Created by Tarek Abdelrahman on 2020-11-25.
//  Copyright © 2020 Tarek Abdelrahman.
//
//  Permission is hereby granted to use this code in ECE244 at
//  the University of Toronto. It is prohibited to distribute
//  this code, either publicly or to third parties.

//  ECE244 Student: Write the implementation of the class Rectangle here

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

#include "Shape.h"
#include "Triangle.h"

// Build Triangle Object
Triangle::Triangle(string n, float xcent, float ycent, float x1,
                    float y1, float x2, float y2, float x3, float y3):Shape(n, xcent, ycent) {
    x1_pos = x1;
    x2_pos = x2;
    x3_pos = x3;
    y1_pos = y1;
    y2_pos = y2;
    y3_pos = y3;
    
    setXCentre((x1_pos + x2_pos + x3_pos)/3);
    setYCentre((y1_pos + y2_pos + y3_pos)/3);
}

Triangle::~Triangle() {
    // Nothing to do
}

// Accessor
float Triangle::getX1() const {
    return x1_pos;
}

float Triangle::getX2() const {
    return x2_pos;
}

float Triangle::getX3() const {
    return x3_pos;
}

float Triangle::getY1() const { 
    return y1_pos;
}

float Triangle::getY2() const {
    return y2_pos;
}

float Triangle::getY3() const {
    return y3_pos;
}

// Mutators
void Triangle::setX1(float x){
    x1_pos = x;
}

void Triangle::setX2(float x){
    x2_pos = x;
}

void Triangle::setX3(float x){
    x3_pos = x;
}

void Triangle::setY1(float y){
    y1_pos = y;
}

void Triangle::setY2(float y){
    y2_pos = y; 
}

void Triangle::setY3(float y){
    y3_pos = y;    
}

// Utility Methods
void Triangle::draw() const {
    cout << std::fixed;
    cout << std::setprecision(2);
    
    cout << "triangle: " << name << " "
         << " " << x_centre << " " << y_centre
         << " " << x1_pos << " " << y1_pos
         << " " << x2_pos << " " << y2_pos
         << " " << x3_pos << " " << y3_pos
         << " " << computeArea() << endl;
}

float Triangle::computeArea() const {
   return (abs(x1_pos*y2_pos - x1_pos*y3_pos - x2_pos*y1_pos + x2_pos*y3_pos - x3_pos*y2_pos
           + x3_pos*y1_pos)/2);
}

Shape* Triangle::clone() const{
    return (new Triangle(*this));
}