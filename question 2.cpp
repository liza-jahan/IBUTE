
#include<bits/stdc++.h>
using namespace std;

// Function to print all sub strings
void subString(string arr, int n)
{

    for (int len = 1; len <= n; len++)
    {

        for (int i = 0; i <= n - len; i++)
        {

            int j = i + len - 1;
            for (int k = i; k <= j; k++)
                cout << arr[k];

            cout << endl;
        }
    }
}


int main()
{
    string arr;
    cin>>arr;
    subString(arr,arr.length());
    return 0;
}
