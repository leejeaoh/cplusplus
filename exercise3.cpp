#include <iostream>

using namespace std;

int ageToMonth(int x) {
    return x * 12;
}

int main() {
    int age = 0;
    cout << "Enter your age:";
    cin >> age;

    cout << "Your age in months is " << ageToMonth(age) << endl;
    return 0;
}