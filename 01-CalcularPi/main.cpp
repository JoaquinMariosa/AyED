#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double pi = 0;
    double pifinal = 0;
    double n = 0;
    int i = 0;
    double dif = 0;

    do {
        n = (pow(-1, i))/(2*i+1);
        pi += n;
        pifinal = pi * 4;
        dif = pifinal - 3.141592;
        i++;
    } while ((abs(dif)) > 0.0000001);

    cout << setprecision(6) << fixed << "El valor de pi es de: " << pifinal << endl;

    return 0;
}
