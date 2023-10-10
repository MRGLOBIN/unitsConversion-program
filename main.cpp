#include <iostream>

using namespace std;

const string prefix = {};

int main()
{
    int option;
    cout << "\t\tWelcome to units converting peogram\n";
    do
    {
        cout << "Please select apporiate unit for conversion: \n";
        cout << "1.Mass\n2.Time\n3.Length\n4.Temperature\n5.Current\n6.Intensity of light\n7.Amount of substance\n";
        cin >> option;
    } while (option < 0 || option > 8);

    if (option == 1)
    {
        cout << "from what value do you want to convert: ";
        cout << "1.Micro-Gram\n2.Milli-Gram\n3.Centi-Gram\n4.Gram\n5.Kilo-Gram";
        cin >> option;
    }
}