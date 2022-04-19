

#include <iostream>
#include "gtest/gtest.h"
int main(int argc, char** argv) {
    if (strcmp("test", argv[1]) == 0)
    {
        ::testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
    }
    else
    {
        std::cout << "Hello!" << std::endl;
    }

}

