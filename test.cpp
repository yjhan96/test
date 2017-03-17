#include <iostream>

std::string global_str;
int global_int;

int main()
{
    int i = 42;
    int &r1 = i;
    int *const p1 = &i;
    int *p2 = 0;
    std::cout << *p1 << std::endl;
    return -0;
}
