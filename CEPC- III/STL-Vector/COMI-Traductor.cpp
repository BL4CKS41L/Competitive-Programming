#include <bits/stdc++.h>
using namespace std;
int main() {
    int D,W=0,auxD=0,j;
    bool x=1;
    vector <int> aliens;
    
    cin>>D >> W;
    for(int i = 0; i < D; i++) {
        
        cin>>auxD;
        aliens.push_back(auxD);
        cin>>auxD;
        aliens.push_back(auxD);
    }
   auxD=0;
    for(int k = 0; k < W; k++)  { 
                cin>>auxD;
        for( j = 0; j < aliens.size(); j+=2) {  
            if (aliens[j]==auxD) { // SI se encuantra el elemento se imprime y se rompe el ciclo
                cout<<aliens[j+1]<<"\n";
                break;
            }
        }
        if(j == aliens.size())  //si el iterador j llega al final del arreglo y no encontro el elemento imprime C?
            cout<<"C?\n";
        

    } //primer for
    
    return 0;
}

//Forma vergas
 /* 
 map<int,int> mapa;
cin >> A >> B;
mapa[A] = B;

for(int i=0;i<W;i++){
    cin >> w;
    if(!mapa.count(w)){
        cout << "C?\n";
    }else cout << mapa[w] << "\n";
}*/
