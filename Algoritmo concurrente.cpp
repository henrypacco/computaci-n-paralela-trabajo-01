#include <iostream>

int main() {
    // Imprimir números pares entre 50000 y 100000
    for (int i = 50000; i <= 100000; i++) {
        if (i % 2 == 0) {
            std::cout << i << std::endl;
        }
    }
    return 0;
}

