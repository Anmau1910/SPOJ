#include <iostream>
#include <algorithm>
using namespace std;
#include <vector>

int main() 
{
	
	int sce;
	cin>>sce;
	int num= 0;
	while(sce--)
	{
		num++;
		cout<<"Scenario #"<<num<<":"<<endl;
		int ne, fr;
		cin>>ne>>fr;
		vector<int> st;

		int o;
		for(int i=0; i<fr; i++)
		{
			cin>>o;
			st.push_back(o);
		}

		sort(st.begin(), st.end(), greater<int>());
		int acu=0;
		int con=0;
		while(ne>acu && con<st.size())
		{
			acu+=st[con];
			con++;
		}

		if (ne>acu)
		{
			cout<<"impossible"<<endl;
		}else
		{
			cout<<con<<endl;
		}
	}

	return 0;
}