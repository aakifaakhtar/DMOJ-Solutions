#include <iostream>
using namespace std;

unsigned long long n, i;
unsigned int output;

int main()
{
    int input;

    cin >> input;

    while (input--)
    {
        cin >> n;

        if (n >= 34)
         cout << "0" << endl;

        else
        {
          output = 1;

            for (i = 1; i <= n; i++)
            {
                output = output* i;
            }

           cout << output << endl;
        }
    }

    return 0;
}
