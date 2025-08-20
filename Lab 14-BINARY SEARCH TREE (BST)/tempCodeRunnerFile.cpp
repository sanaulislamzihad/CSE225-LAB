template <class T> 
void BST<T>::BuildBST(T arr[], int start, int end) 
{ 
    if (start <= end) 
    { 
        int mid = (start + end) / 2; 
        Insert(arr[mid]); 
        BuildBST(arr, start, mid - 1); 
        BuildBST(arr, mid + 1, end); 
    } 
} 
 
template <class T> 
void BST<T>::BuildOptimalTree() 
{ 
    T arr[Length()]; 
    T value; 
    int n = sizeof(arr) / sizeof(arr[0]); 
 
    Reset(IN_ORDER); 
    for(int i = 0; i < Length(); i++) 
    { 
        GetNext(value, IN_ORDER); 
        arr[i] = value; 
    } 
    Destroy(root); 
    BuildBST(arr, 0, n-1); 
}