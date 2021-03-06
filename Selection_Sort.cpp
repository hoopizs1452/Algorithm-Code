#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<int>& A)
{
	int size = A.size();
	for (int i = 0; i < size - 1; i++) {
		int smalllest = i;
		for (int j = i + 1; j < size; j++) {
			if (A[j] < A[smalllest]) smalllest = j;
		}
		int temp = A[i];
		A[i] = A[smalllest];
		A[smalllest] = temp;
	}
}

int main()
{
	vector<int> arr = { 4, 6, 5, 2, 3, 1 };
	selection_sort(arr);
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}