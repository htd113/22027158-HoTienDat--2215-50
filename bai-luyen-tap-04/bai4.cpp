#include<iostream>
using namespace std;
struct Time {
    // your code goes here
    // Cac bien thanh vien
    // your code goes here
    // Hai ham khoi tao
    int h;
    int m;
    int s;
    Time() : h(0), m(0), s(0) {}
    Time(int H, int M, int S) : h(H), m(M), s(S) {}
    int second() {
        // your code goes here
        return h * 60 * 60 + m * 60 + s;
    }

    void print() {
        // your code goes here
        int totalSeconds = second();
        int hours = totalSeconds / 3600;
        int minutes = (totalSeconds % 3600) / 60;
        int seconds = totalSeconds % 60;

        if (hours < 10) cout << "0";
        cout << hours << ":";

        if (minutes < 10) cout << "0";
        cout << minutes << ":";

        if (seconds < 10) cout << "0";
        cout << seconds << endl;

    }
};

Time normalize(int hour, int minute, int second) {
    // your code goes here
    int totalSeconds = hour * 3600 + minute * 60 + second;
    Time time(totalSeconds / 3600, (totalSeconds % 3600) / 60, totalSeconds % 60);
    return time;
}

int main()
{
    Time x;
    cin >> x.h;
    cin >> x.m;
    cin >> x.s;
    x.print();
    cout << x.second()<<endl;
    normalize(x.h, x.m, x.s).print();
}