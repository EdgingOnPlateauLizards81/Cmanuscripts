#include <stdio.h>

int main() {
    int a = 3, b = 4, c = 7, d = 2, e = -2;
    int express;
   
   express = (a*b) + (b/d) - (--e) + (++c);
   printf("express = %d\n", express);
   
   return 0;
}