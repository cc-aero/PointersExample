#include <iostream>

void main() {
    double maximumNumber = 4;
    double* pointer = &maximumNumber;

    std::cout << "Values byRef and byVal" << std::endl
              << "In C++, Variables can be accessed both by their given references or by their memory location." << std::endl
              << "A pointer is a variable that stores the memory location of another variable." << std::endl
              << "In this example, I have the double maximumNumber, whose value is " << maximumNumber << ". Its memory location,"
                <<std::endl << pointer << ", is stored by the variable 'pointer'." << std::endl;


    char a;
    std::cin >> a;

}
