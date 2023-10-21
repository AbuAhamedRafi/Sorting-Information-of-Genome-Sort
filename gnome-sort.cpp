#include <iostream> 

using namespace std; 
  
    //gnome sort 
    void gnomeSort(int arr[],int n) 
    { 
        int i = 0; 
    
        while (i < n) 
        { 
            if (i == 0||arr[i] >= arr[i- 1]) 
               { i++; }                                 //index incremented
           
            else
            {                                     //swapping
               int temp = arr[i]; 
               arr[i] = arr[i-1];   
               arr[i-1] = temp;                         
                 
                i--;                                   //index decremented
            } 
        } 
      
    } 
  
    //print the array
    void printArray(int arr[],int n) 
    { 
       
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl; 
    } 
  
  
  
    int main() 
    { 
        int  arr[] = { 5, 3, 2, 4 }; 
     
  
        int n = sizeof(arr) / sizeof(arr[0]); 
        cout << "Unsorted array: "; 
        printArray(arr,n);
        
        gnomeSort(arr,n); 
        
        cout << "Sorted array: "; 
        printArray(arr,n);
  
        return 0; 
    }

