// Item.h
#pragma once
class Item {
   private:
      int itemCode;
      float unitPrice;
      float discount; // out of 100 e.g. discount = 15
   public:
      Item();
      Item(int icode,float uPrice);
      ~Item();
      // 1. Write the Default Constructor
      // 2. Write the Overloaded Constructor
      // 3. Write the Destructor

      void setDiscount(float punitPrice);
      float getDiscount();
      float discountedPrice();
      void display();
};
