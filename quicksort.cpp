#include <stdio.h>
int partition(int a[],int l, int r){
	int i=l-1,k=a[r];
	for (int j=l;j<r;j++){
		if (a[j]<=a[r]){
			i++;
			int tmp=a[i];a[i]=a[j];a[j]=tmp;
		}
		
	}
	int tmp=a[i+1];a[i+1]=a[r];a[r]=tmp;
	return i+1;
}
void quicksort(int a[],int l, int r){
	if (l<r){
		int pos=partition(a,l,r);
		quicksort(a,l,pos-1);
		quicksort(a,pos+1,r);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	for (int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}

