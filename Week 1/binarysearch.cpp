// BINARY SEARCH

#include<iostream>
#include<vector>
using namespace std;

int main()
{

	int t;
	while(t--)
	{
		int c,n,target,mid,l,r;
		c=1;
		target=0;
		cin>>n;
		vector<int> vec;
	        for(int i=0;i<n;i++)
	       {
			int a;
			cin>>a;
			vec.push_back(a);
		}
		cin>>target;
		l=vec[0];
		r=vec[n-1];
		while(l<=r)
		{
			mid=l+(r-l)/2;
			if(vec[mid]==target)
			{
				cout<<"Present "<<c;
				c++;
				break;
			}
			else(vec[mid]<target)
			l=mid+1;
			else
			r=mid-1;
		}		
		if(c==1)
		cout<<"Not Present "<<n/2;;
		vec.clear();		
	}	
	
	return 0;
}
