
#include <bits/stdc++.h>
using namespace std;

double fof(double x)
{
    return pow(x, 3) - (x)-1;
}
double dof(double x)
{

    return (3 * pow(x, 2)) - 1;
}
double ddof(double x)
{
    return 6 * x;
}
void HalleyMethod(double a, double b, double error)
{
    if (fof(a) * fof(b) >= 0)
    {
        cout << "Invalid";
        return;
    }
    double x0 = (a + b) / 2;
    double x1 = x0-((2 * fof(x0) * dof(x0)) / (pow((2 * ddof(x0)),2) - fof(x0) * ddof(x0)));

    while (fabs(fof(x1)) > error)
    {
        x1 = x0-((2 * fof(x0) * dof(x0)) / (pow((2 * ddof(x0)),2) - fof(x0) * ddof(x0)));

        if (fof(x0) == 0.0)
        {
            break;
        }
        else
        {
            x0 = x1;
        }
    }
    cout << endl;
    cout << "The approximate root using Halley's method is:" << fixed << setprecision(5) << x1;
}
int main()
{
    double a, b, error = 0.0001;

    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    HalleyMethod(a, b, error);

    return 0;
}
