#include <iostream>
using namespace std;

int main() {
    int num, factorial = 1;
    
    cout << "Enter a number to calculate its factorial: ";
    cin >> num;
    
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        do {
            factorial *= num;
            num--;
        } while (num > 0);
        
        cout << "The factorial is: " << factorial << endl;
    }
    
    return 0;
}
