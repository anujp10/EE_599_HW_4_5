#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution;
    std::vector <int> input = {1, 87, 2, 0, -8,  34};
    solution.HeapSort(input);
    for (auto &n : input) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return EXIT_SUCCESS;
}