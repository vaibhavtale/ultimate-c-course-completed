#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // a 1-D vector

    // vector<int> v(5, 3);

    // for (auto i : v)
    // {
    //     cout << i << endl;
    // }
    // cout << endl;

    // a 2-D vetor

    vector<vector<int>> vii(4, vector<int> (4, 0));

    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 4; j++)
        {

            cout << vii[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}