#include <iostream>

int main(){

    int score;

    std::cout << "Enter your score: ";
    std::cin >> score;

    switch (score) {
        case 90 ... 100:
            std::cout << "Grade: A" << std::endl;
            break;
        case 80 ... 89:
            std::cout << "Grade: B" << std::endl;
            break;
        case 70 ... 79:
            std::cout << "Grade: C" << std::endl;
            break;
        case 60 ... 69:
            std::cout << "Grade: D" << std::endl;
            break;
        default:
            std::cout << "Grade: F" << std::endl;
    }
}