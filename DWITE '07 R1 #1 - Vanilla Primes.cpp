#include <iostream>
#include <cmath>
using namespace std;

int prime(int);

int main() {

    int num;

    cin >> num;

    if (prime(num))
        cout << "prime" << endl;
    else
        cout << "not" << endl;
    return 0;
  }

int prime(int num) {
    int prime = true;

    if (num == 0 || num == 1 || num <= 0) {
        prime = false;
    }
    else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                prime = false;

                break;
            }
        }
    }
    return prime;
}
