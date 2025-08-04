// Krishna Chhabaria
// 24070123149
// B3
#include <iostream>
using namespace std ;
int main(){
    int b;
    cout<<"enter the number of elements : ";
    cin>>b;
    int a[b];
     int o= sizeof(a)/sizeof(int);
    for (int i=0;i<o;i++){
         cout<<"enter the elements "<<i+1<<endl;
    cin >> a[i];}
    int s=0;
    for(int i=0;i<o;i++){
        s=s+a[i];
    }
    cout << "sum is "<<s<<endl;
    cout<< "average is "<< s/o;
return 0;
}

/*output:
enter the number of elements : 3
enter the elements 1
5
enter the elements 2
6
enter the elements 3
5
sum is 16
average is 5
*/