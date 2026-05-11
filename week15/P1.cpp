#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


// Base Class
class Employee
{
private:
    string firstName;
    string lastName;
    double salary;


public:
    Employee()
    {
        firstName = "Not Entered";
        lastName = "Not Entered";
        salary = 0.0;
    }


    void setFirstName(string fn)
    {
        firstName = fn;
    }


    void setLastName(string ln)
    {
        lastName = ln;
    }


    void setSalary(double s)
    {
        salary = s;
    }


    string getFirstName()
    {
        return firstName;
    }


    string getLastName()
    {
        return lastName;
    }


    double getSalary()
    {
        return salary;
    }


    virtual double Bonus()
    {
        return salary * 0.10;
    }


    void DisplayEmployee()
    {
        cout << "First Name: " << firstName << endl;
        cout << "Last Name: " << lastName << endl;
        cout << fixed << setprecision(2);
        cout << "Annual Salary: $" << salary << endl;
    }
};


// Derived Class
class Manager : public Employee
{
public:
    double Long_Term_Bonus()
    {
        return getSalary() * 0.50;
    }


    double Bonus() override
    {
        return getSalary() * 0.50;
    }


    void DisplayManager()
    {
        DisplayEmployee();
        cout << "Bonus: $" << Bonus() << endl;
        cout << "Long Term Bonus: $" << Long_Term_Bonus() << endl;
    }
};


// Program to test the object
int main()
{
    Manager manager1;


    manager1.setFirstName("John");
    manager1.setLastName("Smith");
    manager1.setSalary(80000);


    cout << "Manager Object Test" << endl;
    cout << "-------------------" << endl;

    manager1.DisplayManager();

    return 0;
}