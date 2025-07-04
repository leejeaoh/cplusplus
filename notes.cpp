// Notes for the C++
#include <iostream>

int main() {
    int width {5}; //defines variable width and initializes to 5
    std::cout << width << std::endl;
    return 0;
}

/* Learning about form of initialization
There are 5 common forms of initialization:
default-initialization (no initializer) */
int a;
/*leaves variable with an indeterminate value 
  (value that is not predictable, aka garbage value)
*/

//traditional initialization form
int b = 5; // copy initialization  
int c (6); // direct initialization 
//Modern initialization form
int d {5}; // direct list initialization
int e {}; // value initialization 

/* std::endl -> is buffered 
std::endl is inefficient as it actually does two things 
1) it outputs the newline
2) it also flushes the buffer (which is slow)

To output newline without flushing the buffer,
use the \n instead of std::endl;


also the std::cin is buffered as well
1) Individual char that user entered as inputs are added to end 
of input buffer (inside std::cin). The enter key pressed to submit
the data also gets stored as \n char
2)extraction operator >> removes char from the front of the input
buffer and converts them into a value that is assigned to the
associated variable. 
*/

int main() {
    std::cout << "enter two numbers : ";

    int x{};
    std::cin >> x;

    int y{};
    std::cin >> y;

    std::cout << "You have entered" << x << ", " << y << '\n';
    return 0;
}



