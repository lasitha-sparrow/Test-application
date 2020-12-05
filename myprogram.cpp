#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    
   int bags[3] ={4,2,1};
   int Bags[3];
   long x;
   cout << "Input value: "; // Type a numarical value press enter
   cin >> x; // Get user input 
   cout << "entered value is is: " << x;
   // checks if the input which doesn’t end it’s decimal point other than 0.5
    if (number > 0) {
        cout << "You entered a positive integer: " << number << endl;
    }




 for (int i = 0; i < 3; ++i) {
    
     Bags[i] = value/bags[i];
     value = value%bags[i];
 }
   // Print the results
   for (int i = 0; i < 3; ++i) {
        cout << Bags[i] << "  ";
    }

}