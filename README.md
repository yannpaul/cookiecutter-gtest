

This is a [cookiecutter template](https://github.com/audreyr/cookiecutter).

It creates a directory for your class *FooBar* named *foobar* and sets up
a CMakeLists.txt file to compile a file, tests.cc, into a program RunTests.

If you want to provide a namespace, e.g. baz, it will setup your class's
header file with that namespace:

    #foobar.h

    namespace baz {

        class FooBar {


        }
    }

