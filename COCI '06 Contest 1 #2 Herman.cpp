#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>
using namespace std;
int main() {

	double r, euclidianarea, taxicabarea;

	cin >> r;

	euclidianarea = M_PI*r*r;

	taxicabarea = M_PI*pow(r,2)/(M_PI/2.000000000000000); 

	cout << setprecision (6) << fixed << endl;

	cout << euclidianarea << endl << taxicabarea << endl;
	
	return 0;
}
