#include<iostream>
using namespace std;

int main ()
{
    int M, N, K;

    cin >> M >> N >> K;
    int numofteams = 0;

		while (M >= 2 && N >= 1 && M + N >= K+3)
    {
        numofteams++;
			M -= 2;
			N -= 1;
    }

    cout << numofteams << endl;

    return 0;
}
