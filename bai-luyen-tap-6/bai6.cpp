#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

void generatePermutations(vector<char>& str, int K)
{
    set<string> permutations;
    sort(str.begin(), str.end());
    do
    {
        string perm = "";
        for (int i = 0; i < K; ++i)
        {
            perm += str[i];
        }
        permutations.insert(perm);
    } while (next_permutation(str.begin(), str.end()));

    for (const auto& perm : permutations)
    {
        cout << perm << endl;
    }
}

int main()
{
    int N, K;
    cin >> N >> K;
    vector<char> str = { 'a' };
    while (N > 1)
    {
        str.push_back(str.back() + 1);
        N--;
    }
    generatePermutations(str, K);

    return 0;
}
