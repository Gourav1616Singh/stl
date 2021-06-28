#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>v{1,2,3,2,4,2,5};
    cout<<"Occurance of 2 : "<<count(v.begin(),v.end(),2);
    return 0;
}