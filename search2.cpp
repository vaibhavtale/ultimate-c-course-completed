#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int x;
    cin >> x;

    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == x)
            {
                flag = true;
            }
        }
    }
    if (flag)
    {
        cout << "element is found" << endl;
    }
    else
    {
        cout << "element is not found" << endl;
    }

    return 0;
}