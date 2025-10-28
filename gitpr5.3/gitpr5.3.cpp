// gitpr5.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double z(const double x);

int main() {
    double k_p, k_k;
    int n;

    cout << "k_p = "; cin >> k_p;
    cout << "k_k = "; cin >> k_k;
    cout << "n = "; cin >> n;

    double dk = (k_k - k_p) / n;

    cout << "\n+------------+--------------------+" << endl;
    cout << "|     k      |        y(k)        |" << endl;
    cout << "+------------+--------------------+" << endl;

    for (int i = 0; i <= n; i++) {
        double k = k_p + i * dk;
        double y = z(2 * k + 1) - pow(z(2 * k - 1), 2) + sqrt(z(k));

        cout << "| " << setw(10) << fixed << setprecision(3) << k
            << " | " << setw(18) << fixed << setprecision(6) << y << " |" << endl;
    }

    cout << "+------------+--------------------+" << endl;
    return 0;
}

double z(const double x) {
    if (fabs(x) >= 1)
        return (cos(x) + 1) / (sin(x) * sin(x) + exp(x));
    else {
        double a = 1;
        double S = a;
        for (int j = 1; j <= 7; j++) {
            double R = (-x) / j;
            a *= R;
            S += a;
        }
        return S / exp(x);
    }
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
