#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>v{1,2,2,4,5,6,7};
    auto a=lower_bound(v.begin(),v.end(),3);
    auto b=upper_bound(v.begin(),v.end(),3);
    cout<<"Lower bound position : "<<a-v.begin()<<endl;
    cout<<"upper bound position : "<<b-v.begin();
    return 0;
}