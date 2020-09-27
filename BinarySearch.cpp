#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    printf("Input data limit: ");
    scanf("%d", &n);

    int arr[n];

    printf("Input data: \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int searchKey;

    printf("Input search key: ");
    scanf("%d", &searchKey);

    int first = 0;
    int last = n - 1;

    while(first <= last)
    {
        int mid = (first + last) / 2;

        printf("%d%d%d", first, mid, last );

        if(searchKey == arr[mid])
        {
            printf("Searched data found on index num: %d", mid);
        }
        else if(searchKey > arr[mid])
        {
            first = mid - 1;
        }
        else
        {
            last = mid + 1;
        }
    }
}
