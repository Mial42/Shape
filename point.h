
#ifndef POINT_H
#define POINT_H


class Point {
    private:
        //x, y, z coordinates for a point in 3D space
        double x, y, z;
    public:
        //Default constructor
        Point () {}

        //Sets this point's data
        inline void set (double x, double y, double z){ this->x = x; this->y = y; this ->z = z;}

        //Constructor with this point's data
        Point (double x, double y, double z) { set (x, y, z); }

        //computes and returns the length of a point vector: sqrt (x^2 + y^2 + z^2)
        double length ();

        //overloaded operator to compute *this – p
        Point operator- (Point& p);

        //prints the Point as shown in the output
        void print (void);
};

#endif