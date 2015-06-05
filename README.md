

This is a [cookiecutter template](https://github.com/audreyr/cookiecutter).

It creates a directory for your class *FooBar* named *foobar* and sets up
a CMakeLists.txt file to compile a file, tests.cc, into a program RunTests.

To use this template, simply run

   cookiecutter https://github.com/yannpaul/cookiecutter-gtest.git

If you want to provide a namespace, e.g. baz, it will setup your class's
header file with that namespace:

    //foobar.h

    namespace baz {

        class FooBar {


        }
    }

Otherwise, leave that field blank and the header file will only have the
class definition.

This template was designed to get quickly started on small projects, for
example my practive [topcoder](https://www.topcoder.com/community/data-science/data-science-tutorials/) sessions. 