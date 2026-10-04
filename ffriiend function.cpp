#include <iostream>
using namespace std;
class Sample
{
    int a;
public:
    Sample()
    {
        a = 10;
    }
    friend void display(Sample s);
};
void display(Sample s)
{
    cout << "Value of a: " << s.a << endl;
}
int main()
{
    Sample s;
    display(s);
    return 0;
}
