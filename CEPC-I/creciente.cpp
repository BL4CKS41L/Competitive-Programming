#include <iostream>
using namespace std;
int  main(){
    int N,i,array[N];
    bool aux=false;
    //int array[N];
cin >> N;
    
    for( i = 0; i <N; i++)  {
    cin >> array[i];
    }

for( i = 0; i < N; i++) {
     if (array[i] >= array[i+1]) 
          aux=false;;
        break;
       
}

if (aux==true) {
  cout << "YES";
}
else {
    cout << "NO";
}

}