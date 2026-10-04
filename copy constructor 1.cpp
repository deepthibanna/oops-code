#include <iostream>
using namespace std;
class Student
{
public:
    int marks;
    Student()
    {
        marks = 0;
    }
    Student(int m)
    {
        marks = m;
    }
    Student(int m, int n)
    {
        marks = m + n;
    }
    Student(int m, int n, int x)
    {
        marks = m + n + x;
    }

    void display()
    {
        cout << marks << endl;
    }
};
int main()
{
    Student s1;
    s1.display();
    Student s2(10);
    s2.display();
    Student s3(10, 20);
    s3.display();
    Student s4(10, 20, 30);
    s4.display();
    return 0;
}
