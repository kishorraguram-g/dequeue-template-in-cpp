#include<iostream>
#include<algorithm>
#include<typeinfo>
#include<deque>
using namespace std;
int main(){
     deque<int>res;
    
      res.push_back(5);
      res.push_front(1);
      for (int i:res)
       res.push_back(i+1);
      cout<<endl;
      for(int i:res)
        cout<<i<<" ";
      cout<<endl;
      cout<<res.size();
      cout<<res.back()-1;
      for (int i:res)cout<<i<<" ";
      cout<<endl;
      cout<<res.at(2)<<endl;
    cout<<res.front()<<endl;
    cout<<res.back()<<endl;
    auto it=res.begin();
    cout<<typeid(it).name()<<endl;
    
    reverse(res.begin(),res.end());
    for (int i:res)
      cout<<i<<" ";
    cout<<endl;
}