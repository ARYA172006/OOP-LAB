/*PROBLEM STATEMENT: Design a program with a template for sorting the accepted 
array and displaying it using integer or float type data. Implement any sorting type 
using Generic Programming..*/ 
#include <iostream> 
using namespace std; 
template <typename T> 
void selectionSort(T arr[],int size) { 
    for (int i=0; i<size - 1; i++) { 
        int min= i; 
        for (int j=i+1; j < size; j++) { 
            if (arr[j]<arr[min]) { 
                min= j; 
            } 
        } 
        if (min!= i) { 
            T temp = arr[i]; 
            arr[i] = arr[min]; 
            arr[min] = temp; 
        } 
    } 
} 
template <typename T> 
void display(T arr[], int size) { 
    for (int i=0; i<size; i++) { 
        cout << arr[i] << " "; 
    } 
    cout << endl; 
} 
int main() { 
    int choice, n; 
    char q; 
    do { 
        cout << "\nChoose array type:\n1. Integer\n2. Float\nEnter choice: "; 
        cin >> choice; 
        cout << "Enter number of elements: "; 
        cin >> n; 
        switch (choice) { 
            case 1: { 
                int intArr[100]; 
                cout<<"Enter "<< n<< " integers:\n"; 
                for (int i=0; i< n; i++) { 
                    cin>>intArr[i]; 
                } 
                selectionSort(intArr, n); 
                cout << "Sorted integer array: "; 
                display(intArr, n); 
                break; 
            } 
            case 2: { 
                float floatArr[100]; 
                cout << "Enter " << n << " floats:\n"; 
                for (int i = 0; i < n; i++) { 
                    cin >>floatArr[i]; 
                } 
                selectionSort(floatArr, n); 
                cout << "Sorted float array: "; 
                display(floatArr, n); 
                break; 
            } 
            default: 
                cout << "Invalid choice!" << endl; 
        } 
        cout <<"\nDo you want to continue? (y/n): "; 
        cin >>q; 
 
    } while (q == 'y' || q == 'Y'); 
    cout<< "\nProgram terminated.\n"; 
    return 0; 
}
