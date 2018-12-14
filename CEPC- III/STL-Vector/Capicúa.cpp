#include <bits/stdc++.h>
using namespace std;
bool capi(vector<int> arr) {
    bool cap = true;
    int aux2 = 0;
    while (aux2 < arr.size() / 2 && cap)
    {
        if (arr[aux2] != arr[arr.size() - 1 - aux2])
        {

            cap = false;
        }
        aux2++;
    }
    return cap;
} //fin del metodo
int main() {
    int T, aux;
    vector<int> capicua;
    cin >> T;
    for (int i = 0; i < T; i++)  {
        cin >> aux;
        capicua.push_back(aux);
    }

    if (capi(capicua) == true ){
        cout << "SI";
    }
    else {

        cout << "NO\n";
    }

    capicua.clear();
    return 0;
}
