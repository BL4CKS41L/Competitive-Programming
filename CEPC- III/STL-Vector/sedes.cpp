#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    vector <int> arreglo;
    int N,aux=0;
    cin>>N;

    for(int i = 0; i < N; i++){
        cin>> aux;
        arreglo.push_back(aux);
    }
    sort(arreglo.begin(),arreglo.end() );
    int result = arreglo[N-1] - arreglo[0];
        cout<<result;
    arreglo.clear();
    return 0;
}
 


/* 6
2 3 5 7 8 9 */
