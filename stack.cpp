#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> s;
    int n, i = 0;

    char t,a;
    scanf("%c", &t);
    scanf("%c", &a);

    /*scanf("%d", &n);

    while(i < n) {
        scanf("%c", &t);
        s.push(t);
        i++;
    }


    while(n >= 0) {
        printf("%c\n", s.top());
        s.pop();
        n--;
    }*/

    s.push(t);
    s.push(a);


    printf("%d\n", s.size());
    printf("%c\n", s.top());
}
