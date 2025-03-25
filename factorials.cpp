#include <iostream>
#include <vector>
#include <stdexcept>

std::vector<unsigned long long> factorials(unsigned int n) {
    if (n == 0) {
        throw std::invalid_argument("n должно быть натуральным числом больше 0.");
    }

    std::vector<unsigned long long> result(n);
    result[0] = 1;
    for (unsigned int i = 1; i < n; ++i) {
        result[i] = result[i - 1] * i;
    }
    return result;
}

int main() {
    unsigned int n;
    std::cout << "Введите натуральное число n: ";
    std::cin >> n;

    try {
        std::vector<unsigned long long> fact_seq = factorials(n);
        std::cout << "Первые " << n << " факториалов: ";
        for (const auto& fact : fact_seq) {
            std::cout << fact << " ";
        }
        std::cout << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
    }

    return 0;
}
