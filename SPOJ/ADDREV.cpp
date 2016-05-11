#include <bits/stdc++.h>

using namespace std;

int reverse(int x) {
    int rev=0,digit;
    while(x != 0)
    {
        digit = x%10;
        rev = rev*10 + digit;
        x = x/10;
    }
    return rev;
}

int main() {

    int t,a,b,c;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &a, &b);
        a = reverse(a);
        b = reverse(b);
        c = reverse(a + b);
        printf("%d\n", c);
    }
    return 0;
}
