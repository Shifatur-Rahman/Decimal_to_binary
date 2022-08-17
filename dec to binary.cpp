
#include <iostream>
using namespace std;
int main(){

int num, rem, div, result, binary = 0, res=1;

cin>>num;

while(num!=0){
	rem = num%2;
	num = num/2;
	binary = binary + (res*rem);
	res = res*10;
}


cout<<binary;



}
