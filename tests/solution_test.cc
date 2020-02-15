#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HeapSortShould, HeapSortReturn) {
  Solution solution;
  std::vector <int> actual = {5, 9, 3, 1, 7};
  solution.HeapSort(actual);
  std::vector <int> expected = {1, 3, 5, 7, 9};
  EXPECT_EQ(expected, actual);
}

TEST(HeapSortShould_1, HeapSortReturn_1) {
  Solution solution;
  std::vector <int> actual = {};
  solution.HeapSort(actual);
  std::vector <int> expected = {};
  EXPECT_EQ(expected, actual);
}