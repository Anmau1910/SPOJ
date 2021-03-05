#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main()
{
	int cases;
	cin>>cases;
	int acc;
	while(cases--)
	{
		cin>> acc;
		vector<string> v;
		string st, s1, s2, s3, s4, s5, s6; 
		while(acc--)
		{
			cin>>s1>>s2>>s3>>s4>>s5>>s6;
			st= s1+ " " +s2+ " " +s3+ " " +s4+ " " +s5+ " " +s6;
			v.push_back(st);
		}
		
		sort(v.begin(), v.end());
		string last = v[0];
		int c = 1;
		for(int i = 1; i < v.size()+1; i++) {
			if(v[i] == last){
				c++;
			} else if (v[i] != last) {
				cout <<last<<" "<<c<< endl;
				c = 1;
				last = v[i];
			}
		}
				
	cout<<endl;
	}
	return 0;
}