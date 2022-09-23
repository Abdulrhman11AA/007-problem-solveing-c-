#include <iostream>
using namespace std;
int searching(int [], int, int );
int main() {

	int arr[] = { 1,2,3,4,5,6,7,8,9,10,12,20,30,40,50,55,56,70,100 };
	int len = sizeof(arr) / sizeof(*arr);
	cout << searching(arr, len, 1) << endl << endl;//worst case 
	cout << searching(arr, len, 100) <<"\n\n";// worst case 
	cout << searching(arr, len, 55) << endl << "\n"; 
	cout << searching(arr, len, 10)<< "\n"<<endl; // best case
	
	return 0;
}
int searching(int arr[], int len, int num) {
	int first = 0, counter =1;
	int end = len - 1;
	while (first <= end) {
		int mid = (first + end) / 2;
		if (arr[mid] == num) {
			cout << "* * * * * * * \n ";
			return mid ;
		}
		else if (arr[mid] < num) {
			first = mid + 1;
		}
		else
			end = mid - 1;
		if (counter == 1)
			cout << "* * * * * * * \n";
		cout << "processing " << counter++ << " *\n"; //optional
	}
	return-1;
}