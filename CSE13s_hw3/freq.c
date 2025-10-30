/* Getting the frequency of leading digits */

#include <stdio.h>
#include <stdlib.h>

int getMSDigit(int x) {
   /* TODO: extract the leading digit of integer x and return it */
   if (x == 0) {
      return 0;
   }
   x = abs(x);
   while (x > 9) {
      x /= 10;
   }
   return x;
}

int main() {
   /* TODO: 
    * Read input from the stdin till EOF
    * For each integer, obtain the leading digit
    * Calculate the frequencies of the leading digits
    * Print the frequencies on stdout */
    int read;
    int lead;
    int nums[10] = {0};
    while (scanf("%d", &read) == 1) {
      lead = getMSDigit(read);
      nums[lead] += 1;
    }
    
    for (int j = 0; j < 10; j++) {
      printf("%d:%d ", j, nums[j]);
    }
    printf("\n");
    return 0;
}
