#include <iostream>
#include <omp.h>

int main() {
    int inicio = 50000;
    int fin = 100000;

    #pragma omp parallel for
    for (int i = inicio; i <= fin; i++) {
        if (i % 2 == 0) {
            #pragma omp critical
            std::cout << i << std::endl;
        }
    }

    return 0;
}
