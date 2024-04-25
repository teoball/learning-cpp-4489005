// Learning C++ 
// Exercise 01_02
// Hello World, by Eduardo Corpeño 
#include <iostream>
#include <string>

int main () {
    std::cout << "Hei! Hva heter du?" << std::endl;
    std::string str;
    std::cin >> str;
   
    std::cout << std::endl << std::endl;
    std::cout << "Hei " << str << "!" << std::endl;
    std::cout << std::endl << std::endl;
    return(0);
}