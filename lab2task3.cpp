#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
bool updateTopScore(vector<int> &in, vector<int> &out);  
//main starts
int main() {
	vector <int> a{ 4, 3, 5, 32, 0, 23 };
	vector <int> b;
	updateTopScore(a, b);
} 

//function definitions
bool updateTopScore(vector<int> &in, vector<int> &out)
{
	out = in;
	bool value_swapped = false;
	int temp = 0;
	int n = out.size();
	for (int i = 1; i <= n; i++)   //single for loop bubble sort 
	{
		if (i == n)
		{
			if (!value_swapped) break;

			value_swapped = false;
			i = 1;
		}
		if (out[i - 1] < out[i])   // for descending order using '<'
		{
			//swapping 
			int temp = out[i - 1];
			out[i - 1] = out[i];
			out[i] = temp;
			value_swapped = true;
		}
	}


	cout << "Random Number via single Loop Algorithm" << endl;
	for (int i = 0; i < out.size(); i++)
		cout << out[i] << endl;
	return 1;
}

