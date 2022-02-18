#include <iostream>
using namespace std;

int main()
{
	int sum (int n);
	int L, D, X;

	cin >> L >> D >> X;

	for(int i = L; i <= D; i++)

		if( sum(i) == X){
			cout << i << endl;

			break;}

	for(int i = D; i >= L; i--)

		if( sum(i) == X){
			cout << i << endl;

			break;}
	
		return 0;}

	int sum (int n)
	{
	
		int out = 0;

		while (n > 0){

		out = out + n%10;
		n = n/10;}

	return out;
}
