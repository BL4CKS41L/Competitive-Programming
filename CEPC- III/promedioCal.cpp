#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int N=0,cont=0;
    double result;
    cin>>N;
    double cal[N];
    for(int i = 0; i < N; i++){
        cin>>cal[i];
        if(cal[i]<6.0)
        cont++;
        
    }
    for(int j=0;j<N;j++){
        result += cal[j];
    }

    printf("%.2f",result/N);
    cout<<" "<<cont<<endl;
    
    return 0;
}