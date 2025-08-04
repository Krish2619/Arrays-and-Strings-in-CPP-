//Krishna Chhabaria
//24070123149
//B3
#include <iostream>
using namespace std ;
int main(){
    int b;
    cout<<"enter the element for search : ";
    cin>>b;
    int a[10]={1,24,13,4,6,62,34,86,51,76};
     int o= sizeof(a)/sizeof(int);
     int y=0;
    for (int i=0;i<o;i++){
        if(a[i]==b){
            cout<<"number "<< b<<" found at "<<i+1<<" position ";
            y=1;
            break;
        }
        else{
            continue;
        }
    }
    if(y==0){
        cout<<"number "<<b<<" not found in the array";
    }
         
       
return 0;}

/*output:
enter the element for search : 4
number 4 found at 4 position 

enter the element for search : 69
number 69 not found in the array
*/