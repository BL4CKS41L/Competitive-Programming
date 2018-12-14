#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    int T,cases=0;
    
    cin >> T;

    while(T--){   //casos de prueba T
    vector<int> arreglo;
    int aux;
        for (int i = 0; i < 7; i++)  {  
            cin >> aux;
            arreglo.push_back(aux); 
            }
        
        //aux = 0;
        sort(arreglo.begin()+4, arreglo.end());

        int aux2=0;
        for(int i = 0; i < 4; i++){ 
            aux2+=arreglo[i];
        }
        
        aux2+= ( (arreglo[5] + arreglo[6]) / 2 ) ;
        
        printf ("Case %d: ",++cases);
        if (aux2 >= 90) cout << "A";
        else if (aux2 >= 80 ) cout << "B";
        else if (aux2 >= 70 ) cout << "C";
        else if (aux2 >= 60 ) cout << "D";
        else cout << "F";
        cout<<"\n";

        arreglo.clear();
        aux = 0,cases=0;
        aux2 = 0;
    }

    return 0;
}