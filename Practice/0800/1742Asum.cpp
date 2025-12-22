#include <iostream>
#include <vector>

using namespace std;


// Pretty Ugly Solution but it's a fast writed one.
// PD: Verý Straightforward problem, too simple.


int main() {
	int t;
	cin >> t;
	
	int n1, n2, n3;
	bool condition = false;

	for (int i = 0; i < t; i++){
		cin >> n1 >> n2 >> n3;	
		condition = false;

		if (n1 + n2 == n3){
			condition = true;
		}
		
		if (n1 + n3 == n2){
			condition = true;
		}

		if (n2 + n3 == n1){
			condition = true;
		}


		cout << (condition ? "YES" : "NO") << endl;
	}	
}
