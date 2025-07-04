#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int carrot = 25;
    cout << "I have " << carrot << " carrots." << endl;
    carrot = carrot - 1;
    cout << "Ate one! Now i have " << carrot << " carrots left!" << endl;

    return 0;
}