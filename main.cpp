#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


class ConversorTemperatura {
public:
    static double aFahrenheit(double c) { return (c * 9.0 / 5.0) + 32.0; }
    static double aKelvin(double c) { return c + 273.15; }
};

class InteresSimple {
public:
    static double calcularInteres(double capital, double tasa, double tiempo) {
        return capital * (tasa / 100) * tiempo;
    }
};

class Circulo {
private:
    double radio;
public:
    Circulo(double r) : radio(r) {}
    double calcularArea() { return M_PI * pow(radio, 2); }
    double calcularLongitud() { return 2 * M_PI * radio; }
};

class Velocidad {
public:
    static double calcularPromedio(double distancia, double tiempo) {
        return (tiempo != 0) ? (distancia / tiempo) : 0;
    }
};

int main() {
    char opcion;
    cout << fixed << setprecision(2);

    cout << "--- Sistema Digitales: Calculadoras ---" << endl;
    cout << "a) Conversor de Temperatura" << endl;
    cout << "b) Interes Simple" << endl;
    cout << "c) Calculos de Circulo" << endl;
    cout << "d) Rapidez Promedio" << endl;
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    cout << "\n----------------------------" << endl;

    if (opcion == 'a') {
        double c;
        cout << "Ingrese grados Celsius: "; cin >> c;
        cout << "Fahrenheit: " << ConversorTemperatura::aFahrenheit(c) << " F" << endl;
        cout << "Kelvin: " << ConversorTemperatura::aKelvin(c) << " K" << endl;
    } 
    else if (opcion == 'b') {
        double cap, tas, tie;
        cout << "Capital ($): "; cin >> cap;
        cout << "Tasa (%): "; cin >> tas;
        cout << "Tiempo (años): "; cin >> tie;
        cout << "Interes total: $" << InteresSimple::calcularInteres(cap, tas, tie) << endl;
    }
    else if (opcion == 'c') {
        double r;
        cout << "Radio del circulo: "; cin >> r;
        Circulo miCirculo(r);
        cout << "Area: " << miCirculo.calcularArea() << endl;
        cout << "Longitud: " << miCirculo.calcularLongitud() << endl;
    }
    else if (opcion == 'd') {
        double d, t;
        cout << "Distancia recorrida: "; cin >> d;
        cout << "Tiempo empleado: "; cin >> t;
        cout << "La rapidez promedio es: " << Velocidad::calcularPromedio(d, t) << " unidades/t" << endl;
    }
    else {
        cout << "Opcion no valida." << endl;
    }

    cout << "----------------------------" << endl;
    cout << "Proceso finalizado. Presione Enter para salir.";
    cin.ignore(); cin.get();

    return 0;
}