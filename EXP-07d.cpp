// Krishna Chhabaria
// 24070123149
// B3
#include <iostream>
using namespace std ;
int main(){
    int b;
    cout<<"enter the number of elements : ";
    cin>>b;
    int a[b]; // Dynamic array declaration
     int o= sizeof(a)/sizeof(int);
    for (int i=0;i<o;i++){
         cout<<"enter the elements "<<i+1<<endl;
    cin >> a[i];}
    int s=a[0],n=a[0];
    for(int i=1;i<o;i++){
        if(a[i]>s){
            s=a[i];
            }
            if(a[i]<n){
            n=a[i];}
    }cout<<"max term is : "<<s<<endl;
   cout<<"min term is : "<<n;
return 0;
}
/* Output:
enter the number of elements : 4
enter the elements 1
5
enter the elements 2
9
enter the elements 3
2
enter the elements 4
8
max term is : 9
min term is : 2
*/