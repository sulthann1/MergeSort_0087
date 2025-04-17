#include <iostream>
using namespace std;

int arr [20], B[20]; //array utama dan array bantu
int n;

void input()
void input()
{
    while (true)
    {
        cout << "masukkan panjang element array :";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else 
        {
            cout << "Maksimal panjang array adalah 20";
        }
    }
    cout << endl;
    cout << "==================" << endl;
    cout << "Inputkan isi elemen array" << endl;
    cout << "==================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "data index ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}

void mergeSort (int low, int high) {
    if (low >= high)
{ //step 1
    return // step 1a
}
int mid = {low + high} //2;

mergeSort {low,mid};
mergeSort {mid+1, high};

int i = low;
int j, k;
j = mid +1;
k = low;

while (i <= mid && j <= high)
{
    if (arr[i]<= arr[j])
    {
    B[k] = arr [i];
    i++;
    }
else
{
    B[k] = arr[j];
    j++;
} 
k++;
}

while (j <= high)
{
B[k] = arr [j];
j++;
k++;
}

while (i <= mid)
{
    B[k] = arr [i];
    i++;
    k++;
} 

for (int x = low x<= high ; x++)
{
    arr[x] =B [X];
}

}

void output ()
{
    cout << "\nData setelah diurutkan (Merge Sort):";
    for (int i= 0; i< n; i++ )
    {
        cout << arr[i] << "";
    }
    cout <<endl;
}
int main()
{
    input()
    mergeSort(0, n-1);
    output();
    return 0;
}