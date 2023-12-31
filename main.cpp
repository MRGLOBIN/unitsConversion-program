#include <iostream>

using namespace std;

const string prefix[] = {"Micro", "Milli", "centi", "basic", "Kilo", "Mega"};
const string units[] = {"Gram", "Second", "Meter", "Kelvin", "Ampere", "Candela", "Mole"};
const double multiplier1[] = {1e-6, 1e-3, 1e-4, 1e6, 1e-9, 1e-12};
const double multiplier2[] = {1e-6, 1e3, 1e4, 1e6, 1e9, 1e12};
int option, unit_option, convert_option;

double value, result = 0.0;

double calculate(double valuee, string convert_from, string convert_to)
{
    double value_convert_from__prefix, value_convert_to__prefix;
    for (int i = 0; i < 6; i++)
    {
        if (convert_from == prefix[i])
        {
            for (int j = 0; j < 6; j++)
            {
                if (convert_to == prefix[j])
                {
                    if (j > i)
                    {

                        result = valuee * multiplier1[j];
                    }
                    else if (j < i)
                    {
                        result = valuee * multiplier2[i];
                    }
                }
            }
        }
    }
    return result;
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
                 << units[0] << "\n5." << prefix[4] << "-" << units[0] << "\n6." << prefix[5] << "-" << units[0] << endl;
            cin >> unit_option;
        } while (unit_option > 5 || unit_option < 1);
        cout << "Convert to which Unit: \n";
        for (int i = 0; i < 6; i++)
        {
            cout << i + 1 << "." << prefix[i] << units[0] << "\n";
        }
        cin >> convert_option;
        cout << "please Enter Value: ";
        cin >> value;
        cout << "Your result is: " << calculate(value, prefix[unit_option - 1], prefix[convert_option - 1]);
    }

    break;
    case 2:
    {
        do
        {
            cout << "from what value do you want to convert: ";
            cout << "\n1." << prefix[0] << "-" << units[1] << "\n2." << prefix[1]
                 << "-" << units[1] << "\n3." << prefix[2] << "-" << units[1] << "\n4."
                 << units[1] << "\n5." << prefix[4] << "-" << units[1] << "\n6." << prefix[5] << "-" << units[1] << endl;
            cin >> unit_option;
        } while (unit_option > 5 || unit_option < 1);
        cout << "Convert to which Unit: \n";
        for (int i = 0; i < 6; i++)
        {
            cout << i + 1 << "." << prefix[i] << units[1] << "\n";
        }
        cin >> convert_option;
        cout << "please Enter Value: ";
        cin >> value;
        cout << "Your result is: " << calculate(value, prefix[unit_option - 1], prefix[convert_option - 1]);
    }

    break;
    case 3:
    {
        do
        {
            cout << "from what value do you want to convert: ";
            cout << "\n1." << prefix[0] << "-" << units[2] << "\n2." << prefix[1]
                 << "-" << units[2] << "\n3." << prefix[2] << "-" << units[2] << "\n4."
                 << units[2] << "\n5." << prefix[4] << "-" << units[2] << "\n6." << prefix[5] << "-" << units[2] << endl;
            cin >> unit_option;
        } while (unit_option > 5 || unit_option < 1);
        cout << "Convert to which Unit: \n";
        for (int i = 0; i < 6; i++)
        {
            cout << i + 1 << "." << prefix[i] << units[2] << "\n";
        }
        cin >> convert_option;

        cout << "please Enter Value: ";
        cin >> value;
        cout << "Your result is: " << calculate(value, prefix[unit_option - 1], prefix[convert_option - 1]);
    }

    break;
    case 4:
    {
        do
        {
            cout << "from what value do you want to convert: ";
            cout << "\n1." << prefix[0] << "-" << units[3] << "\n2." << prefix[1]
                 << "-" << units[3] << "\n3." << prefix[2] << "-" << units[3] << "\n4."
                 << units[3] << "\n5." << prefix[4] << "-" << units[3] << "\n6." << prefix[5] << "-" << units[3] << endl;
            cin >> unit_option;
        } while (unit_option > 5 || unit_option < 1);
        cout << "Convert to which Unit: \n";
        for (int i = 0; i < 6; i++)
        {
            cout << i + 1 << "." << prefix[i] << units[3] << "\n";
        }
        cin >> convert_option;

        cout << "please Enter Value: ";
        cin >> value;
        cout << "Your result is: " << calculate(value, prefix[unit_option - 1], prefix[convert_option - 1]);
    }

    break;
    case 5:
    {
        do
        {
            cout << "from what value do you want to convert: ";
            cout << "\n1." << prefix[0] << "-" << units[4] << "\n2." << prefix[1]
                 << "-" << units[4] << "\n3." << prefix[2] << "-" << units[4] << "\n4."
                 << units[4] << "\n5." << prefix[4] << "-" << units[4] << "\n6." << prefix[5] << "-" << units[4] << endl;
            cin >> unit_option;
        } while (unit_option > 5 || unit_option < 1);
        cout << "Convert to which Unit: \n";
        for (int i = 0; i < 6; i++)
        {
            cout << i + 1 << "." << prefix[i] << units[4] << "\n";
        }
        cin >> convert_option;

        cout << "please Enter Value: ";
        cin >> value;
        cout << "Your result is: " << calculate(value, prefix[unit_option - 1], prefix[convert_option - 1]);
    }

    break;
    case 6:
    {
        do
        {
            cout << "from what value do you want to convert: ";
            cout << "\n1." << prefix[0] << "-" << units[5] << "\n2." << prefix[1]
                 << "-" << units[5] << "\n3." << prefix[2] << "-" << units[5] << "\n4."
                 << units[5] << "\n5." << prefix[4] << "-" << units[5] << "\n6." << prefix[5] << "-" << units[5] << endl;
            cin >> unit_option;
        } while (unit_option > 5 || unit_option < 1);
        cout << "Convert to which Unit: \n";
        for (int i = 0; i < 6; i++)
        {
            cout << i + 1 << "." << prefix[i] << units[5] << "\n";
        }
        cin >> convert_option;

        cout << "please Enter Value: ";
        cin >> value;
        cout << "Your result is: " << calculate(value, prefix[unit_option - 1], prefix[convert_option - 1]);
    }

    break;
    case 7:
    {
        do
        {
            cout << "from what value do you want to convert: ";
            cout << "\n1." << prefix[0] << "-" << units[6] << "\n2." << prefix[1]
                 << "-" << units[6] << "\n3." << prefix[2] << "-" << units[6] << "\n4."
                 << units[6] << "\n5." << prefix[4] << "-" << units[6] << "\n6." << prefix[5] << "-" << units[6] << endl;
            cin >> unit_option;
        } while (unit_option > 5 || unit_option < 1);
        cout << "Convert to which Unit: \n";
        for (int i = 0; i < 6; i++)
        {
            cout << i + 1 << "." << prefix[i] << units[6] << "\n";
        }
        cin >> convert_option;

        cout << "please Enter Value: ";
        cin >> value;
        cout << "Your result is: " << calculate(value, prefix[unit_option - 1], prefix[convert_option - 1]);
    }

    default:
    {
        cout << "Please select correct option\n\n";
    }
    }
}