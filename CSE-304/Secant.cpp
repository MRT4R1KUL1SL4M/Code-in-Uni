
#include <bits/stdc++.h>
using namespace std;

double functionof(double x)
{
    return pow(x, 3) - (x)-1;
}
void SecantMethod(double a, double b, double error)
{
    if (functionof(a) * functionof(b) >= 0)
    {
        cout << "Invalid";
        return;
    }

    double c = a - functionof(a) * (b - a) / (functionof(b) - functionof(a));

    while (fabs(functionof(c)) > error)
    {
        c = a - functionof(a) * ((b - a) / (functionof(b) - functionof(a)));

        if (functionof(c) == 0.0)
        {
            break;
        }
        else
        {
            a = b;
            b = c;
        }
    }
    cout << endl;
    cout << "The approximate root using Secant method is:" << fixed << setprecision(5) << c;
}
int main()
{
    double a, b, error = 0.0001;

    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    SecantMethod(a, b, error);

    return 0;
}
