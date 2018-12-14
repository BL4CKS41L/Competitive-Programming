#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
   int A,D,aux=0;

   vector<int> atack;
   vector<int> defend;

while(cin>>A>>D  && A!=0 && D !=0 ){
     
     for(int i = 0; i <A ; i++) {
         cin>>aux;
       atack.push_back(aux);
     }
      for(int i = 0; i <D ; i++) {
         cin>>aux;
       defend.push_back(aux);
     }
    sort(atack.begin(), atack.end() );
     sort(defend.begin(), defend.end());

     if(atack[0] < defend[1]){
       cout<<"Y\n";
     } else{
       cout<<"N\n";
     }
     aux=0;
atack.clear();
defend.clear();
}


    return 0;
}