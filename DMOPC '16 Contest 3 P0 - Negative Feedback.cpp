#include <iostream>
using namespace std;
int main()
{
	
  double vin, rf, rg;
  double output;

  cin >> vin >> rf >> rg;

  output = vin * (1 + (rf/rg));

  cout << output << endl;

  return 0;
}
