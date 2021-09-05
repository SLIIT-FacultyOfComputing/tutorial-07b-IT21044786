#include "Item.h"
#include <iostream>
using namespace std;
Item::Item()
{
itemCode=0;
unitPrice=0;
discount=0;
}
Item::Item(int Item_code,float punitPrice,float pdiscount)
{
  itemCode=Item_code;
  unitPrice=punitPrice;
  discount=pdiscount;
}

// 4. Implement Default Constructor Implementation
// 5. Implement Overloaded Constructor Implementation
// 6. Implement Destructor (display "Destructor Called")

void Item::setDiscount(float pdiscount) {
  discount = pdiscount;
}

float Item::getDiscount() {
  return discount;
}

float Item::discountedPrice() {
   return unitPrice - unitPrice * discount/100;
}

void Item::display() {
  cout << "Item : " << itemCode << endl;
  cout << "Discounted Price " << discountedPrice() << endl;
}
Item::~Item()
{
  cout<<"Distructor called"<<endl;
}