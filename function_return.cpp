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
    // Student jannat(343, 5, 4.90);
    // Student *p= &jannat;
    Student *tahmina = new Student(343, 5, 4.91);
    return tahmina;
}

int main()
{

    Student *ans = fun();
    cout << ans->roll << " " << ans->cls << " " << ans->gpa << endl;
    delete ans;
    cout << ans->roll << " " << ans->cls << " " << ans->gpa << endl;
    return 0;
}