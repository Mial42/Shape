#include <string>
#include <iostream>
#include "shape.h"

using namespace std;

//Shape constructor sets fields to parameters. next is NULL by default.
Shape :: Shape (string type, string color, Point loc){
    this->type = type;
    this->color = color;
    this-> loc = loc;
    this->next = NULL;
}

//Methods work as described in header
void Shape :: print_color(void){
    cout << "Color: " << this->color;
}

void Shape :: print_type(void){
    cout << "Name: " << this->type << endl;
}

void Shape :: print_loc(void){
    cout << "Location: ";
    this->loc.print();
}