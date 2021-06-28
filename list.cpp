#include<iostream>
#include<list>
using namespace std;

void display(list<int>&l)
{
    cout<<"List elements are"<<endl;
    for(auto it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
}

int main()
{
    int n,x;
    cout<<"Enter size"<<endl;
    cin>>n;
    list<int>l;
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        l.push_back(x);
    }
    display(l);
    return 0;
}