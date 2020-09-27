#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;

    scanf("%d", &N);

    for(int i = 0; ;i++)
    {
        N++;
        int a = N/1000;
        int b = N/100 % 10;
        int c = N/10 % 10;
        int d = N % 10;

        if(a!=b && a!=c && a!=d && b!=c && c!=d && b!=d)
        {
            printf("%d", N);
            break;
        }
    }
}
