// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstdint>

#define CAPACITY 5000
#define DEBUG
int main(){
    int32_t large = CAPACITY;
    uint8_t small =37;
#ifdef DEBUG
std::cout << "Regner dette ut " << std::endl;
#endif
    large += small; //large = large + small;
    std::cout << "Det store tallet er " << large << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
