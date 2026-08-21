#include <iostream>

int main() {
    const int row = 5;
    int i = 0;

    do {
        int k = 0;
        do {
            std::cout << "*";
            k++;
        } while (k < i + 1);

        std::cout << "\n";
        i++;
    } while (i < row);

    return 0;
}