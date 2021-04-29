#include <iostream>
#include <vector>
using namespace std;
using iter = std::vector<int>::iterator;

void print(vector<int>& A)
{
	for (iter it = A.begin(); it != A.end(); ++it) cout << *it << " ";
	cout << endl;
}

void insertionSort(vector<int>& A)
{
	for (unsigned j = 1; j < A.size(); j++) {
		
		int key = A[j];
		int i = j - 1;
		while (i >= 0 && A[i] > key) {
			A[i + 1] = A[i];
			i--;
		}
		A[i + 1] = key;
		print(A);
	}
}

int main(int argc, char* argv[])
{
	vector<int> A;
	int i, n;
	for (cin >> i; i > 0; i--) { cin >> n; A.push_back(n); }
	insertionSort(A);
}