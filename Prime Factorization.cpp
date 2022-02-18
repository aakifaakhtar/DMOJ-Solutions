#include <iostream>
#include <cmath>
using namespace std; 

void PrimeFactorization(int n);

int main(){

    int n;
    int a = 1;
    int b;

    cin >> b;

    while (a <= b){

      cin >> n;

      PrimeFactorization(n);

      a = a + 1;

    }

  return 0;
}

  void PrimeFactorization (int a) {
 
  while (a % 2 == 0){
 
     cout << "2 ";
     a = a/2;
  }
 
  for (int i = 3; i <= sqrt(a); i = i + 2){

     while (a % i == 0){
        cout << i <<" ";
        a = a/i;
     }
  }

  if (a > 2)
  cout << a << "\t";
 
  cout << endl;
 }
