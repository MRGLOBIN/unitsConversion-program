#include <iostream>
#include <format>

using namespace std;

const string prefix[] = {"Micro", "Milli", "centi", "Kilo", "Mega"};
const string units[] = {"Gram"};

int main()
{
    int option;
    cout << "\t\tWelcome to units converting peogram\n";
    do
    {
        cout << "Please select apporiate unit for conversion: \n";
        cout << "1.Mass\n2.Time\n3.Length\n4.Temperature\n5.Current\n6.Intensity of light\n7.Amount of substance\n";
        cin >> option;
        switch (option)
        {

        case 1:
        {
            cout << "from what value do you want to convert: ";
            cout << "\n1." << prefix[0] << "-" << units[0] << "\n2." << prefix[1]
                 << "-" << units[0] << "\n3." << prefix[2] << "-" << units[0] << "\n4." << units[0] << "\n5." << prefix[4] << "-" << units[0] << "";
            cin >> option;
        }
        break;
        case 2:
        {
            cout << "from what value do you want to convert: ";
            cout << "\n1." << prefix[0] << "-Gram\n2." << prefix[1]
                 << "-Gram\n3." << prefix[2] << "-Gram\n4.Gram\n5." << prefix[4] << "-Gram";
            cin >> option;
        }

        default:
        {
            cout << "Please select correct option\n\n";
        }
        }
    } while (option > 7 || option < 1);
}