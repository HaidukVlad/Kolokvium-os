#include <iostream>
#include <vector>
#include <set>

std::vector<int> remove_duplicates(const std::vector<int>& input) {
    std::set<int> unique_elements(input.begin(), input.end());
    return std::vector<int>(unique_elements.begin(), unique_elements.end());
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 2, 1, 4};
    std::vector<int> unique_numbers = remove_duplicates(numbers);

    std::cout << "Уникальные числа: ";
    for (const auto& num : unique_numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
