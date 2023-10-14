#include <iostream>
#include <format>

using namespace std;

const string prefix[] = {"Micro", "Milli", "centi", "Kilo", "Mega"};
const string units[] = {"Gram", "Second", "Meter", "Kelvin", "Ampere", "Candela", "Mole"};
const double multiplier[] = {1e-6, 1e-3, 1e-2, 1e3, 1e6};
int option, unit_option, convert_option;

double value, result;

double calculate(double value, string convert_from, string convert_to)
{
}

int main()
{
    cout << "\t\tWelcome to units converting peogram\n";
    do
    {
        cout << "Please select apporiate unit for conversion: \n";
        cout << "1.Mass\n2.Time\n3.Length\n4.Temperature\n5.Current\n6.Intensity of light\n7.Amount of substance\n";
        cin >> option;
    } while (option > 7 || option < 1);
    switch (option)
    {
    case 1:
    {
        do
        {
            cout << "from what value do you want to convert: ";
            cout << "\n1." << prefix[0] << "-" << units[0] << "\n2." << prefix[1]
                 << "-" << units[0] << "\n3." << prefix[2] << "-" << units[0] << "\n4."
                 << units[0] << "\n5." << prefix[4] << "-" << units[0] << endl;
            cin >> unit_option;
        } while (unit_option > 5 || unit_option < 1);
        cout << "Convert to which Unit: \n";
        for (int i = 0; i < 5; i++)
        {
            cout << prefix[i] << "\n";
        }
        cin >> convert_option;

        cout << "please Enter Value: ";
        cin >> value;
    }

    break;
    case 2:
    {
        do
        {
            cout << "from what value do you want to convert: ";
            cout << "\n1." << prefix[0] << "-" << units[1] << "\n2." << prefix[1]
                 << "-" << units[1] << "\n3." << prefix[2] << "-" << units[1] << "\n4."
                 << units[1] << "\n5." << prefix[4] << "-" << units[1] << endl;
            cin >> unit_option;
        } while (unit_option > 5 || unit_option < 1);
    }

    break;
    case 3:
    {
        do
        {
            cout << "from what value do you want to convert: ";
            cout << "\n1." << prefix[0] << "-" << units[2] << "\n2." << prefix[1]
                 << "-" << units[2] << "\n3." << prefix[2] << "-" << units[2] << "\n4."
                 << units[2] << "\n5." << prefix[4] << "-" << units[2] << endl;
            cin >> unit_option;
        } while (unit_option > 5 || unit_option < 1);
    }

    break;
    case 4:
    {
        do
        {
            cout << "from what value do you want to convert: ";
            cout << "\n1." << prefix[0] << "-" << units[3] << "\n2." << prefix[1]
                 << "-" << units[3] << "\n3." << prefix[2] << "-" << units[3] << "\n4."
                 << units[3] << "\n5." << prefix[4] << "-" << units[3] << endl;
            cin >> unit_option;
        } while (unit_option > 5 || unit_option < 1);
    }

    break;
    case 5:
    {
        do
        {
            cout << "from what value do you want to convert: ";
            cout << "\n1." << prefix[0] << "-" << units[4] << "\n2." << prefix[1]
                 << "-" << units[4] << "\n3." << prefix[2] << "-" << units[4] << "\n4."
                 << units[4] << "\n5." << prefix[4] << "-" << units[4] << endl;
            cin >> unit_option;
        } while (unit_option > 5 || unit_option < 1);
    }

    break;
    case 6:
    {
        do
        {
            cout << "from what value do you want to convert: ";
            cout << "\n1." << prefix[0] << "-" << units[5] << "\n2." << prefix[1]
                 << "-" << units[5] << "\n3." << prefix[2] << "-" << units[5] << "\n4."
                 << units[5] << "\n5." << prefix[4] << "-" << units[5] << endl;
            cin >> unit_option;
        } while (unit_option > 5 || unit_option < 1);
    }

    break;
    case 7:
    {
        do
        {
            cout << "from what value do you want to convert: ";
            cout << "\n1." << prefix[0] << "-" << units[6] << "\n2." << prefix[1]
                 << "-" << units[6] << "\n3." << prefix[2] << "-" << units[6] << "\n4." cin >>
                unit_option;
        } while (unit_option > 5 || unit_option < 1);
    }

    default:
    {
        cout << "Please select correct option\n\n";
    }
    }
}