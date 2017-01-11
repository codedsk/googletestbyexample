#include "box.c"
#include <gtest/gtest.h>

TEST(BoxVolume, ZeroDimensions) {
    EXPECT_EQ(0, box_volume(0,0,0));
}

TEST (BoxVolume,ValidDimensions) {
    EXPECT_EQ(1,box_volume(1,1,1));
    EXPECT_EQ(24,box_volume(2,3,4));
    // note the long long returned in the next assertion
    EXPECT_EQ(5368770000,box_volume(5423,900,1100));
}

// Add tests with invalid lengths
TEST (BoxVolume,InvalidLengths) {
    EXPECT_EQ(0,box_volume(-1,-1,-1));
    EXPECT_EQ(0,box_volume(-1,2,3));
    EXPECT_EQ(0,box_volume(1,-2,3));
    EXPECT_EQ(0,box_volume(1,2,-3));
}

int main (int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
