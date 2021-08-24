#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  int t;
  cin>>t;
  for(int i=1; i<=t; i++)
{
int h;
cin>>h;

vector<pair<char,int>> condition;
condition.resize(h);

vector<int> ul;
vector<int> ll;
vector<int> final;

for(int j=0; j<=condition.size(); j++){
    cin>>condition[j].first>>condition[j].second;

      if(condition[j].first=='L'){
          ul[j]=condition[j].second;
      }
      else if(condition[j].first=='R'){
          ll[j]=condition[j].second;
      }

    final[j] = (ul[j]-ll[j]);  
}

sort(final.begin(), final.end());

for(int j=0; j<=final.size(); j++){
    if(ul[j]<ll[j]){
        cout<<"-1"<<endl;
    }
    else if((ul[j]-ll[j])==1){
        cout<<"-1"<<endl;
    }
    else{
          cout<<(final[0]-1)<<endl;
    }
}

}

return 0;
}