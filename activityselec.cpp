#include<bits/stdc++.h>
using namespace std;

//......................................................
bool compare(pair<int,int> &a,pair<int,int> &b)
{
	if(a.second==b.second)
		return (a.first < b.first);

     return (a.second < b.second ); 
}
//......................................................

int main()
{
	vector<pair<int,int>>v;
	int i,n,x,y;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x>>y;
		v.push_back({x,y});

	}

      int j=1,k=0;
	sort(v.begin(),v.end(),compare);
		for(i=0;i<n;i++)
		{ 
			
            if(v[i].second < v[j].first)
            	{
            		k++;
            		j++;
            	}	
            else
            	i++;
            	j++;


		}


	cout<<k;
	return 0;
}
