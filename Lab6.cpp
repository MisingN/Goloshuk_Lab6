#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    int* ptrA = &a;
    int* ptrB = &b;

    int sum = *ptrA + *ptrB;
    int diff = *ptrA - *ptrB;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;

    return 0;
}
