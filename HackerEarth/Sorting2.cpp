//Problem Link : https://www.hackerearth.com/code-monk-sorting/algorithm/chandu-and-his-girlfriend-returns/
//Problem Name : Chandu and his Girlfriend Returns

#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000005

#define sd(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define pnl printf("\n")
#define ll long long

void printArray(ll arr[], ll n) {
    ll i;
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
    pnl;
}

void merge(ll L[], ll R[], ll p, ll q) {
	ll i,j,k,arr[p+q];
	i=0;
	j=0;
	k=0;

	while(i<p && j<q) {
		if(L[i] <= R[j]) {
			arr[k] = R[j];
			j++;
		} else {
			arr[k] = L[i];
			i++;
		}
		k++;
	}

	while(i<p) {
		arr[k] = L[i];
		k++;
		i++;
	}

	while(j<q) {
		arr[k] = R[j];
		k++;
		j++;
	}
    printArray(arr, p+q);
}


int main() {
	
	ll t,n,m,i;
	
	sl(t);
	while(t--) {
	    sl(n);
	    sl(m);
	    ll a[n], b[m];
	    for(i=0; i<n; i++)
	        sl(a[i]);
	    for(i=0; i<m; i++)
            sl(b[i]);	    
        merge(a, b, n, m);
	}
	
	return 0;
}
