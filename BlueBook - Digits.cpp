#include <iostream>
#include <cmath>
using namespace std;

int main(){

  int input;
  int n;
  int numofdigits;
  int input_counter = 0;

  cin >> input;

    while (input_counter < input){

    cin >> n;

    n = abs(n);

    numofdigits = abs((log10(n) + 1));

    input_counter = input_counter + 1;

    if (n == 0)
      cout << "1" << endl;

    else
      cout << numofdigits << endl;

}
  return 0;
}
