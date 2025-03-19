#include <bits/stdc++.h>
using namespace std;

double functionof(double x)
{
    return pow(x, 3) - x - 1;
}
double diffrentiatefunctionof(double x)
{
    return 3 * pow(x, 2) - 1;
}
void NewtonRaphsonMethod(double a, double b, double error, int i)
{
    if (functionof(a) * functionof(b) >= 0)
    {
        cout << "Invalid";
        return;
    }

    double x0 = (a + b) / 2;
    int n = 1;
    double x1=(x0 - functionof(x0) / diffrentiatefunctionof(x0));
    while (fabs(functionof(x1)) > error && n <= i)
    {
        x1 = (x0 - functionof(x0) / diffrentiatefunctionof(x0));
        cout << "n=" << n << "\t"
             << "x0=" << fixed << setprecision(5) << x0 << "\t"
             << "f(x0)=" << fixed << setprecision(5) << functionof(x0) << "\t"
             << "f'(x0)=" << fixed << setprecision(5) << diffrentiatefunctionof(x0) << "\t"
             << "x1=" << fixed << setprecision(5) << x1 << "\t"
             << "f(x1)=" << fixed << setprecision(5) << functionof(x1) << "\t";
        if (functionof(x1) == 0.0)
        {
            break;
        }
        else
        {
            cout << "Update: x0 = x1" << endl;
            x0 = x1;
        }
        n++;
    }
    cout << endl;
    cout << "The approximate root using Newton Raphson method is:" << fixed << setprecision(5) << x1;
    cout << endl;
    cout << endl;
}
int main()
{
    int i=10;
    double a=0.0, b=2.0, error=.00001;

    NewtonRaphsonMethod(a, b, error, i);

    return 0;
}