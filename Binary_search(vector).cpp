#include <iostream>
#include <vector>
using namespace std;

void binary_search(vector<int>& A, int low, int high, int v)
{
	int maximum=(A.size())-1;
    int minimum = 0;
    int mean;
    while (maximum>minimum){
        mean = (maximum+minimum)/2;
        if (A[mean] == v){
            cout << mean;
        }
        else if(A[mean] > v){
            maximum = (mean-1);
        }
        else{
            minimum = (mean+1);
        }
    }
}

int main()
{
	vector<int> A;
	int i, n, v;// i=size, n = number, v = search value
	for(cin >> i; i > 0; i--) {cin >> n; A.push_back(n);}
	cin >> v;
	binary_search(A, A[0], A[i], v);
}
