#include<iostream>
using namespace std;

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

bool indinsertion(int arr[], int size, int element, int capacity, int index){
    if(size >= capacity){
        cout << "Insertion Failed! Array is full.\n";
        return false;
    }
    if(index < 0 || index > size){
        cout << "Insertion Failed! Invalid index.\n";
        return false;
    }
    for(int i = size-1; i >= index; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return true;
}
bool linearsearch(int element,int size,int arr[]){
    cout<<"Enter the element to be searched:\n";
    cin>>element;
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            cout<<"Index of the element searched is:\t"<<i;
    return true;}
        }
        cout<<"element not found!";
            return false;
}
 bool inddeletion(int arr[],int size,int index){
    if(size<=index ){
        cout<<"Deletion Failed!\n";
        return false ;
    }
    for(int i=index;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    return true ;
 }

int main(){
    const int capacity = 100;
    int arr[capacity] = {1,2,45,56};
    int size = 4, element = 36, index = 4;

    cout << "Before Insertion: ";
    display(arr, size);

    if(indinsertion(arr, size, element, capacity, index)){
        size += 1;
        cout << "After Insertion: ";
        display(arr, size);
    }
   linearsearch(element,size,arr);
   if(inddeletion(arr,size,index)){
        size-=1;
    cout<<"After Deletion:\t";
    display(arr,size);
    }
    return 0;
}
