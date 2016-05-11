// Problem Link : https://www.hackerearth.com/code-monk-array-strings/algorithm/terrible-chandu/

#include <bits/stdc++.h>
using namespace std;

#define sd(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define pnl printf("\n");

int main() {
	
	int t,i;
	string str,temp;
	sd(t);
	while(t--) {
	    cin >> str;
	    temp = "";
	    for(i = str.size()-1; i>=0; i--)
	        temp += str[i];
	    cout << temp <<endl;
	}
	
	return 0;
}
