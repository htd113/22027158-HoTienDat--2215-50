#include <iostream>
#include <cstring> 
using namespace std;
void rFilter(char* s)
{
    // Your code goes here
    if (!s) return;

    char* right = s + strlen(s) - 1;

    while (right >= s) {
        if ((*right >= 'a' && *right <= 'z') || (*right >= 'A' && *right <= 'Z'))   --right;

        else {
            *right = '_';
            --right;
        }
    }
}

int main() {
    char myString[] = " example122";
    rFilter(myString);
    cout << myString;
    return 0;
}
