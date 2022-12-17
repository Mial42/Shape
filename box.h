#ifndef BOX_H
#define BOX_H

#include <string>
#include "shape.h"
#include "point.h"

class Box : public Shape {
    private:
        double length;
        double width;
        double height;
        string tbcolor;
    
    public:
        Box (string type, string color, string tbcolor, double length, 
            double width, double height, Point loc);
              
        void print_color (void);

        double compute_volume (void);

};

#endif