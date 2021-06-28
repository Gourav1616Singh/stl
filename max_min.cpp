#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void max_min(vector<int>&v)
{
    cout<<"Maximum element is "<<*max_element(v.begin(),v.end())<<endl;
    cout<<"Minimum element is "<<*min_element(v.begin(),v.end());
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
    max_min(v);
    return 0;
}