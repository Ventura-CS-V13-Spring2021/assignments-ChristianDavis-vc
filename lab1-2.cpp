#include <iostream>
using namespace std;

int main()
{
  double Celsius, Fahrenheit;

  cout << "Enter the temperature by Celsius\n";
  cin >> Celsius;
  
Fahrenheit = 9/5.0 * Celsius +32;

cout << "Celsius " << Celsius << " is " << Fahrenheit << " Fahrenheit \n";

return 0;
}

