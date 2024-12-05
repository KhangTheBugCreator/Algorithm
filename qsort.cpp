#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int comparator(const void *a, const void *b){
	//ep hai con tro void ve con tro int;
	int *x= (int*)a;
	int *y= (int*)b;
	//sap xep tang dan: neu x,y(hay a,b) da o dung vi tri (x<y) thi tra ve gia tri -1; else return 1;
	//hoac:
	return *x-*y;
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	qsort(a,n,sizeof(int),comparator);//\\
	for (int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}
