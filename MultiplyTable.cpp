#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;


    int firstn = number % 10;
    int secondn = (number / 10) % 10;
    int third = number / 100;

    for (int i = 1; i <= firstn; i++)
    {
        for (int t = 1; t <= secondn; t++)
        {
            for (int k = 1; k <= third; k++)
            {
                cout << i << " * " << t << " * " << k << " = " << i * t * k << ";" << endl;
            }
        }
    }
}
