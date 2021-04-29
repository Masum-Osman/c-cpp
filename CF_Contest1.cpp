#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;

    int arr[n];

    for(int i = 0; i< n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] >= 3 && arr[i] <= 1)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
