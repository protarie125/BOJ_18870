#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> inputs{};
map<int, int> crd{};

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N;
    cin >> N;

    inputs = vector<int>(N);

    for (int n = 0; n < N; ++n)
    {
        int x;
        cin >> x;

        inputs[n] = x;
    }

    vector<int> cpy(inputs);
    sort(cpy.begin(), cpy.end());

    int count{ 0 };
    for (const auto& v : cpy)
    {
        if (crd.end() == crd.find(v)) {
            crd.insert({ v, count });
            count += 1;
        }
    }

    for (const auto& var : inputs)
    {
        cout << crd[var] << ' ';
    }

    return 0;
}