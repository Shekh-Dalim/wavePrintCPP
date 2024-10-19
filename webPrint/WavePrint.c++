
/*********************  Q:1:Print Like A Wave   *************** */

#include <iostream>
#include <vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for (int j = 0; j < mCols; j++)
    {
        if (j & 1)  //If j is odd, its binary representation ends in 1, so (j & 1) will be 1.
        {
            // Odd Index -> Bottom to top
            for (int i = nRows - 1; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
                ans.push_back(arr[i][j]);
            }
        }
        else   // if (j & 0)If j is even, its binary representation ends in 0, so (j & 1) will be 0.
        {
            // 0 or even Index-> top to bottom
            for (int i = 0; i < nRows; i++)
            {
                cout << arr[i][j] << " ";
                ans.push_back(arr[i][j]);
            }
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int nRows = arr.size();  // Why arr[0] is not used for rows: The total number of rows in the 2D array is obtained from the outer vector, arr. So, you directly call arr.size(), which gives the count of rows.
    int mCols = arr[0].size();  // Why arr[0] is used for columns: To get the number of columns, you need to check the size of an individual row. Since arr[0] is the first row, arr[0].size() gives the number of columns in that row.

    cout << "Wave print result: ";
    vector<int> result = wavePrint(arr, nRows, mCols);

    // cout << "Wave print result: ";
    // for (int num : result)
    // {
    //     cout << num << " ";
    // }
    // cout << endl;

    return 0;
}
