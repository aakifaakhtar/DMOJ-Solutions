#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int a;
	int n[a];

    cin >> a;

    for (int i = 0; i < a; i++){
        cin >> n[i];
    }

    sort(n, n + a);

    for(int i = 0; i < a; i++)
       cout << n[i] << endl;

    return 0;
}
