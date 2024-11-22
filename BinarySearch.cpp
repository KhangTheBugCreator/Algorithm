#include <stdio.h>
int partition(int a[],int l, int r){
	int i=l-1,k=a[r];
	for (int j=l;j<r;j++){
		if (a[j]<=a[r]){
			i++;
			int tam=a[j];
			a[j]=a[i];
			a[i]=tam;
		}
		
	}
	int tmp=a[r];a[r]=a[i+1];a[i+1]=tmp;
	return i+1;
}
void QuickSort(int a[],int l, int r){
	if (l<r){
		int pos=partition(a,l,r);
		QuickSort(a,l,pos-1);
		QuickSort(a,pos+1,r);
	}
}
int BinarySearch(int a[],int l,int r,int x){
	int kq=-1;
	while (l<=r){
		int m=(l+r)/2;
		if (a[m]==x){
			kq=m;return m;
		}
		else if(a[m]<x){
			l=m+1;
		}
		else{
			r=m-1;
		}
	}
	return kq;
}
int main(){
	int n,x;
	printf("nhap so luong phan tu cua mang: ");
	scanf("%d",&n);int a[n];
	for (int i=0;i<n;i++){
		printf("nhap phan tu thu %d: ",i);
		scanf("%d",&a[i]);
	}
	QuickSort(a,0,n-1);
	printf("Ham sau khi da sap xep tang dan: \n");
	for (int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("nhap so can tim trong mang sau khi da sap xep: ");
	scanf("%d",&x);
	printf("%d",BinarySearch(a,0,n-1,x));
	return 0;
}

