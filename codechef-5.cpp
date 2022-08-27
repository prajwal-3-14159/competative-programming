#include <iostream>
#include <stdlib.h>
#include <vector>
#include <math.h>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(vector<int> heap, int i, int n)
{
    int  max_i = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    if(l<n && heap[l]>heap[max_i])
    {
        max_i = l;
    } 
    if(r<n && heap[r]>heap[max_i])
    {
        max_i = r;
    }     
    if(max_i != i)
    {
        //swap(heap[i], heap[max_i]);
        int temp = heap[i];
        heap[i] = heap[i+1];
        heap[i+1] = temp;
        heapify(heap, max_i, n);
    }
}

void heap_sort(vector<int>& heap)
{
    for (int i=heap.size()/2 - 1; i>=0; i--)
    {
        heapify(heap, i, heap.size());
    }
    for (int i=heap.size()-1; i>0; i--)
    {
        swap(heap[i], heap[0]);
        heapify(heap, 0, i);
    }
}


int marks(int N, int M, int K, vector<int>& C, vector<int>& T)
{   
    int marks=0;


    return marks;
}

int main()
{
    int n,N,M,K;
    cin>>n;
    vector<int> C;
    vector<int> T;

    for(int i=0; i<n; i++)
    {
        cin>>N>>M>>K;
        for(int j=0; j<N; j++)
        {
            cin>>C[j];
        }
        for(int j=0; j<N; j++)
        {
            cin>>T[j];
        }
        marks(N,M,K, C, T);
    }
}