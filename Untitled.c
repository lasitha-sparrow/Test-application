#include <stdio.h>

int main() {
    
   int bags[3] ={4,2,1};
   int Bags[3];
   int value,A,B,C;
   int x;
   
   scanf("%d",&value);
   
 for (int i = 0; i < 3; ++i) {
    
     Bags[i] = value/bags[i];
     value = value%bags[i];
 }
   // Print the results
   for (int i = 0; i < 3; ++i) {
        cout << Bags[i] << "  ";
    }

}