#include <bits/stdc++.h>

using namespace std;

int main() {

    int num,flag=1;
    while(flag) {
        scanf("%d", &num);
        if(num==42)
            flag=0;
        else
            printf("%d\n", num);
    }

    return 0;
}
