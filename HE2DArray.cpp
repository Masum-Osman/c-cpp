#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;

    scanf("%d", &m);
    scanf("%d", &n);

    int arr[m][n];

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }


    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

}
