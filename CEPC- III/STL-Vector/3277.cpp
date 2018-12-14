#include <bits/stdc++.h>
using namespace std;
int main(){
    int p,sem=0,i,distancia=0,distancia2=0; 
    bool band=false;
    vector <int> seeds;
    cin>>p;
    for( i = 0; i < p; i++) {
        cin>>sem;
        seeds.push_back(sem);
    }
    sort(seeds.begin(),seeds.end() );
  /* for(int i = 0; i < p; i++) {
      cout <<seeds[i] <<" "; } 
      cout<<"\n"; */ 
  for(i = 0; i < p; i++) {
      distancia= seeds[i+1]-seeds[i];
      distancia2=seeds[i+2] -seeds[1];   
      if ( distancia != distancia2 ) {
          band=true;
          break;
      }
      
    
  } //fin del ciclo
  band == true ? cout<<"YES" : cout<<"NO";
    seeds.clear();
    p=0;
    distancia=0,distancia2=0;

    return 0;
}