#include <iostream>
//#include <conio.h>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    float angu;
    cout << "Introduzca la medida del angulo: ";
    cin >> angu;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if(angu>0 && angu<90) {
        cout << "El angulo " << angu << " es agudo";
    };
     if(angu==90) {
        cout << "El angulo " << angu << " es recto";
    };
    if(angu>90 && angu<180) {
        cout << "El angulo " << angu << " es obtuso";
    };
     if(angu==180) {
        cout << "El angulo " << angu << " es llano";
    };
     if(angu>180 && angu<360) {
        cout << "El angulo " << angu << " es concavo";
    };
    if(angu==360) {
        cout << "El angulo " << angu << " es perigono";
    };
    if(angu>360 && angu<=0) {
    cout << "El angulo " << angu << " es invalido";
    };
    cout << "\n";
}

