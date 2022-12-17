#include <string>
#include <iostream>
#include "sphere.h"
#include "shape.h"

using namespace std;

//Calls shape constructor and sets fields not set by the shape constructor
Sphere :: Sphere (string type, string color, Point center, double radius) 
    : Shape(type, color, center){
        this->center = center;
        this->radius = radius;
    }

//Computes the volume of a sphere
double Sphere :: compute_volume(void){
    return 4.0/3.0 * 3.14159 * this->radius * this->radius * this->radius;
}