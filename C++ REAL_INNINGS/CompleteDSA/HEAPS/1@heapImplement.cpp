#include<iostream>
using namespace std;

class heap{
    
    public: 
    int arr[100];
    int size;

    heap(){
      arr[0]=-1;
      size=0;
    }
     
    void insert(int val){
        size = size + 1;
        int index = size;

        arr[index] = val;

        while(index>1)
        {
          int parent = index/2;
          if(arr[parent]<arr[index]){
              swap(arr[parent] , arr[index]);
              index=parent;
          }
          else
            break ;
        }
    } 

    void print()
    {
        for(int  i=1; i<=size; i++){
          cout<<arr[i]<<" ";
        }cout<<endl;
    }

    void deleteHeap()
    {
      int i=1;

      arr[i]=arr[size];
      size--;

        while (i <= size) {
            int leftChild = 2 * i;
            int rightChild = 2 * i + 1;
            int largest = i;

            // Compare with left child
            if (leftChild <= size  &&  arr[leftChild] > arr[largest]) {
                largest = leftChild;
            }

            // Compare with right child
            if (rightChild <= size && arr[rightChild] > arr[largest]) {
                largest = rightChild;
            }

            // If the largest is still the parent, break out of the loop
            if (largest == i) {
                break;
            } 

            // Otherwise, swap the parent with the largest child and continue
            swap(arr[i], arr[largest]);
            i = largest;  // Move to the largest child

        }
    }
};

void heapify(int arr[], int size, int i)
{
            int leftChild = 2 * i;
            int rightChild = 2 * i + 1;
            int largest = i;

            // Compare with left child
            if (leftChild <= size  &&  arr[leftChild] > arr[largest]) {
                largest = leftChild;
            }

            // Compare with right child
            if (rightChild <= size && arr[rightChild] > arr[largest]) {
                largest = rightChild;
            }

            if(largest!=i){
                swap(arr[i], arr[largest]);
                heapify(arr,size, largest);
            }

}

void heapSort(int arr[], int n)
{
    int size = n;

    while(size > 1){
        swap(arr[size], arr[1]);
        size--;
        heapify(arr,size, 1);
    }
}

int main()
{
//    heap h;
//    h.insert(50);
//    h.insert(55);
//    h.insert(52);
//    h.insert(53);
//    h.insert(51);
//    h.insert(54);
//    h.print();
//    h.deleteHeap();
//    h.print();

   int a[6]={-1,54,53,55,52,50};
   int n=5;
   for(int i=n/2; i>0; i--)
   {
    heapify(a, n, i);
   }
   cout<<"AFTER"<<endl;
   for(int i=1; i<=n; i++){
    cout<<a[i]<<endl;
   }

   cout<<"AFTER after sort"<<endl;
   heapSort(a, n);
    for(int i=1; i<=n; i++){
    cout<<a[i]<<endl;
   }

}