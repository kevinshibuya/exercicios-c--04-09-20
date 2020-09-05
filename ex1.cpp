#include <iostream>
using namespace std;

#define arrayLen 10

int calcAvg(int nums[]) {
	int total = 0;
	
	for (int i = 0; i < arrayLen; i++) {
		total += nums[i];
	}
	
	int average = total / arrayLen;

	cout << "M�dia: " << average << endl;

	return average;
}

void aboveAvg(int nums[], int average) {
	int quant = 0;
	int numsAboveAvg[arrayLen] = {};
	
	for (int i = 0; i < arrayLen; i++){
		if (nums[i] > average) {
			numsAboveAvg[quant] = nums[i];
			quant++;
		}
	}

	cout << "N�meros acima da m�dia: ";
	for(int i = 0; i < quant; i++){
		cout << numsAboveAvg[i] << " ";
	}
}

int main(int argc , char** argv) {
 	int numArray[arrayLen];
	for(int i = 0; i < arrayLen; i++) {
		cout << "Digite um n�mero: ";
		cin >> numArray[i];
	}
	int average = calcAvg(numArray);
	aboveAvg(numArray, average);
	
	return 0;
}