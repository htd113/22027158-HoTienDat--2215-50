// bai3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct Complex {
    // your code goes here
    // Cac bien thanh vien
    // your code goes here
    // Hai ham khoi tao
    int a, b;
    Complex(int xa = 0, int xb = 0) : a(xa), b(xb) {}
    double abs() {
        // your code goes here
        double ans = sqrt(pow(a, 2) + pow(b, 2));
        return ans;
    }

    void print() {
        // your code goes here

        if (b == 0)
        {
            if (a == 0) cout << "0" << endl;
            else cout << a << endl;
        }
        else if (b == 1)
        {
            if (a == 0) cout << "i" << endl;
            cout << a << "+i" << endl;
        }
        else if (b == -1)
        {
            if (a == 0) cout << "-i" << endl;
            else cout << a << "-i" << endl;
        }
        else if (b > 0)
        {
            if (a == 0) cout << "+" << b << "i" << endl;
            else cout << a << "+" << b << "i" << endl;
        }
        else if (b < 0)
        {
            if (a == 0) cout << b << "i" << endl;
            else cout << a << b << "i" << endl;
        }
    }
};

Complex add(Complex A, Complex B) {
    // your code goes here
    return Complex(A.a + B.a, A.b + B.b);
}
int main()
{
    // test ham in
    Complex a(1, 1), b(0, -2), c(4, 0), d(4, -1), e(0, 0);
    a.print();
    b.print();
    c.print();
    d.print();
    e.print();
    return 0;
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
