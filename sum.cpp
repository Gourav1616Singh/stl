#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

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
    cout<<"Sum of vector elements "<<accumulate(v.begin(),v.end(),0);
    return 0;
}