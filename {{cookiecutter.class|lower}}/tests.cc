
#include <gtest/gtest.h>
#include "{{cookiecutter.class|lower}}.h"

#include <vector>

struct test_input { {% for item in cookiecutter.args.split(',') %}
  {{item}};{% endfor %}
  {{cookiecutter.answer_type}} answer;
};

std::vector<test_input> test_data({
    { },
      });
{% set args = cookiecutter.args.split(',') %}
TEST({{cookiecutter.class|upper}}, examples) {
  {{cookiecutter.class}} foo;
  int count = 0;
  for (auto item: test_data) {
    ASSERT_EQ(foo.{{cookiecutter.method}}({% for arg in args[:-1] %}item.{{arg.split()[1]}}, {% endfor %}item.{{args[-1].split()[1]}}), item.answer) <<
      "case " << count;
    count++;
  }

}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
