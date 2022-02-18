#include <iostream>
#include <cmath>
using namespace std;

void PrimeFactorization(int n)
{
    while (n % 2 == 0)
    {
        cout << 2 << endl;
        n = n/2;
    }

    for (int i = 3; i <= sqrt((double)(n)); i = i + 2)
    {
        while (n % i == 0)
        {
            cout << i << endl;
            n = n/i;
        }
    }
 
    if (n > 2)
        cout << n << endl;
}
 
int main()
{
    int n;

	cin >> n;

    PrimeFactorization(n);

    return 0;
}
