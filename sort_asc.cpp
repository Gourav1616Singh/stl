#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void sort_asc(vector<int>&v)
{
    sort(v.begin(),v.end());
}

int main()
{
    int size,x;
    vector<int>v;
    cout<<"Enter size"<<endl;
    cin>>size;
    cout<<"Enter vector elements"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort_asc(v);
    cout<<"After sorting"<<endl;
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}