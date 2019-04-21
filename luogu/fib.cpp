#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a =0;
	int b = 1;
	int c;
	for (int i=0; i<n; i++){
		if (i==0){
			c=1;
		}else{
		c = a + b;
		a=b;
		b=c;			
		}
	}
	cout<<c;
}
