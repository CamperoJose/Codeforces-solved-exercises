#include <iostream>
using namespace std;

int main(){
    int a[4];
    int mx;
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    
    if(max(a[0],a[1])>max(a[2],a[3])){
        mx=max(a[0],a[1]);
    }else{
        mx=max(a[2],a[3]);
    }
    
    for(int i=0; i<4; i++){
        if(a[i]!=mx){
            cout<<mx-a[i]<<endl;
        }
    }
}
