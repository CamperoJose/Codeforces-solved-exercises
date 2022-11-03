#include <iostream>

using namespace std;

int f(int x, int a){
    return x/a+x%a;
}

int main(){

	int n, li, ls, a, f2;
	cin >>n;
	for(int j=0; j<n; j++){
		cin >> li >> ls >> a;
		int f1=f(ls, a);
		f2=0;
		int div1=ls/a;
		if((li/a)<(div1)){
		    f2=(div1-1)+(a-1)%a;     
		}
		cout<<max(f1,f2)<<endl;
	}
}
