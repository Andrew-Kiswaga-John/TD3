#include <iostream>
using namespace std;

class Complex {
private:
    double reelle;
    double imaginaire;

public:
    Complex(double reelle, double imaginaire) : reelle(reelle), imaginaire(imaginaire) {}

    Complex operator+(const Complex& m) {
        double newReelle = reelle + m.reelle;
        double newImaginaire = imaginaire + m.imaginaire;
        return Complex(newReelle, newImaginaire);
    }

    void Affiche1() {
        cout << reelle << " + " << imaginaire << "i" << endl;
    }

    Complex operator-(const Complex& m) {
        double newReelle = reelle - m.reelle;
        double newImaginaire = imaginaire - m.imaginaire;
        return Complex(newReelle, newImaginaire);
    }

    void Affiche2() {
        cout << reelle << " + " << imaginaire << "i" << endl;
    }

    Complex operator/(const Complex& m) {
        double newReelle = (reelle * m.reelle + imaginaire * m.imaginaire) / (m.reelle * m.reelle + m.imaginaire * m.imaginaire);
        double newImaginaire = (imaginaire * m.reelle - reelle * m.imaginaire) / (m.reelle * m.reelle + m.imaginaire * m.imaginaire);
        return Complex(newReelle, newImaginaire);
    }

    void Affiche3() {
        cout << reelle << " + " << imaginaire << "i" << endl;
    }
};

int main() {
    double r1, r2, i1, i2;

    cout << "Partie reelle 1 : ";
    cin >> r1;
    cout << "Partie imaginaire 1 : ";
    cin >> i1;

    cout << "Partie reelle 2 : ";
    cin >> r2;
    cout << "Partie imaginaire 2 : ";
    cin >> i2;

    Complex c1(r1, i1);
    Complex c2(r2, i2);

    Complex sum = c1 + c2;
    sum.Affiche1();

    Complex difference = c1 - c2;
    difference.Affiche2();

    Complex division = c1 / c2;
    division.Affiche3();

    return 0;
}
