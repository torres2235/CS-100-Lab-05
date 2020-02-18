#include "gtest/gtest.h"

#include "lab-04/op_test.hpp"
#include "lab-04/rand_test.hpp"
#include "lab-04/mult_test.hpp"
#include "lab-04/div_test.hpp"
#include "lab-04/add_test.hpp"
#include "lab-04/sub_test.hpp"
#include "lab-04/pow_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
