#include "box.c"
#include <gtest/gtest.h>

TEST(BoxVolume, ZeroDimensions) {
    EXPECT_EQ(0, box_volume(0,0,0));
}

int main (int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
