/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>

using namespace std;

int linearSearch(int arr[], int n, int key){
    
    for (int i = 0; i < n; i++){
        if (arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int key;
    cin >> key;
cout << linearSearch(arr, n, key) << endl;
    return 0;
}