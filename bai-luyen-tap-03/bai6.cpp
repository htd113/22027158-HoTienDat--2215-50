﻿#include <iostream>
using namespace std;

struct Rectangle {
    int height;
    int length;
    Rectangle() : height(0), length(0) {}
    Rectangle(int h, int l) : height(h), length(l) {}

    int getPerimeter() {
        return 2 * (height + length);
    }

    void print() {
        for (int i = 0; i < height; ++i) {
            for (int j = 0; j < length; ++j) {
                if (i == 0 || i == height - 1 || j == 0 || j == length - 1) {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
};

int compare(Rectangle a, Rectangle b) {
    if (a.getPerimeter() < b.getPerimeter()) return -1;
    if (a.getPerimeter() > b.getPerimeter()) return 1;
    return 0;
}

int main()
{
    Rectangle a, b;
    cin >> a.height >> a.length;
    cin >> b.height >> b.length;
    cout << a.getPerimeter() << " " << b.getPerimeter() << endl;
    a.print();
    b.print();
}