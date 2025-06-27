// C++ program to illustrate
// using range in switch case
#include <iostream>
using namespace std;
int main()
{
	char arr[20] ={"x","c"};

	for (int i = 0; i < 4; i++) {
		switch (arr[i]) {
			// defining range 1 to 6
		case 1 ... 6:
			cout << arr[i] << " in range 1 to 6\n";
			break;
			// range 19 to 20
		case 19 ... 20:
			cout << arr[i] << " in range 19 to 20\n";
			break;
		default:
			cout << arr[i] << " not in range\n";
			break;
		}
	}
	return 0;
}
