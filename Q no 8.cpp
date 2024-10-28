# include <iostream>
using namespace std;
int main(){
	int elements[6] = {4,5,6,7,8,9};
	int value;
	cout << "Enter value: ";
	cin >> value;
	for(int i=0; i<6; i++){
		if (elements[i] == value){
			cout << value <<" is found at index "<< i <<endl;
			break;
	    }
	}
	return 0;
}

