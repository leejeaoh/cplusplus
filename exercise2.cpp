#include <iostream>

using namespace std;

float convertFurlongToYards (float x) {
    return x * 220;
}

int main() {
    float furlongs = 0;
    cout << "Input distance in furlongs to convert to yards :";
    cin >> furlongs;
    cout << "The value of " << furlongs << " furlongs to yard is " << convertFurlongToYards(furlongs) << " yards" << endl;
    return 0;
}