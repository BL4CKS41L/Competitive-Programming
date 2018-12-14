#include <iostream>
using namespace std;
int main() { 
int tiempo_total, cantidad_rolas,minutos_cancion,total;
cin>> tiempo_total>> cantidad_rolas;

for(int i = 0; i <  cantidad_rolas; i++) {
    cin>>minutos_cancion;
    total+=minutos_cancion;
}


if (total>tiempo_total) {
    cout<< "No es posible\n";
}
else if(total<tiempo_total) {
    cout<<"Es posible\n";
}
else if(total== tiempo_total) {
    cout<<"Es exacto\n";
}

return  0;
}