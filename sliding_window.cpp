#include <iostream>
using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)

int main()
{
    int n;
    int k;

    cin >> n >> k;

    int arr[n];

    rep(i, 0, n)
            cin >>
        arr[i];

    int sum = 0;
    int ans = INT_MAX;

    rep(i, 0, k)
        sum += arr[i];

    ans = min(ans, sum);

    rep(i, 1, n - k + 1)
    {
        sum -= arr[i - 1];
        sum += arr[i + k - 1];
        ans = min(ans, sum);
    }

    cout << ans << endl;

    return 0;
}