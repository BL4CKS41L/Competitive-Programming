    #include <bits/stdc++.h>
    using namespace std;

    int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int Nacciones,m=0,conKangurosG=0;
    queue<int>cola1;
    int comida;
    char evento;
    //cout<<"Leyendoo accione sy kg de comida\n";
    cin>>comida>>Nacciones;

        
        for(int i = 0; i < Nacciones; i++) {
            cin>>evento;
            if(evento == 'N'){
                cin>>m;
                cola1.push(m+1);
                conKangurosG++;
                
            } else if(evento == 'A'){
                if(!cola1.empty()){
                    comida= comida - cola1.front();
                    cola1.pop();
                    conKangurosG--;
                }

            } else if(evento == 'C'){
                cout<<conKangurosG <<"\n";

            } else {
                cout<<comida<<"\n";
                // imprime comida restante
            }
        } //fin for
        
        return 0;
    }
    /* 16 11
    N 3
    N 5
    A
    N 2
    N 1
    R
    A
    C
    A
    R
    A */