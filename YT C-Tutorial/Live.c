/*
#include <stdio.h>
 void main()
 {
    printf("includehelp.com\rOK\n");
    printf("includehelp.com\b\b\bOk\n");
 }
*/

/*
#include <stdio.h>
 void main(){
    unsigned char c=290;
    printf("%d",c);
 }
*/

/*
#include <stdio.h>
 int main()
 {
    int ok=-100;
    -100;
    printf("%d",ok);
    return 0;
}
*/

/*
#include <stdio.h>
void main() {
   int x = 5;
   if (x = 1) {
      printf("%d", x);
   }
   else {
      printf("%d", x);
   }
}
*/

/*
#include <stdio.h>
void main() {
   int x = 5;
   if (x < 1)
      printf("hello");
   if (x == 5)
      printf("hi");
   else
      printf("no");
}
*/


#include <stdio.h>
void main() {

   float a = (10 + 20 * 30);
   printf("10 + 20 * 30 = %.2f\n", a);

   float b = (100 / 10 * 100);
   printf("100 / 10 * 100 = %.2f\n", b);

   float c = (5 * 4 / 4 % 3);
   printf("5 * 4 / 4 % 3 = %.2f\n", c);

   float d = (100 + 200 / 10 - 3 * 10);
   printf("100 + 200 / 10 - 3 * 10 = %.2f\n", d);

   float e = ((10 - 4) + (20 / (2 * 5)) * 3);
   printf("(10 - 4) + (20 / (2 * 5)) * 3 = %.2f\n", e);

   float f = ((3 + 8) % 35 - 28 / 7);
   printf("(3 + 8) % 35 - 28 / 7 = %.2f\n", f);

}