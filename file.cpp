#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		string s;
		cin>>s;

        bool flag = true;
		map<char,int> mp;
		for(int i=0; i<n; i++) {
			mp[s[i]]++;
		}


		for(auto it: mp) {


			if(it.second > n/2) flag = false;

		}

		if(flag) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;


	}

	return 0;
}