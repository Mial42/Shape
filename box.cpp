#include <string>
#include <iostream>
#include "box.h"
#include "shape.h"

using namespace std;

//Calls shape constructor and sets fields not set by the shape constructor
Box :: Box(string type, string color, string tbcolor, double length, 
            double width, double height, Point loc) : Shape (type, color, loc){
                this->tbcolor = tbcolor;
                this->length = length;
                this->width = width;
                this->height = height;
            }

//Computes volume for a box
double Box :: compute_volume(void){
    return this->length * this->width * this->height;
}

//Prints the color and top/base color as outlined in the output file
void Box :: print_color (void){
    cout << "Color: " << this->color << "   Top/Base Color: " << this->tbcolor;
}