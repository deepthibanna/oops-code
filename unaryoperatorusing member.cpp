#include<iostream>
using namespace std;

class number
{
    int a;

public:
    number(int x)
    {
        a = x;
    }
    void operator-()
    {
        a = -a;
    }
    void display()
    {
        cout << a << endl;
    }
};
int main()
{
    number n(10);
    -n;
    n.display();
    return 0;
}
