#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

bool updateTopScores(vector<int> &in, vector<int> & out);
bool testUpdateTopScore();

int main()
{
	vector<int> topScores = { 443, 439, 438, 438, 434, 418, 418, 417, 413, 411 };
	topScores.push_back(444);

	vector<int> updtetopScores;
	bool y = updateTopScores(topScores, updtetopScores);

	//RANDOM ARRAY

	bool z = testUpdateTopScore();

	if (z){
		cout << "congo";
	}



	std::cout << "myvector stores " << int(topScores.size()) << " numbers.\n";
	for (int i = 0; i < updtetopScores.size(); i++){
		cout << updtetopScores[i] << " ";
	}


	getchar();
	return 0;
}

bool updateTopScores(vector<int> &in, vector<int> & out){
	out = in;
	for (int i = 0; i < out.size(); i++){
		for (int j = i + 1; j < out.size(); j++){
			if (out[i] < out[j])
				swap(out[i], out[j]);
		}
	}
	return 1;
}
bool testUpdateTopScore(){

	//CREATES A RANDOM VECTOR
	vector <int> random_array;
	srand(time(NULL));
	for (int i = 0; i < 30; i++){

		random_array.push_back(1 + rand() % 100);
	}
	cout << "Randomly generated array =";
	for (int i = 0; i < random_array.size(); i++){
		cout << random_array[i] << " ";
	}
	cout << endl;

	//SORT THE ARRAY IN DESCENDING ORDER
	sort(random_array.begin(), random_array.end());
	reverse(random_array.begin(), random_array.end());
	//
	cout << "Sorted array =";
	for (int i = 0; i < random_array.size(); i++){
		cout << random_array[i] << " ";
	}
	cout << endl;

	//PUSH BACK A RANDOM NO IN VECTOR
	int random_no = (int)(1 + rand() % 100);
	random_array.push_back(random_no);
	cout << "Sorted array wityh added random number=";
	for (int i = 0; i < random_array.size(); i++){
		cout << random_array[i] << " ";
	}
	cout << endl;

	//SORTS ARRAY BY NESTED LOOP
	vector <int> mysort_array;
	bool x = updateTopScores(random_array, mysort_array);
	cout << "sorted array with nested loop function =";
	for (int i = 0; i < mysort_array.size(); i++){
		cout << mysort_array[i] << " ";
	}
	cout << endl;
	//SORTS ARRAY BY BUILT IN SORT FUNCTION 

	vector <int> sort_random_array = random_array;
	sort(sort_random_array.begin(), sort_random_array.end());
	reverse(sort_random_array.begin(), sort_random_array.end());
	cout << "sorted array with built in sort function =";
	for (int i = 0; i < sort_random_array.size(); i++){
		cout << sort_random_array[i] << " ";
	}
	cout << endl;
	//test
	if (mysort_array == sort_random_array){
		int x = 1;
	}
	else
	{
		x = 0;
	}
	return x;
}