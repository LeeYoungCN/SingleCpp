#include <stdio.h>
#include <typeinfo>

class Test {
public:
    Test(int x) : a(x) {};
    ~Test() {};

private:
    int a;
};


int main()
{
    Test a(1);
    Test b(2);
    if (typeid(a) == typeid(Test)) {
        printf("True");
    } else {
        printf("False");
    }
    return 0;
}
