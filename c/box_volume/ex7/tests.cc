#include "corrupt.c"
#include <gtest/gtest.h>

TEST(Corrupt, DoMemoryCorruption) {
    EXPECT_EQ(0, do_memory_corruption());
}

TEST(Corrupt, DoReturnFive) {
    EXPECT_EQ(0, do_return_five());
}

int main (int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
