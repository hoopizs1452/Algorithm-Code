#include <iostream>
#include <vector>
using namespace std;
using iter = std::vector<int>::iterator;

void linearSearch(vector<int> A, int v)
{
	for (int i = 0; i < A.size(); i++)
	{
		if (A[i] == v) cout << i << endl;
	}
}

int main(int argc, char* argv[])
{
	vector<int> A;
	int i, n, v;
	for (cin >> i; i > 0; i--) { cin >> n; A.push_back(n); }
	cin >> v;
	linearSearch(A, v);
}