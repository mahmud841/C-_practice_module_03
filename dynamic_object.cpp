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
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};
Student *fun()
{
}

int main()
{
    Student jannat(343, 5, 4.90);
    Student *tahmina = new Student(343, 5, 4.90);

    cout << tahmina->roll << " " << tahmina->cls << " " << tahmina->gpa << endl;
    return 0;
}