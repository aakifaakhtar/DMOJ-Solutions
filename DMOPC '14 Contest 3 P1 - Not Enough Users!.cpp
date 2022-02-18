#include <iostream>
using namespace std;

int main() {

    int N, K ,D;

    cin >> N;
    cin >> K;
    cin >> D;
    
    for (int x = 0; x < D; x++) {
        N *= K;
    }

    cout << N << endl;;

    return 0; 
}
