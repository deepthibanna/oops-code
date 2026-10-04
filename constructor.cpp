#include <iostream>
using namespace std;

class Student
{
    int marks;

public:
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

    void display()
    {
        cout << "Marks is: " << marks << endl;
    }
};

int main()
{
    Student s1;
    Student s2(10);
    Student s3(10, 20);

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
