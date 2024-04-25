// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

int main(){
    auto a = 8;
    auto b = 12345678901;
    auto c = 3.14f;
    auto d = 3.14;
    auto e = true;
    auto f = 'd';
    auto g = "Torbein er kool!";

    std::cout << "Denne typen er " << typeid(a).name() << std::endl;
    std::cout << "Denne typen er " << typeid(b).name() << std::endl;
    std::cout << "Denne typen er " << typeid(c).name() << std::endl;
    std::cout << "Denne typen er " << typeid(d).name() << std::endl;
    std::cout << "Denne typen er " << typeid(e).name() << std::endl;
    std::cout << "Denne typen er " << typeid(f).name() << std::endl;
    std::cout << "Denne typen er " << typeid(g).name() << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
