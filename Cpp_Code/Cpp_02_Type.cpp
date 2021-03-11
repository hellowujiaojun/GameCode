#include <iostream>
int Unsigned_Test();
int main()
{
    bool b = 42;
    int  i = 3.14;
    unsigned char c = -1;
    int x = c;
    std::cout << b << std::endl;
    std::cout << i << std::endl;
    std::cout << x << std::endl;
    Unsigned_Test();
    return 0;
}
int Unsigned_Test()
{
    int u1 = -40;
    unsigned u2 = 20;
    std::cout << u1+u2 << std::endl;
    return 0;
}