#include "MyForm1.h"
#include <iostream>
#include <cmath>

using namespace std;

// Clase base para las figuras geométricas
class FiguraGeometrica {
public:
    virtual double calcularArea() const = 0;
    virtual double calcularPerimetro() const = 0;
};

// Clase para un cuadrado
class Cuadrado : public FiguraGeometrica {
private:
    double lado;

public:
    Cuadrado(double lado) : lado(lado) {}

    double calcularArea() const override {
        return lado * lado;
    }

    double calcularPerimetro() const override {
        return 4 * lado;
    }
};

// Clase para un triángulo
class Triangulo : public FiguraGeometrica {
private:
    double base, altura;

public:
    Triangulo(double base, double altura) : base(base), altura(altura) {}

    double calcularArea() const override {
        return 0.5 * base * altura;
    }

    double calcularPerimetro() const override {
        // En este ejemplo, asumimos que es un triángulo equilátero
        return 3 * base;
    }
};

int main() {
    char opcion;
    cout << "Elija una figura geométrica (C para cuadrado, T para triángulo): ";
    cin >> opcion;

    FiguraGeometrica* figura = nullptr;

    if (opcion == 'C' || opcion == 'c') {
        double lado;
        cout << "Ingrese el lado del cuadrado: ";
        cin >> lado;
        figura = new Cuadrado(lado);
    } else if (opcion == 'T' || opcion == 't') {
        double base, altura;
        cout << "Ingrese la base del triángulo: ";
        cin >> base;
        cout << "Ingrese la altura del triángulo: ";
        cin >> altura;
        figura = new Triangulo(base, altura);
    } else {
        cout << "Opción no válida." << endl;
        return 1;
    }

    double area = figura->calcularArea();
    double perimetro = figura->calcularPerimetro();

    cout << "Área: " << area << endl;
    cout << "Perímetro: " << perimetro << endl;

    delete figura;

    return 0;
}
