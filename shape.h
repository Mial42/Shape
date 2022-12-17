#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include "point.h"

using namespace std;

class Shape {
    private:
        //The shape's location and type are private
        Point loc;
        string type;

    protected: 
        //The shape's color can only be accessed by shape and subclasses of shape
        string color;

    public:
        //Pointer to the next shape in a linked list
        Shape *next;

        //Constructor; sets fields to specified parameters
        Shape (string type, string color, Point loc);

        //Prints the color, can be overridden
        virtual void print_color (void);

        //Computes the volume, must be overridden
        virtual double compute_volume (void) =0;

        //Prints the type
        void print_type (void);
        
        //Prints the location
        void print_loc (void);
};

#endif