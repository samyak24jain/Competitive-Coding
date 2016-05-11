// https://www.hackerearth.com/code-monk-stacks-queues/algorithm/monks-love-for-food/

#include <bits/stdc++.h>
using namespace std;

#define sd(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define pnl printf("\n");
#define ll long long int


int main() {
	ll q,a,b;
	sl(q);
	stack <int> s;
	while(q--) {
	    sl(a);
	    if(a == 2)
	        sl(b);
	    if(a == 1) {
	        if(s.empty()) {
	            printf("No Food\n");
	        } else {
	            printf("%d\n",s.top());
	            s.pop();
	        }         
	   } else
	       s.push(b);
	}
    
	return 0;
}
