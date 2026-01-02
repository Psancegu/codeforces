#include <iostream>
#include <vector>

using namespace std;



int main() {
	int g,c,l;
	cin >> g >> c >> l;

	if (abs(g-l) >= 10 ){
		cout << "check again";
	}
	else if(abs(g-c) >= 10){
		cout << "check again";
	}
	else if(abs(c-l) >= 10){
		cout << "check again";
	}
	else{
		if((c >= g & c <= l) || (c <= g & c >=l)){
			cout << "final " << c;
		}	
		else if((g >= c & g <= l) || (g <= c & g >=l)){
			cout << "final " << g;
		}
		else{
			cout << "final " << l;
		}
	}
}
