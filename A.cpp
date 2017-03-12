#include <iostream>
using namespace std;

int main(){
	int n = 0;
	cout << "Input integer:";
	cin >> n;
	cout << "Corresponding sequence of numbers:" << endl;
	while(1){
		cout << n << " ";
		if(n == 1){
			cout << endl;
			break;
		}
		if(n&1) n = 3*n+1;
		else n = n/2;
	}
	return 0;
}
