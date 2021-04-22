#include <iostream>
#include <vector>
using namespace std;

void linear_search(vector<int>& A, int v)
{
	vector<int>::iterator it;
	for(it = A.begin(); it != A.end(); ++it){
		if(*it == v) cout << it-A.begin() << endl;
	}
}

int main()
{
	vector<int> A;
	int i, n, v;// i=size, n = number, v = search value
	for(cin >> i; i > 0; i--) {cin >> n; A.push_back(n);}
	cin >> v;
	linear_search(A, v);
	//for(int j=0; j<5; j++) cout << A[j] << endl;
	//cout << A[2] << " " << A.size() << endl;
 } 
