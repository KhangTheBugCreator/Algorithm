#include <stdio.h>

int main(){
	int n,i,dem,j,a[10005];
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++){
		bool found=false;
		for (j=0;j<i;j++){
			if (a[i]==a[j]){
				found=true;
				break;
			}
		}
		if (found==false){
			dem=1;
			for (j=i+1;j<n;j++){
				if (a[i]==a[j]){
					dem+=1;
				}
			}
			printf("%d   %d\n",a[i],dem);
		}
	}
	
	return 0;
}
