#include<iostreeam>
using namespace std;
void update(int* a, int* b) {
    int sum = abs(*a + *b);
    int diff = abs(*a - *b);
    *a = sum;
    *b = diff;
}

int main()
{
    int a, b;
    cin >> a >> b;
    update(&a, &b);
    cout << a << endl;
    cout << b;
    return 0;
}