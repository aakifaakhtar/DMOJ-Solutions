#include <iostream>
using namespace std;

int main(){
    
	int n;
	
	cin >> n;
	
	int points = 2;
	
	for (int input_counter = 0; input_counter < n; input_counter++) {
		points += points - 1;
    
	}
	
	cout << points * points << endl;
	
	return 0;
}
