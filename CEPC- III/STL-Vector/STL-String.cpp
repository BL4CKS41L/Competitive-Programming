#include <string>
#include<iostream>
using namespace std;

int main(){
string str(":((( Hello ,, World!?!");
str.erase(19,3);
string::iterator it1 = str.begin()+10;
str.erase(it1);
/*string::iterator it2 = str.begin();
string::iterator  it3  = str.begin()+5;
str.erase(it2,it3); */
cout<<str<<"\n"<<endl;
return 0;


}