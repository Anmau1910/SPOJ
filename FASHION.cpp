#include<iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
	int t_cases;
	cin>> t_cases;
	while(t_cases--)
	{
		int dat, val1;
		vector<int> h;
		vector<int> m;
		cin>>dat;
		int val= dat;
		while(dat--)
		{
			cin>>val1;
			h.push_back(val1);
		}
		while(val--)
		{
			cin>>val1;
			m.push_back(val1);
		}
		sort(m.begin(), m.end());
		sort(h.begin(), h.end());
		cout<< inner_product(m.begin(), m.end(), h.begin(), 0)<<endl;
	}
}
