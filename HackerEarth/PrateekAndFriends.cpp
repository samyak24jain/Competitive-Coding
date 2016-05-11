// Problem Link : https://www.hackerearth.com/code-monk-array-strings/algorithm/prateek-and-his-friends/

#include <bits/stdc++.h>
using namespace std;

#define sd(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define pnl printf("\n");

int main() {
	
	int t,flag;
	long long int n,x,i,j,sum;
	sd(t);
	while(t--) {
	    flag = 0;
	    
	    sl(n);sl(x);
	    long long int cost[n];
	    
	    for(i=0;i<n;i++) {
	        sl(cost[i]);
	    }
	
	    for(i=0;i<n;i++) {
	        sum = 0;
	        for(j=i;j<n;j++) {
	            sum += cost[j];
    	        if(sum == x)
    	        {
    	            flag = 1;
    	            break;
    	        } 
    	        else if(sum > x)      
                    break;
	        }
	        if(flag == 1)
	        	break;
	    }
	    
	    if(flag == 1)
	        printf("YES\n");
	    else
	        printf("NO\n");
	        
	}
	return 0;
}
