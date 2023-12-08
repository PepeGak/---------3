#include <iostream>
namespace L1 = std;
int main(int argc, char *args[])
{
    int a = 5;
    int b = 10;
    int c = 1;
    int d;
    for (int i = 1; i <= 10; i++)
    {
        if (i == a)
        {
            c = c + a;
            c = c * b;
        }
        else if (i == b)
        {
            c = a + b;
        }
    }
    while (c != 0)
    {
        c = c - 1;
        a = a / 2;
    }
    return 0;
}
