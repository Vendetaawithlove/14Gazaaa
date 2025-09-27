#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   float j, t, v; 

  scanf("%f", &j); 

  scanf("%f", &t); 

  
  if (t != 0) {
    v = j / t;
    printf("%.3f\n", v); 
  } else {
    printf("Error: Pembagian Nol Dianggap Tidak Valid.\n");
  }

    return 0;
}
