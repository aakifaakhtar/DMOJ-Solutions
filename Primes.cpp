#include <iostream>
using namespace std;

int main()
{
	int primenum[25] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    int n;

    cin >> n;

	for (int index = 0; index <= n - 1; index++) {

	cout << primenum[index] << endl;

	}

    return 0;
}
