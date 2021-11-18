#include <iostream>
 
// Function declaration
void func(void);
 
static int count = 10; 
 
 int main() {
   while(count--) {
      func();
   }
   
   return 0;
}

// Function definition
void func( void ) {
   static int i = 5;
   i++;
   std::cout << "i is " << i ;
   std::cout << " and count is " << count << std::endl;
}