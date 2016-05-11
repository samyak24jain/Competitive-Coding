#include <bits/stdc++.h>

using namespace std;

int main() {

    int t,i,j;
    scanf("%d", &t);
    char str[t][200];
    for(i=0;i<t;i++)
        scanf("%s", &str[i]);

    for(i=0;i<t;i++)
    {
        for(j=0;j<strlen(str[i])/2;j+=2)
            printf("%c", str[i][j]);
        printf("\n");
    }

    return 0;
}
