
#include <gtest/gtest.h>
#include "{{cookiecutter.class|lower}}.h"

#include <vector>

struct test_input {
  
  {{cookiecutter.answer_type}} answer;
};

std::vector<test_input> {
  { },
};

TEST({{cookiecutter.class|upper}}, examples) {
  {{cookiecutter.class}} foo;
  int count = 0;
  for (auto item: test_data) {
    ASSERT_EQ(foo.{{cookiecutter.method}}(item.), item.answer) <<
      "case " << count;
    count++;
  }

}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
