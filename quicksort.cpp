//#include<bits/stdc++.h>
//using namespace std;
//int quicksort(int arr[], int left ,int right){
//	if (left >= right) return 0;
//	int pivot = arr[left];
//	int i = left+1;
//	int j = right;
//	while(i<=j){
//		while(arr[i]<=pivot){
//			i++;
//		}
//		while(arr[j]>=pivot){
//			j--;
//		}
//		if(i<j){
//		int temp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = temp;	
//		}
//	}
//	int temp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = temp;
//	quicksort(arr,left,j-1);
//	quicksort(arr,j+1,right);
//}
//int main(){
//	int n;
//	cin>>n;
//	int a[100];
//	for(int i = 0;i<n;i++){
//		cin>>a[i];
//	}
//	quicksort(a,0,n-1);
//	for(int i = 0 ; i<n;i++){
//		cout<<a[i];
//	}
//}
#include <bits/stdc++.h>
using namespace std;

void quicksort(int arr[], int left, int right) {
    if (left >= right) return;

    int pivot = arr[left];
    int i = left + 1;
    int j = right;

    while (i <= j) {
        while (i <= right && arr[i] <= pivot) i++;
        while (j >= left && arr[j] > pivot) j--;

        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }

    // Place pivot in its correct position
    swap(arr[left], arr[j]);

    // Recursively sort the subarrays
    quicksort(arr, left, j - 1);
    quicksort(arr, j + 1, right);
}

int main() {
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    quicksort(a, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

