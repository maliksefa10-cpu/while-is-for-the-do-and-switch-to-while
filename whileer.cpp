#include <iostream>

int main() {
    int rows = 5;
    int i = rows;

    while (i >= 1) {

        int j = 1;
        while (j <= rows - i) {
            std::cout << " ";
            ++j;
        }


        int k = 1;
        while (k <= 2 * i - 1) {
            std::cout << "*";
            ++k;
        }

        std::cout << "\n";
        --i;
    }

    return 0;
}