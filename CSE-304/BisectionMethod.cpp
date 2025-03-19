#include <bits/stdc++.h>
using namespace std;

double functionof(double x)
{
    return pow(x, 3) - x - 1;
}
void BisectionMethod(double a, double b, double error, int i)
{
    if (functionof(a) * functionof(b) >= 0)
    {
        cout << "Invalid";
        return;
    }

    double c;
    int n = 1;
    while (fabs(functionof(c)) > error && n <= i)
    {
        c = (a + b) / 2.0;
        cout << "n=" << n << "\t"
             << "a=" << fixed << setprecision(5) << a << "\t"
             << "f(a)=" << fixed << setprecision(5) << functionof(a) << "\t"
             << "b=" << fixed << setprecision(5) << b << "\t"
             << "f(b)=" << fixed << setprecision(5) << functionof(b) << "\t"
             << "c=" << fixed << setprecision(5) << c << "\t"
             << "f(c)=" << fixed << setprecision(5) << functionof(c) << "\t";

        if (functionof(c) == 0.0)
        {
            break;
        }
        else if (functionof(c) < 0)
        {
            cout << "Update:a=c" << endl;
            a = c;
        }
        else
        {
            cout << "Update:b=c" << endl;
            b = c;
        }
        n++;
    }
    cout << endl;
    cout << "The approximate root using Bisectoin method is:" << fixed << setprecision(5) << c;
    cout << endl;
    cout << endl;
}
int main()
{
    int i;
    double a, b, error;

    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    cout << "Enter Accuracy:";
    cin >> error;
    cout << "Enter Iteration:";
    cin >> i;
    BisectionMethod(a, b, error, i);

    return 0;
}