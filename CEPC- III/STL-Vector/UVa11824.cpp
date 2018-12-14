#include <bits/stdc++.h>
using namespace std;
 int main(){
     ios_base::sync_with_stdio(false); cin.tie(0);
     int T,Li,aux,i,result=0;
    vector <int>lands;
     cin>>T;
    
    for(i=0;i<T;i++) {
           
        while( cin>>Li && Li != 0){
           lands.push_back(Li);
        }
        sort(lands.rbegin(), lands.rend());
        aux=lands.size();
         for(int j = 0; j < aux; j++) { 
        result += 2*pow(lands[j],j+1); }
        
        if(result>5000000)
            cout<<"Too expensive\n";
        else
        cout<<result<<"\n";

        lands.clear();
        result=0;
       } // fin del testCase
            

    return 0;
}

/* 
3
7
2
10
0
20
29
31
0
42
41
40
37
20
0
*/