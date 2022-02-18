#include <iostream>
using namespace std;
int main() {
int input_counter=0;
int n;
int max_iterations=1000000;
int count=0;

//cout << "Please enter a number: "<<endl;
cin >> n;

while (n != 1 && input_counter <= max_iterations) {
if (n % 2 == 0)
{n = n/2;
count = count + 1;}

else
    if (n % 2 == 1)
    {n = (n*3) + 1;
	count = count + 1;}

input_counter = input_counter + 1;
}

cout<<count<<endl;

return 0;
}
