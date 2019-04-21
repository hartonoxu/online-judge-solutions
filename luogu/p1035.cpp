#include <iostream>
using namespace std;
int main(){
	double finish=0, start =0, gain=0;
	int i=0;
	cin>>finish;
	while (start<finish){
		i++;
		if (i==1){
			gain =2;
		}else{
			gain*=0.98;
		}
		start+=gain;
	};
	cout<<i;
	return 0;
}
