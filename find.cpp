#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>v{1,2,3,2,4,2,5};
    find(v.begin(),v.end(),0)!=v.end()?cout<<"Element found" : cout<<"Element not found";
    return 0;
}