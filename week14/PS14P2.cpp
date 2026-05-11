#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class ComputerAsset
{
private:
    string make;
    string model;
    string cpu;
    string ram;
    string hardDrive;
    string computerType;

public:
    ComputerAsset()
    {
        make = "Lenovo";
        model = "LE100A";
        cpu = "Intel";
        ram = "32GB";
        hardDrive = "HD";
        computerType = "Laptop";
    }

    void Computer_Make(string computerMake)
    {
        if (computerMake == "Lenovo" || computerMake == "HP" || computerMake == "Apple")
            make = computerMake;
        else
            make = "Lenovo";
    }

    string Computer_Make()
    {
        return make;
    }

    void Computer_Model(string computerModel)
    {
        if (computerModel == "")
            model = "LE100A";
        else
            model = computerModel;
    }

    string Computer_Model()
    {
        return model;
    }

    void Computer_CPU(string computerCPU)
    {
        if (computerCPU == "Intel" || computerCPU == "AMD")
            cpu = computerCPU;
        else
            cpu = "Intel";
    }

    string Computer_CPU()
    {
        return cpu;
    }

    void Computer_RAM(string computerRAM)
    {
        if (computerRAM == "8GB" || computerRAM == "16GB" || computerRAM == "32GB")
            ram = computerRAM;
        else
            ram = "32GB";
    }

    string Computer_RAM()
    {
        return ram;
    }

    void Computer_Hard_Drive(string drive)
    {
        if (drive == "SSD" || drive == "HD")
            hardDrive = drive;
        else
            hardDrive = "HD";
    }

    string Computer_Hard_Drive()
    {
        return hardDrive;
    }

    void Computer_Type(string type)
    {
        if (type == "Laptop" || type == "Notebook" || type == "Tablet" || type == "Desktop")
            computerType = type;
        else
            computerType = "Laptop";
    }

    string Computer_Type()
    {
        return computerType;
    }

    double Computer_Cost()
    {
        double cost = 0.00;

        if (make == "Lenovo")
            cost = cost + 1200.00;
        else if (make == "HP")
            cost = cost + 1000.00;
        else if (make == "Apple")
            cost = cost + 2000.00;

        if (cpu == "Intel")
            cost = cost + 200.00;

        if (ram == "16GB")
            cost = cost + 300.00;
        else if (ram == "32GB")
            cost = cost + 500.00;

        if (hardDrive == "SSD")
            cost = cost + 500.00;

        if (computerType == "Laptop")
            cost = cost + 300.00;
        else if (computerType == "Tablet")
            cost = cost - 200.00;

        return cost;
    }
};

int main()
{
    ComputerAsset computer;

    string make;
    string model;
    string cpu;
    string ram;
    string hardDrive;
    string type;

    cout << fixed << setprecision(2);

    cout << "Enter computer information. Use Ctrl+Z to stop." << endl << endl;

    while (true)
    {
        cout << "Enter computer make Lenovo, HP, or Apple: ";
        if (!(cin >> make))
            break;

        cout << "Enter computer model: ";
        if (!(cin >> model))
            break;

        cout << "Enter CPU Intel or AMD: ";
        if (!(cin >> cpu))
            break;

        cout << "Enter RAM 8GB, 16GB, or 32GB: ";
        if (!(cin >> ram))
            break;

        cout << "Enter hard drive SSD or HD: ";
        if (!(cin >> hardDrive))
            break;

        cout << "Enter computer type Laptop, Notebook, Tablet, or Desktop: ";
        if (!(cin >> type))
            break;

        computer.Computer_Make(make);
        computer.Computer_Model(model);
        computer.Computer_CPU(cpu);
        computer.Computer_RAM(ram);
        computer.Computer_Hard_Drive(hardDrive);
        computer.Computer_Type(type);

        cout << endl;
        cout << "Computer Make: " << computer.Computer_Make() << endl;
        cout << "Computer Model: " << computer.Computer_Model() << endl;
        cout << "Computer CPU: " << computer.Computer_CPU() << endl;
        cout << "Computer RAM: " << computer.Computer_RAM() << endl;
        cout << "Computer Hard Drive: " << computer.Computer_Hard_Drive() << endl;
        cout << "Computer Type: " << computer.Computer_Type() << endl;
        cout << "Computer Cost: $" << computer.Computer_Cost() << endl;
        cout << endl;
    }

    return 0;
}