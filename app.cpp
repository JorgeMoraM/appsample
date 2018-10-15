#include <iostream>

using namespace std;

void mergeSort(int* arr,int lastind){
int i,j,aux=0;
for(i=1;i<lastind;++i){
    aux=arr[i];
    for(j=i;j>0&&aux<arr[j-1];--j){
        arr[j]=arr[j-1];
        j=j-1;
    }
    if(i!=j){
        arr[j]=aux;
    }
}
for (int i=0;i<lastind;++i){
    cout << " "<<arr[i]<<" ";
}
}


int main(){
    int arr[]={2,5,1,8,1,9,7,4,3,5};
    int lastind=9;
    mergeSort(arr,lastind);

return 0;
}
