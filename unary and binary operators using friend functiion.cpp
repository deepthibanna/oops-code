#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number(int x)
    {
        a = x;
    }

    friend void operator-(Number &n);

    friend Number operator+(Number n1, Number n2);

    void display()
    {
        cout << a << endl;
    }
};

void operator-(Number &n)
{
    n.a = -n.a;
}

Number operator+(Number n1, Number n2)
{
    return Number(n1.a + n2.a);
}

int main()
{
    Number n1(10), n2(20), n3(0);

    cout << "n1 = ";
    n1.display();

    -n1;
    cout << "After unary -n1 = ";
    n1.display();

    n3 = n1 + n2;
    cout << "After binary n1 + n2 = ";
    n3.display();

    return 0;
}
