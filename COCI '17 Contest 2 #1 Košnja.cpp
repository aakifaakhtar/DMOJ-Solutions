#include <iostream>
using namespace std;
int main(){

	int K, N, M;

	cin >> K;

	for (int i=0; i<K; i++){

		cin >>N >> M;
			cout << (min(N,M)-1)*2 << endl;
	}
  
	return 0;
}
