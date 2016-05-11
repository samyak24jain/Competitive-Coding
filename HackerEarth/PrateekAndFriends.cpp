// Problem Link : https://www.hackerearth.com/code-monk-array-strings/algorithm/prateek-and-his-friends/

#include <bits/stdc++.h>
using namespace std;

#define sd(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define pnl printf("\n");

int main() {
	
	int t,flag;
	long long int n,x,i,sum;
	
	while(t--) {
	    sum = 0;
	    flag = 0;
	    scanf("%lld %lld", &n, &x);
	    long long int cost[n];
	    
	    for(i=0;i<n;i++) {
	        sl(cost[i]);
	    }
	    
	    for(i=0;i<n;i++) {
	        sum += cost[i];
	        if(sum == x)
	        {
	            flag = 1;
	            break;
	        } 
	        else if(sum > x)      
                continue;
	        else 
	            break;
	    }
	    
	    if(flag == 1)
	        printf("YES");
	    else
	        printf("NO");
	        
	}
	return 0;
}
