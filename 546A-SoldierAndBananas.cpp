#include <iostream>
using namespace std;
int main() {
    int a,b,c, d=0;
    cin>>a>>b>>c;
    int t=0;
    for(int i=1; i<=c; i++){
        d+=(a*i);
    }
    if(d>b){
        t=d-b;
    }
    cout<<t<<endl;
}
