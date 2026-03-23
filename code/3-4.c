#include <stdio.h>
#include <stdarg.h>

int max_of(int count,...) {
  va_list args;
  va_start(args, count);
  int max = 0;
  for(int i = 0; i < count; i++){
    int cur = va_arg(args, int);
    if(cur > max){
      max = cur;
    }
  }
  va_end(args);
  return max;
}

int mian() {
  printf("%d\n", max_of(4, 5, 12, 3, 9));
  printf("%d\n", max_of(6, 1, 2, 3, 4, 5, 6));
  printf("%d\n", max_of(3, 100, 200, 300));
  return 0;
}
