#include "box.cc"
#include <gtest/gtest.h>


class BoxTest : public testing::Test {

    public:
        Box b1;
        Box b2;
        Box b3;
        Box b4;
        Box b5;

        virtual void SetUp() {
            b3 = Box(2,3,4);
            b4 = Box(5,6,7);
            b5 = Box(-8,-9,-10);
        }

        virtual void TearDown() {}
};

TEST_F(BoxTest, ConstructorDefault) {
    EXPECT_EQ(0, b2.getLength());
    EXPECT_EQ(0, b2.getBreadth());
    EXPECT_EQ(0, b2.getHeight());
}

TEST_F(BoxTest, ConstructorIntIntInt) {
    EXPECT_EQ(2, b3.getLength());
    EXPECT_EQ(3, b3.getBreadth());
    EXPECT_EQ(4, b3.getHeight());
}

TEST_F(BoxTest, ConstructorCopy) {
    EXPECT_EQ(5, b4.getLength());
    EXPECT_EQ(6, b4.getBreadth());
    EXPECT_EQ(7, b4.getHeight());
}

TEST_F(BoxTest, VolumeZeroDimensions) {
    EXPECT_EQ(0, b1.CalculateVolume());
}

TEST_F(BoxTest, VolumeValidDimensions) {
    EXPECT_EQ(24, b3.CalculateVolume());
}

TEST_F(BoxTest, OperatorLT) {
    EXPECT_TRUE(b3 < b4);
    EXPECT_FALSE(b1 < b2);
    EXPECT_FALSE(b3 < b5);
}

int main (int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
