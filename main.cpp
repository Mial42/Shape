//Necessary includes - shape, shape subclasses, and point
#include "shape.h"
#include "point.h"
#include "sphere.h"
#include "box.h"
#include "cone.h"
#include <iostream>

using namespace std;

//prints the type, color, location, and volume of each shape in a list of shapes
void print_objs (Shape *list){
   cout << "Objects: " << endl << endl;

   //Loop through every shape in the list
   while(list != NULL){

      //Print type, color, location, and volume
      list->print_type();
      list->print_color();
      cout << endl;
      list->print_loc();
      cout << "Volume: " << list->compute_volume() << endl << endl;

      //Move the loop to the next shape in the list
      list = list->next;
   }
}

void read_objs (Shape **list){
   Shape *node;         // variable used to create a new node each time through the loop
   double x, y, z, xx, yy, zz, rad, length, width, height; // temporary variables used to read in values; fill in the rest
   string type;// ...     // temporary variables used to read in values; fill in the rest
   string color, color2; //Temporary variables to read in color values
   *list = NULL;

   while (cin >> type) {

      if (type.compare ("sphere") == 0) {

         // fill in code here to read in the sphere values and create a new node
         cin >> x >> y >> z >> rad >> color;
         node = new Sphere(type, color, Point(x,y,z), rad);
      }

      else if (type.compare ("box") == 0) {

         // fill in code here to read in the box values and create a new node
         cin >> length >> width >> height >> x >> y >> z >> color >> color2;
         node = new Box(type, color, color2, length, width, height, Point(x,y,z));

      }
   
      else if (type.compare ("cone") == 0) {

         cin >> x >> y >> z >> xx >> yy >> zz >> rad >> color >> color2;

         node = new Cone (type, color, color2, Point (x, y, z), Point (xx, yy, zz), rad);
      }

      // link new node at front of list:
      //   set the next field of node to the beginning of the list (*list)
      //   set the beginning of the list to node
      node->next = *list;
      *list = node;
   }
}

//Main function that reads the list of objects, prints their information, and returns allocated memory
int main (){
 Shape *list;
 read_objs (&list);
 print_objs (list);

 // add loop here to return any allocated space to the system
 //All of the shapes instantiated with the "new" keyword need to be deallocated
//Loop through every shape in the list
while(list != NULL){
   //Create a temporary alias for the node currently being examined so it can be deleted
   Shape *temp = list;

   //Move the loop to the next shape in the list
   list = list->next;

   //Delete the node
   delete(temp);
}
 return (0);
}

