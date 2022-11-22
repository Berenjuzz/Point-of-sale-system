#include <stdio.h>
/**
* @author Berenjuzz
*/
int main()
{
  int quantity = 2;
  int price = 260;
  int amount = 1000;
  int VAT = 16;
  int percentage = 100;
  int totalPrice;
  double changeReturn;
  double x;
  double y;
  
  x = percentage + VAT;
  y = x / percentage;
  
  totalPrice = price * quantity;
  double priceAfterVAT = totalPrice * y;
  
  changeReturn = amount - priceAfterVAT;
  
  printf("%5.1f", changeReturn);
}