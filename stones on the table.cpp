#include <iostream>
using namespace std;

int main(){
    int x, count=0;
    string s;
    cin>>x;
    cin>>s;
    for(int i=0;i<x;i++)
    {
        if(s[i] == s[i+1])
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
