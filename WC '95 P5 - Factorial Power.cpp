#include <iostream> 
#include <cmath>
using namespace std; 

int findNumofDigits(int n);

int main()
{ 

int n;
int count = 1;

  while (count <= 5){

    cin >> n;

    cout << "The length of " << n << "! is " << findNumofDigits(n) << endl;

    count = count + 1;
  }

return 0;
}

int findNumofDigits(int n){ 

    if (n < 0) 
        return 0; 

    if (n <= 1) 
        return 1; 
  
    double digits = 0; 

    for (int i = 2; i <= n; i++) 

        digits += log10(i); 
  
    return floor(digits) + 1; 
  }
