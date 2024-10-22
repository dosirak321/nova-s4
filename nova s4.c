#include <stdio.h>

int main() {
  char a[3] = {1, 2, 3};
  char b[2] = {3, 4};
  char c[50];
  for(int i=0; i<2; i++) {
    for(int k=0; k<3; k++) {
      if (a[k] == b[i]) {
        c[i] = b[i];
      }
    }
  }
  for (int p=0; p<50; p++) {
    if (c[p] == 0) {
      break;
    }
    printf("%d ", c[p]);
  }
  return 0;
}