#include <iostream>

int **matrixOne;
int **matrixTwo;

void insertValue() {
	matrixOne = new int*[3];
	for (int i = 0; i < 3; ++i) {
		matrixOne[i] = new int[3];

		for (int j = 0; j < 3; ++j) {
      std::cout << "Digite o valor da posição: " << i << ", " << j << " :" << std::endl;
      std::cin >> matrixOne[i][j];
    }
	}
	
	matrixTwo = new int*[3];

	for(int i = 0; i < 3; ++i) {
		matrixTwo[i] = new int[3];

		for(int j = 0; j < 3; ++j) {
      std::cout << "Digite o valor da posição: " << i << ", " << j << " :" << std::endl;
      std::cin >> matrixTwo[i][j];
    }
	}
}
	
void showMatrix(){	
	for(int i = 0; i < 3; ++i) {
    for(int j = 0; j < 3; ++j) {
      std::cout << matrixOne[i][j] << " | ";
    }

		std::cout << std::endl; 
	}

	std::cout << std::endl;
	
	for(int i = 0; i < 3; ++i) {
    for(int j = 0; j < 3; ++j) {
      std::cout << matrixTwo[i][j] << " | ";
    }

    std::cout << std::endl;
	}

	std::cout << std::endl;
}

void compareMatrix(){
	int count = 0;
	
	for(int i = 0; i < 3; ++i) {
    for(int j = 0; j < 3; ++j) {
      if (matrixOne[i][j] == matrixTwo[i][j]) {
        count++;
      }
    }
	}

	std::cout << count << std::endl;

	if (count == 9) {
		std::cout << "As matrizes são iguais" << std::endl;
	}
}

int main(int argc, char** argv) {   
	insertValue();
	
	showMatrix();
	
	compareMatrix();
	
	return 0;
}