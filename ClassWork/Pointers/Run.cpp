#include "./headers/Fraction.h"
#include "./headers/MyArray.h"
#include <iostream>


using namespace std;

void question1();
void question2();

template<typename T>
void swap(T* array, int i, int j)
{	T temp = array [i];
	array [i] = array[j];
	array [j] = temp;
}
template<typename T>
T* quicksort(T* array);


template <class T> 
void sort(T* data, int size)
{
    for(int i = 0 ; i <size; i++)
    {
            for(int x = 0 ; x <size - 1; x++)
            {
                if(data[x] > data[x+1])
                {
                    swap(data, i, x);
                }
            }
    }
}

int main()
{
    int arr[] = {1,2,4,5,2,3,5,73,2,9};
    
    sort(arr, 10);

    for(int i = 0; i < 10 ; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;

    //question2();
    return 0;
}

void question1()
{
    Fraction f1;
    cout << "enter a fraction" << endl;
    cin >> f1;
    Fraction f2;
    cout << "enter a fraction" << endl;
    cin >> f2;

    cout << "f1 = " << f1 << endl;
    cout << "f2 = " << f2 << endl;
}
void question2()
{
    MyArray<int> arr1(-5,5);
    for(int i = -5; i < 5 ; i++)
    {
        arr1[i] = i + 6;
    }
    for(int i = -5; i < 5 ; i++)
    {
        cout << i << " - " << arr1[i] << endl;
    }
}