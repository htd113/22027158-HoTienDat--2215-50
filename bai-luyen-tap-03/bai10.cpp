#include <iostream>
using namespace std;

bool check(int* a, int n) {
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1] >= a[i]) count++;
    }
    return count == n - 1;
}

int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2) {
    int* ans = new int[lenArr1 + lenArr2];
    int firstIndex = 0, secondIndex = 0, mergeIndex = 0;

    // Merging in increasing order
    if (check(firstArr, lenArr1) && check(secondArr, lenArr2)) {
        while (firstIndex < lenArr1 && secondIndex < lenArr2) {
            if (firstArr[firstIndex] <= secondArr[secondIndex]) {
                ans[mergeIndex++] = firstArr[firstIndex++];
            }
            else {
                ans[mergeIndex++] = secondArr[secondIndex++];
            }
        }
        while (firstIndex < lenArr1) {
            ans[mergeIndex++] = firstArr[firstIndex++];
        }
        while (secondIndex < lenArr2) {
            ans[mergeIndex++] = secondArr[secondIndex++];
        }
    }
    // Merging in decreasing order
    else {
        while (firstIndex < lenArr1 && secondIndex < lenArr2) {
            if (firstArr[firstIndex] >= secondArr[secondIndex]) {
                ans[mergeIndex++] = firstArr[firstIndex++];
            }
            else {
                ans[mergeIndex++] = secondArr[secondIndex++];
            }
        }
        while (firstIndex < lenArr1) {
            ans[mergeIndex++] = firstArr[firstIndex++];
        }
        while (secondIndex < lenArr2) {
            ans[mergeIndex++] = secondArr[secondIndex++];
        }
    }
    return ans;
}

int main() {
    int m, n;
    cin >> m >> n;
    int* firstArr = new int[m];
    int* secondArr = new int[n];

    for (int i = 0; i < m; i++) {
        cin >> firstArr[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> secondArr[i];
    }

    int* mergedArr = merge(firstArr, m, secondArr, n);

    for (int i = 0; i < m + n; i++) {
        cout << mergedArr[i] << " ";
    }
    cout << endl;

    delete[] firstArr;
    delete[] secondArr;
    delete[] mergedArr;

    return 0;
}
