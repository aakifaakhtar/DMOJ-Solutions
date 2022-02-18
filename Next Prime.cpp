#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main() {

	int n;
	bool prime;

	cin >> n;

	  if (n == 1) {
		  cout << 2;

		  return 0;
	}
	    while (1) {
	    	prime = true;

		      for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
			      
            	prime = false;
			    }
		  }

		if (prime == true) {
			  cout << n;
        
			break;
		}

		n = n + 1;
	}
	return 0;
}
