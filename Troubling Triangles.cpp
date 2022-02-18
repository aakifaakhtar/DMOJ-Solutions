#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>
using namespace std;

int main() {

double n;
double s;
double input_counter = 0;
double x1, y1;
double x2, y2;
double x3, y3;
double d1, d2, d3;
double area, perimeter;

cin >> n;

	while (input_counter < n) {

		cin >> x1;
		cin >> y1;

		cin >> x2;
		cin >> y2;

		cin >> x3;
		cin >> y3;

    d1 = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    d2 = sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
    d3 = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));

		perimeter = d1 + d2 + d3;

    s = (d1 + d2 + d3)/2;

    area = sqrt(s*(s-d1)*(s-d2)*(s-d3));

    cout << setprecision(3) << area << " " << perimeter << endl;
	 
		input_counter = input_counter + 1;
	}

return 0;
}
