#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define ll long long
void selectionSort(int a[], int n){
	int pos;
	for (int i=0;i<n-1;i++){
		pos=i;
		for (int j=i+1;j<n;j++){
			if (a[j]<a[pos]){
				pos=j;
			}
		}
		int t=a[pos];
		a[pos]=a[i];
		a[i]=t;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	selectionSort(a,n);
	for (int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}

