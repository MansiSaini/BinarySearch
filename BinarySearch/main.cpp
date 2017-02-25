#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int arr[100];
    int size=0;
    int first =0;
    int last=size-1;
    int search_key=0;
    int index = 0;
    
    cout<< "Enter a size for the array: "<<endl;
    cin>>size;
    
    cout << "Enter a sequence of numbers according to size: "<<endl;
    
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    
    cout << "Enter a number from array to be searched: "<<endl;
    cin >> search_key;
    
    int middle = ((first+last)/2);
    
    while (first < last)
    {
    if(first > last)
    {
        index=-1;
    }
    else
    {
        if(search_key == arr[middle])
        {
            index = arr[middle];
            cout << "Element " << search_key << "found at index: " << arr[middle+1];
        
        } else if(search_key < arr[middle])
            {
                //search the first half of the array
                first = middle-1;
            
            } else if (search_key > arr[middle])
            {
                last = middle+1;
            }
        }
    
        cout << "Sorry, looks like your number wasn't on the list!";
    }
}


/*RECURSIVE METHOD FOR BINARY SEARCH:
search_key is the value entered by user to be found.
int BinarySearch(int arr[], int first, int last, int search_key)
{
    //just a temp variable to hold values
    int index =0;
    
    if(first > last)
    {
        index = -1;
    }
    else
    {
        int middle = (first+last/2);
        
        if(search_key == arr[middle])
        {
            index = middle;
        }
        else
        {
            //if the search_key is smaller than the middle, then the element is located in first half.
            if(search_key < arr[middle])
            {
                //search the first half of the array
                index = BinarySearch(arr, first, middle-1, search_key);
            }else
            {
                index = BinarySearch(arr, middle+1, last, search_key);
            }
        }
    }
    return index;
}*/
