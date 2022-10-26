#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s,s1;
    int n,i,x; cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        s.push(x);
    }
    while(!s.empty()){
        x=s.top();s.pop();
        if(s1.empty() || s1.top() <x) s1.push(x);
        else{
            while(!s1.empty() && s1.top() >x){
                s.push(s1.top());
                s1.pop();
            }
         s1.push(x);
        }
    }
    while(!s1.empty()){
        s.push(s1.top());s1.pop();
    }
    while(!s.empty()){
        cout<<s.top()<<" ";s.pop();
    }
}