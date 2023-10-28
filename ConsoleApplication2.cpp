#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//Funkcje do zadania 3.4//

int f(int n, int i)
{
    if (n == i || n == 0)
        return 1;
    return f(n - 1, i - 1) + f(n - 1, i);
}

int main(){
//ZADANIE 3.1//    
    float x, y;
    float suma = 0, roznica = 0, iloczyn = 0, iloraz = 0;
    cout << "Podaj wartosci liczb x i y: " << endl;
    cin >> x >> y;
    suma = x + y;
    roznica = x - y;
    iloczyn = x * y;
    iloraz = x / y;
    cout << "Suma x+y: "<<setprecision(2) << suma <<", roznica x-y: "<<setprecision(2) << roznica <<", iloczyn x*y: "<<setprecision(2)<< iloczyn <<", iloraz x/y: "<<setprecision(2) <<iloraz << endl;
    
//ZADANIE 3.2//
    cout << "Wprowadz znak do wyswietlenia: " << endl;
    string znak;

    do {
        cin >> znak;
        cout << znak << endl;
    } while (znak != "t");
    
//ZADANIE 3.3//
    cout << "Postac ogolna funkcji kwadratowej: f(x)=ax2+bx+c" << endl;
    cout << "Podaj liczby a, b, c:" << endl;
    
    double a = 0, b = 0, c=0, x1, x2, x3, delta;
    
    cin >> a >> b >> c;
    
    cout << "Postac ogolna funkcji kwadratowej z uwzglednieniem podanych liczb: f(x)=" << a << "x2 + " << b << "x + " << c << endl;
    delta = b * b - 4 * a * c;
    if (delta > 0)
    {
        delta = sqrt(delta);
        x1 = (-b - delta) / (2 * a);
        x2 = (-b + delta) / (2 * a);
        cout << "Sa dwa pierwiastki rownania: " << fixed << setprecision(2) << x1 << " " << x2 << endl;
    }
    else
        if (delta == 0)
        {
            x3 = -b / (2 * a);
            cout << "Jest jeden pierwiastek: " << fixed << setprecision(2) << x3 << endl;
        }
        else
            cout << "Brak pierwiastkow" << endl;

 //ZADANIE 3.4//
    int n, i, j;
    cout <<"Podaj liczbe wierszy: " << endl;
    cin >> j;
    cout << endl;

    for (n = 0; n < j; n++) {
        for (i = 0; i <= n; i++)
            cout<< f(n, i) << " ";

        cout << endl;
    }
       
    return 0;
}