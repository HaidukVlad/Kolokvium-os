#include <gtest/gtest.h>
#include <vector>
#include <stdexcept>

// Предварительное объявление функций
std::vector<unsigned long long> factorials(unsigned int n);
std::vector<int> remove_duplicates(const std::vector<int>& input);

// Тесты для функции вычисления факториалов
TEST(FactorialTest, BasicTests) {
    EXPECT_EQ(factorials(1), (std::vector<unsigned long long>{1}));
    EXPECT_EQ(factorials(5), (std::vector<unsigned long long>{1, 1, 2, 6, 24}));
    EXPECT_THROW(factorials(0), std::invalid_argument);
}

// Тесты для функции удаления дубликатов
TEST(RemoveDuplicatesTest, BasicTests) {
    EXPECT_EQ(remove_duplicates({1, 2, 2, 3}), (std::vector<int>{1, 2, 3}));
    EXPECT_EQ(remove_duplicates({}), (std::vector<int>{}));
    EXPECT_EQ(remove_duplicates({1, 1, 1}), (std::vector<int>{1}));
}

// Выполните тесты
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
