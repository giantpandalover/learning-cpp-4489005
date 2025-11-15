// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string name;
    std::cout << "What is your name?";
    std::cin >> name;
    std::cout << name << " is a very interesting name!";

    std::cout << std::endl << std::endl;
    return (0);
}
