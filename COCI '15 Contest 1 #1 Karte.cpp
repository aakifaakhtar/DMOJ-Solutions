#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main (){

int P = 13;
int K = 13; 
int H = 13; 
int T = 13;
int n = 0;

  string input;

  int b = 0;

  cin >> input;

  int length = input.length(), card[335], pauses = 0;

  for (int count = 0; count < 335; count++)
  {
    card[count] = 1;
  }

  for (int count2 = 0; count2 < length/3; count2++)

  // First switch/case statement

  {
    switch (input[b])
  {
    case 'P':
      P = P - 1;
      n = 100;
      break;

    case 'K':
      K = K - 1;
      n = 200;
      break;

    case 'H':
      H = H - 1;
      n = 300;
      break;

    case 'T':
      T = T-1;
      n = 400;
      break;

  // Second switch/case statement

  }
   switch (input[b+1])
  {
    case '1':
      n = n + 10;
      break;

    case '0':
      break;

  // Third switch/case statement

  }
    switch (input[b+2])
  {
    case '1':
      n = n + 1;
      break;

    case '2':
      n = n + 2;
      break;

    case '3':
      n = n + 3;
      break;

    case '4':
      n =n + 4;
      break;

    case '5':
      n = n + 5;
      break;

    case '6':
      n =n + 6;
      break;

    case '7':
      n = n + 7;
      break;

    case '8':
      n = n + 8;
      break;

    case '9':
      n = n + 9;
      break;

    case '0':
      break;
  }

for (int count3 = 0; count3 < 335; count3++)

{
  if (n == card[count3])
  {
    cout << "GRESKA" << endl;

    pauses = pauses + 1;
    break;
  }
}

if (pauses == 0)
{
  card[count2] = n;

}

  b = b + 3;
  n = 0;

  if (pauses == 1)
  break;
}

if (pauses == 0)

  cout << P << " " << K << " " << H << " " << T << endl;

return 0;
}
