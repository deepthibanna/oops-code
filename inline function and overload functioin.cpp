#include <iostream>
using namespace std;
class Student
{
public:
    inline int square(int n)
    {
        return n * n;
    }
    inline int add(int n, int m)
    {
        return n + m;
    }
    inline int add(int n, int m, int x)
    {
        return n + m + x;
    }
    inline int add(int n, int m, int x, int y)
    {
        return n + m + x + y;
    }
};
int main()
{
    Student s1;
    cout << "Square of 6 = " << s1.square(6) << endl;
    cout << "Addition of 1 and 2 = " << s1.add(1, 2) << endl;
    cout << "Addition of 1, 3 and 4 = " << s1.add(1, 3, 4) << endl;
    cout << "Addition of 1, 2, 3 and 4 = " << s1.add(1, 2, 3, 4) << endl;
    return 0;
}
