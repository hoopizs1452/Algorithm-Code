#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int>& A)
{
	for(unsigned j = 1; j < A.size(); ++j)
	{
		int key = A[j];
		int i = j - 1;
		while(i >= 0 && A[i] > key){
			A[i + 1] = A[i];
			--i;
		}
		A[i + 1] = key;
		for(int k = 0; k<A.size(); k++) cout << A[k] << " ";
		cout << endl;
	}
}

int main()
{
	vector<int> A;
	int i, n;// i=size, n = number, v = search value
	for(cin >> i; i > 0; i--) {cin >> n; A.push_back(n);}
	insertion_sort(A);
 } 
