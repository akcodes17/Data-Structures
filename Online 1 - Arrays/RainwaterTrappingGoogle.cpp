#include<iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i=0; i<n; i++){

    cin>>a[i];
  }

  int left[n], right[n];
  left[0] = a[0];
  right[n-1] = a[n-1];
  int max1 = a[0];
  int max2 = a[n-1];
  int cmp1=0;
  for(int i=1;i<n;i++){
    left[i] = max(a[i],max1);
    max1 = max(max1,left[i]);
  }
  for(int i = n-2;i>=0; i--){
    right[i] = max(a[i],max2);
    max2 = max(max2, right[i]);
  }

  int sum = 0;
   for(int i=0;i<n;i++){
    sum = sum + min(left[i], right[i]) - a[i];
  }
  cout<<sum;
	return 0;
}
