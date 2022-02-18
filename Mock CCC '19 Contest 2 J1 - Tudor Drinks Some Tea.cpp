#include <iostream>
using namespace std;
int main() {

	char check1, check2, check3, check4, check5;
	int pearlcounter = 0;

	cin >> check1 >> check2 >> check3 >> check4 >> check5;

	if (check1 == 'P')
		pearlcounter = pearlcounter + 1;
	else
		if (check1 == 'T')
			pearlcounter = pearlcounter;


	if (check2 == 'P')
		pearlcounter = pearlcounter + 1;
	else
		if (check2 == 'T')
			pearlcounter = pearlcounter;


	if (check3 == 'P')
		pearlcounter = pearlcounter + 1;
	else
		if (check3 == 'T')
			pearlcounter = pearlcounter;


	if (check4 == 'P')
		pearlcounter = pearlcounter + 1;
	else
		if (check4 == 'T')
			pearlcounter = pearlcounter;


	if (check5 == 'P')
		pearlcounter = pearlcounter + 1;
	else
		if (check5 == 'T')
			pearlcounter = pearlcounter;

	cout << pearlcounter << endl;
	

	return 0;
}
