#include <stdio.h>
#include <string.h>
int a[10][10];
int main(){
	
	int n;
	scanf("%d",&n);
	memset(a, 0, sizeof(0));
	int r = 0,c = 0,num = 1;
	a[r][c] = num;
	while(num<n*n){
		while(c+1<n && a[r][c+1] == 0) a[r][++c] = ++num;
		while(r+1<n && a[r+1][c] == 0) a[++r][c] = ++num;
		while(c-1>=0 && a[r][c-1] == 0) a[r][--c] = ++num;
		while(r-1>=0 && a[r-1][c] == 0) a[--r][c] = ++num;
	}
	
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
} 
