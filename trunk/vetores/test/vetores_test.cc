// copyright 2010 Thiago Noronha
#include "easytesting/vetores/test/vetores_test.h"

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    testing::GTEST_FLAG(print_time) = false;
    return RUN_ALL_TESTS();
}
