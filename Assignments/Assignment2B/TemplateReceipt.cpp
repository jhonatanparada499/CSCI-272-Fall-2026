// TemplateReceipt.cpp
#include <cstdio>

template<typename T>
T receiptTotal(T amount,
               T taxPercent,
               T discountPercent,
               T tipPercent){

  return ((amount + taxPercent)
      - discountPercent) 
      + tipPercent;
}

int main() {
  printf("Final Total: %.2f\n",
         receiptTotal(100.0, 
                      8.875,
                      10.0,
                      15.0)
        );
  return 0;
}
