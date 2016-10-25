/* usage:
 * g++ fizzbuzz.cpp
 * ./a.out
 */

#include <iostream>
using namespace std;


void fizzbuzz () {
   for (int i = 1; i <= 100; i++){
       if      (i%3 == 0 && i%5 == 0) cout << "FizzBuzz";
       else if (i%3 == 0)             cout << "Fizz";
       else if (i%5 == 0)             cout << "Buzz";
       else                           cout << i;
       cout << endl;
   }
}


int main(){
    fizzbuzz ();   
    return 0;
}
