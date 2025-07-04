#include <iostream>

using namespace std;

void printQuestion() {
    string address, name;
    cout << "What is your address? " << endl;
    getline(cin, address);
    cout << "What is your name?" << endl;
    getline(cin, name);
    cout << "Address : " << address << endl;
    cout << "Your name is " << name << endl;
}
int main() {
    printQuestion();
    return 0;
}