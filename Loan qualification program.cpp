/*
Author:Raymond Doka
Reg No:CT101/G/26549/25
Description:Program for computing surface area and volume of a cylinder
*/
#include <iostream>
using namespace std;

// Function to check loan qualification
bool qualifiesForLoan(int age, float income) {
    return (age >= 21 && income >= 21000);
}

// Main function
int main() {
    int age;
    float income;

    // Get input
    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your annual income (in KES): ";
    cin >> income;

    // Use function to determine qualification
    if (qualifiesForLoan(age, income)) {
        cout << "Congratulations, you qualify for a loan." << endl;
    } else {
        cout << "Unfortunately, we are unable to offer you a loan at this time." << endl;
    }

    return 0;
}

```
