#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


bool mycompare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}

int main()
{
    int arr[] = {10, 16, 7, 14, 5, 3, 12, 9};

    vector<pair<int, int>> vii;

    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        vii.push_back(make_pair(arr[i], i));
    }

    sort(vii.begin(), vii.end(), mycompare);

    for (int i = 0; i < vii.size(); i++)
    {
        arr[vii[i].second] = i;
    }

    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}