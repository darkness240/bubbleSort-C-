#include <iostream>
using namespace std;
#prototypes
void load(int arr[], int N);
void bubbleSort(int arr[], int N);
void print(int arr[], int N);

int main() {
	int N = 5;
    int arr[N];
    load(arr, N);
    bubbleSort(arr, N);
    print(arr, N);
}

#take input from user and push it in the array
void load(int arr[], int N) {
	for (int i = 0; i < N; i++) {
		cout << "inserisci il numero --> ";
		cin >> arr[i];
	}
}
#print function
void print(int arr[], int N) {
	for (int i = 0; i < N; i++) {
		cout << "["<< i << "]  :"<< arr[i] << endl;
	}
}

#bubble sort function input: array && array.length
void bubbleSort(int arr[], int N) {
    int temp, j, i = 0;
    int K = N - 1;
    bool isSwap = true;      
    while(isSwap) {
        isSwap = false;
        for (j = 0; j < K-i; j++) {
            if ( arr[j] > arr[j+1] ) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSwap = true;
            }
        }
        i++;
    }
    
}
