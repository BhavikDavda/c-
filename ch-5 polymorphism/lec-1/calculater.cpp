#include <iostream>
using namespace std;

class Calculat {
public:
    int calculat(int a, int b) {
        return a / b;
    }

    int calculat(int a, int b, int c) {
        return a - b - c;
    }

    int calculat(int a, int b, int c, int d) {
        return a * b * c * d;
    }

    int calculat(int a, int b, int c, int d ,int e) {
        return a+b+c+d+e;
    }
};

class calc : public Calculat {
public:
    void calculate() {
        cout << "Division: " << calculat(112, 2) << endl;
        cout << "Subtraction: " << calculat(20, 5, 30) << endl;
        cout << "Multiplication: " << calculat(21, 37, 54, 55) << endl;
        cout << "Addition: " << calculat(11, 23, 43, 54, 96) << endl;
    }
};

int main() {
    calc c;
    c.calculate();
    return 0;
}


