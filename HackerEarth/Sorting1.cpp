//Problem Link : https://www.hackerearth.com/code-monk-sorting/algorithm/chandu-and-his-girlfriend/

#include <bits/stdc++.h>
using namespace std;

#define sd(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define pnl printf("\n");
#define ll long long

void merge(ll int arr[],ll int l,ll int m,ll int r) {
    ll int i, j, k;
    ll int n1 = m - l + 1;
    ll int n2 =  r - m;

    ll int L[n1], R[n2];

    for(i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
    
}


void mergeSort(long long int arr[], long long int l, long long int r) {
    if (l < r) {
        long long int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}


int main() {
	
	int t;
	long long int i,n;
	
	sd(t);
	while(t--) {
	    sl(n);
	    long long int a[n];
	    for(i=0;i<n;i++)
	        sl(a[i]);
	    mergeSort(a,0,n-1);
	    for(i=n-1;i>=0;i--)
	        printf("%lld ", a[i]);
	    pnl;
	}
	
	return 0;
}

