#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, k, d=0;
    int c=0;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        int a=0;
        cin>>a;
        int vec[10]={0};
        
        while(a>0){
            int mod=a%10;
            vec[mod]++;
            a/=10;
        }
        
        if(k==0 and vec[0]>=1){
            c++;
        }else if(k!=0){
        
        d=0;
        for(int z=0; z<=k; z++){
            if(vec[z]>=1){
                d++;
            }
        }

        if(d==(k+1)){
            c++;
        }    
        }
        //cout<<"valor c: "<<c<<" Valor de d:"<<d<<endl;
        
        }
        cout<<c<<endl;
    }
 
