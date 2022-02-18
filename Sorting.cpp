#include <iostream>
using namespace std;
#define MAX 100

int main()
{
	int Array[MAX];
	int n, i, j;
	int temp;

	cin >> n;
	
	for(i = 0; i < n; i++){
		cin >> Array[i];
	}
	
	for(i = 0; i < n; i++){

		for(j = i + 1; j < n; j++){

			if(Array[i] > Array[j]){

				temp = Array[i];
				Array[i] = Array[j];
				Array[j] = temp;
			}
		}
	}
	
	for(i = 0; i < n; i++)
		cout << Array[i] << endl;
	cout << endl;	
		
	return 0;
	
}
