#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Membership
{
private:
    string firstName;
    string lastName;
    int age;
    string membershipType;

public:
    Membership()
    {
        firstName = "Not Entered";
        lastName = "Not Entered";
        age = 18;
        membershipType = "Bronze";
    }

    void Member_First_Name(string name)
    {
        if (name == "")
            firstName = "Not Entered";
        else
            firstName = name;
    }

    string Member_First_Name()
    {
        return firstName;
    }

    void Member_Last_Name(string name)
    {
        if (name == "")
            lastName = "Not Entered";
        else
            lastName = name;
    }

    string Member_Last_Name()
    {
        return lastName;
    }

    void Member_Age(int memberAge)
    {
        if (memberAge <= 0)
            age = 18;
        else
            age = memberAge;
    }

    int Member_Age()
    {
        return age;
    }

    void Membership_Type(string type)
    {
        if (type == "Gold" || type == "Silver" || type == "Bronze")
            membershipType = type;
        else
            membershipType = "Bronze";
    }

    string Membership_Type()
    {
        return membershipType;
    }

    double Membership_Cost()
    {
        double cost;

        if (membershipType == "Gold")
            cost = 1200.00;
        else if (membershipType == "Silver")
            cost = 1000.00;
        else
            cost = 500.00;

        if (age > 50)
            cost = cost * 0.90;

        return cost;
    }
};

int main()
{
    Membership member;

    string firstName;
    string lastName;
    string type;
    int age;

    cout << fixed << setprecision(2);

    cout << "Enter member information. Use Ctrl+Z to stop." << endl << endl;

    while (true)
    {
        cout << "Enter first name: ";
        if (!(cin >> firstName))
            break;

        cout << "Enter last name: ";
        if (!(cin >> lastName))
            break;

        cout << "Enter age: ";
        if (!(cin >> age))
            break;

        cout << "Enter membership type Gold, Silver, or Bronze: ";
        if (!(cin >> type))
            break;

        member.Member_First_Name(firstName);
        member.Member_Last_Name(lastName);
        member.Member_Age(age);
        member.Membership_Type(type);

        cout << endl;
        cout << "Member First Name: " << member.Member_First_Name() << endl;
        cout << "Member Last Name: " << member.Member_Last_Name() << endl;
        cout << "Member Age: " << member.Member_Age() << endl;
        cout << "Membership Type: " << member.Membership_Type() << endl;
        cout << "Membership Cost: $" << member.Membership_Cost() << endl;
        cout << endl;
    }

    return 0;
}