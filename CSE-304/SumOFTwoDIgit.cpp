#include <iostream>
using namespace std;

int sumOfDigits(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    int result = sumOfDigits(num1, num2);
    cout << "Sum of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
