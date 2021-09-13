#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n)
{
  for(int i=0,j=n-1;i!=j;i++,j--){
      int temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
  } 
} 
void print(int arr[],int n)
{
    cout<<endl;
  for(int j=0;j<n;j++)
   cout<<"["<<arr[j]<<"]"; 
}
using namespace std;
int main(){
    int arr[10],n;
    cout<<"Enter the value\n";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    print(arr,n);
    reverse(arr,n);
    print(arr,n);

}