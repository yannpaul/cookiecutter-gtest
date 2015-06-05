
#include <gtest/gtest.h>
#include "{{cookiecutter.class|lower}}.h"




int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
