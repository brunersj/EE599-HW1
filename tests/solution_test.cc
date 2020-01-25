#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

// TEST(HelloWorldShould, ReturnHelloWorld) {
//   Solution solution;
//   std::string actual = solution.PrintHelloWorld();
//   std::string expected = "**** Hello World ****";
//   EXPECT_EQ(expected, actual);
// }

TEST(FindMedianTest, HandlesEvenVector){
  Solution solution;
  std::vector<int> inputs = {1, 2, 3, 5};
  EXPECT_DOUBLE_EQ(solution.FindMedian(inputs), 2.5);
}

TEST(FindMedianTest, HandlesOddVector){
  Solution solution;
  std::vector<int> inputs = {1, 2, 3, 5, 8};
  EXPECT_DOUBLE_EQ(solution.FindMedian(inputs), 3);
}

TEST(FindMedianTest, HandlesSize1Vector){
  Solution solution;
  std::vector<int> inputs = {1};
  EXPECT_DOUBLE_EQ(solution.FindMedian(inputs), 1);
}

TEST(FindMedianTest, HandlesNegativeElement){
  Solution solution;
  std::vector<int> inputs = {1, -2, 3};
  EXPECT_DOUBLE_EQ(solution.FindMedian(inputs), -1);
}

TEST(FindMedianTest, HandlesSize1NegativeVector){
  Solution solution;
  std::vector<int> inputs = {-1};
  EXPECT_DOUBLE_EQ(solution.FindMedian(inputs), -1);
}

TEST(FindMedianTest, HandlesEmptyVector){
  Solution solution;
  std::vector<int> inputs = {};
  EXPECT_DOUBLE_EQ(solution.FindMedian(inputs), -1);
}