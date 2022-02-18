#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    string Keys;
    
    int counter1, counter2, counter3, counter4, counter5, counter6, counter7, counter8;
    counter1 = 0;
    counter2 = 0;
    counter3 = 0;
    counter4 = 0;
    counter5 = 0;
    counter6 = 0;
    counter7 = 0;
    counter8 = 0;
    char input;

    cin >> Keys;

    for (int i = 0; i < Keys.length(); i++){
      input = Keys[i];

    switch(input) {
        case ' ': case '1': case 'Q': case 'A': case 'Z':
        counter1 = counter1 + 1;
        break;
        case '2': case 'W': case 'S': case 'X':
        counter2 = counter2 + 1;
        break;
        case '3': case 'E': case 'D': case 'C':
        counter3 = counter3 + 1;
        break;
        case '4': case 'R': case 'F': case 'V': case '5': case 'T': case 'G': case 'B':
        counter4 = counter4 + 1;
        break;
        case '6': case 'Y': case 'H': case 'N': case '7': case 'U': case 'J': case 'M':
        counter5 = counter5 + 1;
        break;
        case '8': case 'I': case 'K': case ',':
        counter6 = counter6 + 1;
        break;
        case '9': case 'O': case 'L': case '.':
        counter7 = counter7 + 1;
        break;
        case '0': case '-': case '=': case 'P': case '[': case ']': case ';': case char(39): case '/':
        counter8 = counter8 + 1;
      }
    }

    cout << counter1 << endl;
    cout << counter2 << endl;
    cout << counter3 << endl;
    cout << counter4 << endl;
    cout << counter5 << endl;
    cout << counter6 << endl;
    cout << counter7 << endl;
    cout << counter8 << endl;

    return 0;
}
