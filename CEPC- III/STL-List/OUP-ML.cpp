#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
char tmp; int k;
list<int> li;
//cin>>tmp>>k;
while(cin>>tmp && tmp != '#'){
    cin>>k;
if(tmp == '+'){
 li.push_back(k);
} else{
    
   list<int>::iterator  it1= li.begin();
   advance(it1,k);
   li.erase(it1);
    //it1 = li.rbegin()+k;      
    }
} // fin while

for(int i=0;i<li.size();i++){
    
cout<<li.front();
cout<<" -> ";
li.pop_front();
if(li.size() == 1 ) {   
    //cout << "****";
    cout<<li.front();
    li.pop_front();
    break;
    }
   
} // fin for

return 0;
}

/* 
+ 3
+ 7
+ 9
- 0
+ 8
#
 */