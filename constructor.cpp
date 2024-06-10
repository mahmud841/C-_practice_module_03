#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        // roll = r;
        // cls = c;
        // gpa = g;
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
        // (*this).roll = roll;
        // (*this).cls = cls;
        // (*this).gpa = gpa;
    }
};
int main()
{
    Student mahmud(29, 9, 5.01);
    Student jannat(27, 10, 5.02);
    cout << mahmud.roll << " " << mahmud.cls << " " << mahmud.gpa << endl;
    cout << jannat.roll << " " << jannat.cls << " " << jannat.gpa << endl;
    // mahmud.roll=100;
    // mahmud.cls=10;
    // mahmud.gpa=3.74;

    return 0;
}