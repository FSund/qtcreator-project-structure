#include <unittest++/UnitTest++.h>
#include <myclass.h>

TEST(MyMath) {
    MyClass my;
    CHECK(my.addition(3,4) == 7);
}

int main()
{
    return UnitTest::RunAllTests();
}
