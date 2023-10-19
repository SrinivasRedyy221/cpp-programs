#include <bits/stdc++.h>
using namespace std;

void dp(int i, int arr[], int n, vector<vector<int>> &ans, vector<int> &temp)
{
    if (i == n)
    {
        ans.push_back(temp);
        return;
    }
    temp.push_back(arr[i]);
    dp(i + 1, arr, n, ans, temp);
    temp.pop_back();
    dp(i + 1, arr, n, ans, temp);
}

int main()
{
    int arr[] = {3, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<vector<int>> ans;
    vector<int> temp;
    dp(0, arr, n, ans, temp);
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}