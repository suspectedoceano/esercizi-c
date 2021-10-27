#include <stdio.h>

#define true 1
#define false 0
#define LEN 30

int main()
{
  int c, length, highest;
  int counts[LEN];
  highest = 0;
  
  //zero the array
  for (int i = 0; i < LEN; i++) counts[i] = 0;
  
  //build count array
  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      if (length) {
        // printf("Increasing %d by one\n", length);
        counts[length]++;
        if (highest < counts[length]) highest = counts[length];
        length = 0;
      }
    } else {
      length++;
    }
  }
  
  //print histogram
  for (int i = highest; i >= 0; i--) {
    putchar('\n');
    for (int j = 0; j < LEN; j++) {
      // printf("Length: %d, count: %d\n", j, counts[j]);
      if (counts[j] >= i) {
        if (i)
          putchar('#');
        else
          putchar('=');
      } else {
        putchar(' ');
      }
    }
  }
  putchar('\n');
}
