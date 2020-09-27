#include<bits/stdc++.h>
#include<queue>

using namespace std;

int main()
{
    queue <int> q;

    int T, in;
    char mode;

    scanf("%d", &T);

    while(T)
    {
        scanf("%c", &mode);
        printf("%c", mode);

        if(mode == 'D')
        {
            q.pop();
        }
        else
        {
            scanf("%d", &in);
            q.push(in);
        }


        T--;
    }

    while(!q.empty())
    {
        printf("Size : %d\n", q.size());
        printf("%d\n", q.front());
        q.pop();
    }
}
