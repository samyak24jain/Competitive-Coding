//Problem Link : https://www.hackerearth.com/code-monk-array-strings/algorithm/chandu-and-consecutive-letters/

#include <bits/stdc++.h>
using namespace std;

#define sd(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define pnl printf("\n");

int main() {
	
	int t,i,length,j;
	char ch,ch2,str[30];
	sd(t);
	while(t--) {
	    cin >> str;
	    length = strlen(str);
	    for(i=0; i < length-1; i++) {
            ch = str[i];
            ch2 = str[i+1];
            if(ch == ch2) {
                for(j=i+1;j<length-1;j++)
                    str[j] = str[j+1];
                str[j] = '\0';
                length = strlen(str);
                i--;
            }
            
	    }
	    cout << str <<endl;
	}
	
	return 0;
}