#include <numeric> // for std::gcd
using namespace std;
class Fraction {
    int a, b;
public:
    Fraction(int a = 1, int b = 1) {
        this->a = a;
        this->b = b;
    }
    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }
    friend ostream& operator<<(ostream& os, const Fraction& f) {
        if (f.b != 0) {
            os << f.a << "/" << f.b << endl;
            return os;
        }
        else {
            os << "invalid" << endl;
            return os;
        }
    }

    Fraction operator+(const Fraction& f) const {
        int numerator = a * f.b + f.a * b;
        int denominator = b * f.b;
        Fraction result(numerator, denominator);
        result.simplify();
        return result;
    }

    Fraction operator-(const Fraction& f) const {
        int numerator = a * f.b - f.a * b;
        int denominator = b * f.b;
        Fraction result(numerator, denominator);
        result.simplify();
        return result;
    }

    Fraction operator*(const Fraction& f) const {
        int numerator = a * f.a;
        int denominator = b * f.b;
        Fraction result(numerator, denominator);
        result.simplify();
        return result;
    }

    Fraction operator/(const Fraction& f) const {
        int numerator = a * f.b;
        int denominator = b * f.a;
        Fraction result(numerator, denominator);
        result.simplify();
        return result;
    }

    void simplify() {
        int ucln = gcd(a, b);
        a /= ucln;
        b /= ucln;
    }

    bool operator>(const Fraction& f) const {
        return a * f.b > f.a * b;
    }

    bool operator<(const Fraction& f) const {
        return a * f.b < f.a * b;
    }
};