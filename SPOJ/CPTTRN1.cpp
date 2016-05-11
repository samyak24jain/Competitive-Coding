#include <bits/stdc++.h>

using namespace std;

int main() {

    int i,j,t,k;
    scanf("%d", &t);
    int a[t][2];
    for(i=0;i<t;i++)
        scanf("%d %d", &a[i][0], &a[i][1]);

    for(i=0;i<t;i++)
    {
        for(j=0;j<a[i][0];j++)
        {
            for(k=0;k<a[i][1];k++)
            {
                if(j%2==0)
                {
                    if(k%2==0)
                        printf("*");
                    else
                        printf(".");
                }

                else
                {
                    if(k%2==0)
                        printf(".");
                    else
                        printf("*");
                }

            }
            printf("\n");
        }
    }
    return 0;
}
