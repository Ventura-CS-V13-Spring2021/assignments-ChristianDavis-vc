#include <iostream>
using namespace std;
int main()
{
	char  selection;
	cout << "Enter your choice among A, B, C\n";
	cin >> selection;
	// if (selection == 'A' || selection == 'a')
	// 	cout << "Your choice is A\n";
    // else if (selection == 'B' || selection == 'b')
    //     cout << "Your choice is B\n";
    // else if (selection == 'C' || selection == 'c')
    //      cout << "Your choice is C\n";
	// else
	// 	cout << "Not good choice\n";
	// 	return 0;

// switch (main)
switch (selection)
{
//   case 1:
  case 'a':
  case 'A':
    cout << "your choice is A";
    break;
//  case 2: 
  case 'b':
  case 'B':
    cout << "your choice is B";
    break;
//  case 3: 
  case 'c':
  case 'C':
    cout << "your choice is C";
    break;
  default:
    cout << "unknown choice";
 }

return 0;
}


