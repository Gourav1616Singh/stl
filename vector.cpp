#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&v)
{
    cout<<"Vector elements are"<<endl;
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
}

int main()
{
    int n,x;
    cout<<"Enter vector size"<<endl;
    cin>>n;
    vector<int>v;
    cout<<"Enter vector elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    display(v);
    return 0;
}