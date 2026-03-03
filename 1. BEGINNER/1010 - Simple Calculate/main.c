#include <stdio.h>

typedef struct t_Product{
  char code[2];
  int unitQuantity;
  double unitPrice;
} Product;

double ValueToPayPerProduct(Product p){
  return p.unitQuantity*p.unitPrice;
}

int main(){
  Product product[2];
  double payingTotal = 0;
  for(int i = 0; i < 2; i++){
    scanf("%s", &product[i].code);
    scanf("%d", &product[i].unitQuantity);
    scanf("%lf", &product[i].unitPrice);
    payingTotal += ValueToPayPerProduct(product[i]);
  }

  printf("VALOR A PAGAR: R$ %.2f\n", payingTotal);
  return 0;
}
