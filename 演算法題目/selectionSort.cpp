#include <iostream>
#include <vector>
using namespace std;
using iter = std::vector<int>::iterator;

void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void print(vector<int>& A)
{
	for (iter i = A.begin(); i != A.end(); ++i) cout << *i << " ";
	cout << endl;
}

void selectionSort(vector<int>& A)
{
	for (unsigned j = 0; j < A.size() - 1; ++j) {
		int smallest = j;
		for (unsigned i = j + 1; i < A.size(); ++i)
			if (A[i] < A[smallest]) smallest = i;
		swap(&A[j], &A[smallest]);
		print(A);
	}
}

int main(int argc, char* argv[])
{
	vector<int> A;
	int i, n;
	for (cin >> i; i > 0; i--) { cin >> n; A.push_back(n); }
	selectionSort(A);
}