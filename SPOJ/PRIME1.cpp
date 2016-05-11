#include <bits/stdc++.h>

using namespace std;

int main() {

    int t,flag;
    scanf("%d", &t);
    unsigned long int m,n,i,j,k,cases[t][2];

    for(i=0;i<t;i++)
        scanf("%d %d", &cases[i][0], &cases[i][1]);

    for(i=0;i<t;i++) {
        m = cases[i][0];
        n = cases[i][1];
        if(m == 1)
            m = m + 1;
        if(m == 2)
            printf("%d\n", m);
        if(m % 2 == 0)
            m = m + 1;
        for(j=m;j<=n;j=j+2)
        {
            flag = 0;
            for(k=2;k<=sqrt(j);k++)
            {
                if(j%k == 0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                printf("%d\n", j);
        }
        printf("\n")
;    }
    return 0;
}
