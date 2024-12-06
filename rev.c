#include <stdio.h>

reverse() {
  int n, reverse = 0, remainder, original;

  printf("\nEnter an integer: ");
  scanf("%d", &n);

  original = n;  

  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  if (original % 10 == 0) {
    printf("Reversed number = %d", reverse);
    
    while (original % 10 == 0) {
      printf("0");
      original /= 10;
    }
  } else {
    printf("Reversed number = %d", reverse);
  }

 // return 0;
}
