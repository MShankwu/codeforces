#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int N;
long long Ans;
vector<int> P, Block;

int main()
{
    freopen("input.txt", "r", stdin);

    cin >> N;
    for (int i = 0, pi; i < N; ++i)
    {
        scanf("%d", &pi);
        P.push_back(pi - 1);
    }

    vector<bool> subway(N, false);
    for (int i = 0; i < N; ++i)
    {
        int target = P[i], scale = 0;
        while (!subway[target])
        {
            ++scale;
            subway[target] = true;
            target = P[target];
        }
        if (scale > 0) Block.push_back(scale);
    }

    sort(Block.begin(), Block.end(), greater<int>());

    if (Block.size() >= 2)
    {
        for (size_t i = 2; i < Block.size(); ++i)
        {
            Ans += 1LL * Block[i] * Block[i];
        }
        Block[0] += Block[1];
    }

    Ans += 1LL * Block[0] * Block[0];
    cout << Ans << endl;
    return 0;
}
