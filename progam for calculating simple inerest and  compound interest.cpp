
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float principal, rate, time, simpleInterest, compoundAmount, compoundInterest;
    int n;

    cout << "Enter principal amount: ";
    cin >> principal

    cout << "Enter rate of interest: ";
    cin >> rate;

    cout << "Enter time (in years): ";
    cin >> time;

    cout << "Enter number of times interest is compounded per year: ";
    cin >> n;

    simpleInterest = (principal * rate * time) / 100;
    compoundAmount = principal * pow(1 + rate / (100 * n), n * time);
    compoundInterest = compoundAmount - principal;

    cout << "Simple Interest = " << simpleInterest << endl;
    cout << "Compound Interest = " << compoundInterest << endl;

    return 0;
}