/*
author:hartono
https://www.luogu.org/problemnew/show/P1980
*/
#include<iostream>
using namespace std;

int main(){
	long int max, n, temp, result=0;
	cin>>max>>n;
	
	for (int i=1; i<=max; i++){
		temp = i;
		while (temp>0){
			if (temp%10==n){
				result++;
			}
			temp=temp/10;
		}
	}
	cout<<result;
}
