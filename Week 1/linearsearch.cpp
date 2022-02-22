#include<iostream>
#include<vector>
using namespace std;

int main()
{

	int t;
	while(t--)
	{
		int c=1,n,target=0;
		cin>>n;
		vector<int> vec;
	    for(int i=0;i<n;i++)
	    {
			int a;
			cin>>a;
			vec.push_back(a);
		}
		cin>>target;
		for(int i=vec.begin();i!=vec.begin();i++)
		{
			if(vec[i]==target)
			{
				cout<<"Present "<<c<<endl;
				c++;	
			}
		}
		if(c==0)
		cout<<"Not Present "<<n;;
		vec.clear();		
	}	
	
	return 0;
}
