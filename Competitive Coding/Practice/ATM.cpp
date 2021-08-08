#include <bits/stdc++.h>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee
{
private:
    string Name;
    int Age;

public:
    Employee(string name, int age)
    {
        Name=name;
        Age=age;
    }
    void EmployeeDetails()
    {
        cout<<"Employee name is: "<<Name<<" and age is: "<<Age<<endl;
    }
    void AskForPromotion()
    {
        if(Age>21) cout<<Name<<" is promoted "<<endl;
        else cout<<Name<<" is not promoted "<<endl;
    }
};

int main()
{
    Employee emp1 = Employee("Lokesh", 21);
    Employee emp2 = Employee("Ashish", 22);
    emp1.AskForPromotion();
    emp2.AskForPromotion();


}