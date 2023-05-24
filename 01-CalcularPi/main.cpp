#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double pi = 0;

    for (int i = 0; i <= 4000000; i++) {
        double n = (pow(-1, i))/(2*i+1);
        pi += n;
    }

    pi *= 4;
    cout << setprecision(7) << fixed << "El valor de pi es de: " << pi << endl;

    return 0;
}