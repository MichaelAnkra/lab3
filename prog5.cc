// @Name: Michael Ankrah
// @Date: 01/31/2024
// @lab number: lab3
// comment



#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
  


int main()
{
   double ctof;  // equivalent Celsius temperature
   double ftoc;  // equivalent Fahrenheit temperature.
 
   int fah = 56;  //declare and initialize at the same time - page 48
   int cel = 20;

   ctof = 1.8* cel + 32;
   ftoc =  (fah-32) * 0.55556;

   cout << cel << " degrees Celsius in Fahrenheit is " << ctof << endl;
   cout << fah << " degrees Fahrenheit in Celsius is " << ftoc << endl;
   cout << fixed << setprecision(1) ;
   return (EXIT_SUCCESS);
}
