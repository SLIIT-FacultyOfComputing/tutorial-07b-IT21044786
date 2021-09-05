#include "Rectangle.h"
#include "Circle.h"
#include <iostream>
using namespace std;

int main() {
  // ========= DO NOT CHANGE THE INPUT CODE BELOW ==================
   int length, width, radius;
   cout << "Enter length of Rectangle : ";
   cin >> length;
   cout << "Enter width of Rectangle : ";
   cin >> width;
   cout << "Enter radius of Circle : ";
   cin >> radius;
   // ======== DO NOT CHANGE THE CODE GIVEN ABOVE ====================
   
   // 1. Create a dynamic Rectangle type variable (pointer)
   // 2. Create a dynamic Rectangle Object set the length and width that was input from the keyboard
   // 3. Create a dynamic Circle type variable (pointer)
   // 4. Create a dynamic Circle Object set radius that was input from the keyboard
   // 5. Call the display method of the Rectangle Object
   // 6. Call the display method of the Circle Object
   // 7. Delete the Rectangle Object from memory
   // 8. Delete the Circle Object from memory
  
  Rectangle* rec3;
	
	rec3 = new Rectangle();

	rec3->inputRecDetails(length,width);
	

	Circle* cir3;

	cir3 = new Circle();

	cir3->setradius(radius);
	cout << " Rectangle Area is:" << rec3->calcArea()<<endl;
	cout << " Circle Area is:" << cir3->calcArea()<<endl;

	delete rec3;
	delete cir3;

   // ============ DO NOT CHANGE THE CODE BELOW ===================
   cout << "End of Program" << endl;
  
}
