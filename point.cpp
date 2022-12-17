#include <iostream>
#include "point.h"
#include <cmath>

using namespace std;

//Implements Point's methods as described in the point.h header file
void Point :: print(void){
    cout <<"x: "<<this->x << " y: " <<this->y << " z: " <<this->z << endl;
}

double Point :: length(){
    return sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2));
}

Point Point :: operator- (Point& p){
    return Point(this->x - p.x, this->y - p.y, this->z - p.z);
}