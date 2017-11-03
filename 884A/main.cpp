#include <iostream>
#include <cstdio>

using namespace std;

int n, t, ans;

int main()
{
    cin >> n >> t;
    for (int i = 0, ai; i < n && t > 0; ++i)
    {
        cin >> ai;
        t -= 86400 - ai;
        ++ans;
    }
    cout << ans << endl;
}
