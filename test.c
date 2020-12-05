#include <stdio.h>
#include <math.h>
int main() {

   int bags[3] ={4,2,1};
   int Bags[3];
   float x;
   printf( "Type a number: "); // Type a number and press enter
   scanf("%f",&x);// Get user input from the keyboard
   printf("Entered order is: %.2f ",x);

    x =round(x);
    printf("pp number is: %.2f ",x);
    int value=(int)x;
 for (int i = 0; i < 3; ++i) {

     Bags[i] = value/bags[i];
     value = value%bags[i];
 }
   // Print the results
   for (int i = 0; i < 3; ++i) {
        printf("\n %d Kg bags: %d ",bags[i],Bags[i]);
    }

}
