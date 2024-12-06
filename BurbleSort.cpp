#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define ll long long
void burbleSort(int a[], int n){
	for (int i=0;i<n-1;i++){
		for (int j=1;j<n-i;j++){
			if (a[j]<a[j-1]){
				int t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	burbleSort(a,n);
	for (int i=0;i<n;i++){
		printf("%d ",a[i];
	}
	return 0;
}

