//Krishna Chhabaria
//24070123149
//B3
#include <iostream>
using namespace std;
int main(){
    string a;
    cout<< "enter the string: ";
    cin>>a;
    int v =a.length();
    cout << "reversed string is: ";
    for (int i=0;i<=v;i++){
       cout << a[v-i];
    }
}

/*Output : 
enter the string: krishna
reversed string is: anhsirk
*/