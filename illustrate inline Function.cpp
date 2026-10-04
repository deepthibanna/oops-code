#include <iostream>
using namespace std;
class Calculator
{
public:
    inline int square(int n)
    {
        return n * n;
    }
};
int main()
{
    Calculator c;
    cout << "Square = " << c.square(5) << endl;
    return 0;
}
