#include <iostream>
#include <cstdio>

using namespace std;

int n, x;

int main()
{
    cin >> n >> x;
    int sum = 0;
    for (int i = 0, ai; i < n; ++i)
    {
        cin >> ai;
        sum += ai;
    }
    cout << (x == sum + n - 1 ? "YES" : "NO") << endl;
    return 0;
}
