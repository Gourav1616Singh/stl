#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>v{1,2,2,4,5,6,7};
    int x=binary_search(v.begin(),v.end(),2);
    if(x){
        cout<<"Element found ";
    }else{
        cout<<"Element is not found";
    }
    return 0;
}
