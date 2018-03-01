// Jacob Willbanks
// CMPS 2020
// Lab 6.cpp - Sorting
//

#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void printMenu() {
    
    cout << "*****************************************\n";
    cout << "***Select which type of sort to use!***\n";
    cout << "* 1. Bubble Sort *\n";
    cout << "* 2. Selection Sort *\n";
    cout << "* 3. Insertion Sort *\n";
    cout << "* 0. Exit *\n";
    cout << "******************************************\n";
    cout << "Enter a choice: ";

}

bool checkSort(int[], int, int);
int bubbleSort(int[], int, int);
int selectionSort(int[], int, int);
int insertionSort(int[], int, int);

int main() {

    srand(time(NULL));
    int n, max, choice, count;
    bool check;

    cout << endl;
    cout << "How big of an array?: ";
    cin >> n;
    cout << "Max value for range: ";
    cin >> max;
    cout << endl;

    int arr[n];

  //  printMenu();
  //  cin >> choice;

    do{
        printMenu();
        cin >> choice;
        cout << endl;

        switch(choice) {
            case 1:
                count = bubbleSort(arr, n, max);
                check = checkSort(arr, n, max);

                if (check == true) {
                    cout << "Array is sorted" << endl;
                    cout << count << " number of swaps occured!" << endl;
                } 
                if (check == false)
                    cout << "Array was not sorted properly!" << endl;
                cout << endl; 
                break;
            case 2:
                count = selectionSort(arr, n, max);
                check = checkSort(arr, n, max);

                if (check == true) {
                    cout << "Array is sorted" << endl;
                    cout << count << " number of swaps occured!" << endl;
                }
                if (check == false)
                    cout << "Array was not sorted properly" << endl;
                cout << endl;
                break;
            case 3:
                count = insertionSort(arr, n, max);
                check = checkSort(arr, n, max);
                break;
            case 0:
                cout << endl;
                cout << "Exiting Program...." << endl;
                return (0);
            default:
                cout << "Please enter an input 1-3 or 0 to Exit!" << endl;
                break;
        }
    }while(choice != 0);

  
    return (0);

}

bool checkSort(int arr[], int n, int max) {

    bool flag = true;

    for(int i = 0; i < n-1; i++) {
        if (arr[i] > arr[i+1]) {
            cout << "Error: Array not sorted!" << endl;
            flag = false;
            break;
        }
    }

    return flag;
}

int bubbleSort(int arr[], int n, int max) {

    int count = 0;

    for (int i=0; i < n; i++)
        arr[i] = rand() % max + 1;
   
    for (int i=0; i < n-1; i++) {
        for (int j = 0; j < n-1; j++) {
            if (arr[j+1] < arr[j]) {
                swap(arr[j+1], arr[j]);
                count++;
            }
        }
    }
    return count;
}

int selectionSort(int arr[], int n, int max) {
    
    int count = 0;

    return count;
}

int insertionSort(int arr[], int n, int max) {

    int count = 0;

    return count;
}




