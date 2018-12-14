    #include <bits/stdc++.h>
    using namespace std;

    void imprimir(list<int> l) {
        while (!l.empty()) {
            cout <<" "<<l.back();
            l.pop_back();
        }
    cout<<"\n";
    }

    int main()
    {
        list<int> lis;
        int n, testCases, i;
        string caso;
        cin >> testCases;

        for (i = 0; i < testCases; i++) {
            cin >> caso;
            if (caso == "insert") {
                cin >> n;
                lis.push_back(n);
            }
            else if (caso == "delete") {
                cin >> n;
                lis.remove(n);
            }
            else if (caso == "deleteFirst") {
                if(!lis.empty())
                    lis.pop_front();
            }
            else if (caso == "deleteLast") {
                if(!lis.empty())
                    lis.pop_back();
            }
            
        } // end 1 for
    if(lis.size() == 1){
    cout<<lis.back()<<endl;
    } else 
        imprimir(lis); 

        lis.clear();
        testCases = 0;
        return 0;
    }
    /* 
    insert 5
    insert 2
    insert 3
    insert 1
    delete 3
    insert 6
    delete 5
    deleteFirst
    deleteLast
    */