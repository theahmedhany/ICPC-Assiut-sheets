#include<bits/stdc++.h>

using namespace std;

int main(){

	long long size;
	cin >> size;

	long long arry[size];

	for (int i = 0; i < size; i++){
		cin >> arry[i];
	}

	long long numbers;
	cin >> numbers;

	long long position;

	for (int i = 0; i < size; i++){
		if (arry[i] == numbers){
			position = i;
			break;
		} else {
			position = -1;
		}
	}

	cout << position;

}