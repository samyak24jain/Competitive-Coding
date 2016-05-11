// https://www.hackerearth.com/code-monk-stacks-queues/algorithm/monk-and-power-of-time/

#include <bits/stdc++.h>
using namespace std;

#define sd(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define pnl printf("\n");
#define ll long long int


int main() {
    int n,t,a,b,x,i;
    sd(n);
    queue <int> co,io;
    
    for(i=0;i<n;i++)
    {
        sd(x);
        co.push(x);
    }
    for(i=0;i<n;i++)
    {
        sd(x);
        io.push(x);
    }
    t = 0;
    while(!co.empty()) {
        a = co.front();
        b = io.front();
        if (a == b) {
            co.pop();
            io.pop();
            t++;
        }
        else {
            co.pop();
            co.push(a);
            t++;
        }
    }
    
    printf("%d", t);
    
	return 0;
}
