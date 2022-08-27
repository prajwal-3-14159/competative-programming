#include <iostream>
#include  <cmath>

using namespace std;

typedef struct topics
{
    int topic;
    int hours; 
} topics;

 
void heapify(topics arr[], int n, int i, string parameter)
{
    int largest = i; 
    int l = 2 * i + 1; 
    int r = 2 * i + 2; 
 
    if (l < n && arr[l].hours > arr[largest].hours)
        largest = l;

    if (r < n && arr[r].hours > arr[largest].hours)
        largest = r;
 
    if (largest != i) 
    {
        swap(arr[i], arr[largest]);
 
        heapify(arr, n, largest);
    }
}
 
void heapSort(topics arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    for (int i = n - 1; i > 0; i--) 
    {
        swap(arr[0], arr[i]);
 
        heapify(arr, i, 0);
    }
}
 
void printArray(topics arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].hours << " " << arr[i].topic << endl;
    }
    cout << "\n";
}

void marks(int N, int M, int K, topics arr[])
{
    int mrks=0;
    //int n = arr[N-1].topic;
    int *list = new int[M]{0};
    
    //list = { 0 };
    /*cout<<"list: ";
    for(int i=0; i<M; i++)
    {
        cout<<list[i]<<" ";
    }
    cout<<endl;*/
    heapSort(arr, N);
    printArray(arr, N);

    int i=0;
    int j=0;
    for (int i = 0; i<N; i++)
    {
        if(K<arr[i].hours)
        {
            break;
        }
        list[arr[i].topic-1] += 1;
        K = K - arr[i].hours;
        cout<<K<<" ";
    }

    /*cout<<endl<<"list: ";
    for(int i=0; i<M; i++)
    {
        cout<<list[i]<<" ";
    }
    */
    for(int i=0; i<M; i++)
    {
        mrks+=ceil(list[i]/2.0);
    }

    cout<<endl<<mrks<<endl;
}

 
int main()
{
    int n,N,M,K;
    
    N = 4;
    int C[4] = {1, 1, 2, 2};
    int C2[4] = {1, 1, 2, 1};

    topics *arr = new topics[N];
     
    for(int i=0; i<N; i++)
    {
        arr[i].topic = C[i];
    }
    for(int j=0; j<N; j++)
    {
        arr[j].hours = C2[j];
    }

    cout<<"unsorted array is: "<<endl;
    //printArray(arr, N);
    M = 3;
    K = 2;
    //cout << "Sorted array is: "<<endl;
    //printArray(arr, N);
    marks(N, M, K, arr);
    return 0;
}
