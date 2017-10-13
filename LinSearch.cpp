#include <iostream>

using namespace std;

const int MAX_SIZE = 10;

int linSearch(float arr[], float elt) {
	for(int i = 0; i < MAX_SIZE; i++) {		//execute loop for all elements of the array
		if(elt == arr[i])
			return i;
	}

	//return -1 if element wasn't found
	return -1;
}

int main() {
	float elt;
	float arr[MAX_SIZE] = {-3, -8, 0, 23, 100, 34, -34, -77, 45, 87};
	cout << "Enter Element to be Searched: ";
	cin >> elt;
	int index = linSearch(arr, elt);
	if(index == -1)
		cout << "Not Found";
	else
		cout << "Index Found: " << index;

	cout << endl;

	return 0;
}