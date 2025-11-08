//202510306218
//2229740274@qq.com
//李浩楠
#include<stdio.h>
int main(){
    int arr[10];

for (int i=0;i<10;i++){
    scanf("%d",&arr[i]);
}

for (int i=0;i<9;i++){
    for(int j =0;j<9-i;j++){
        if(arr[i]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}

for(int i=0;i<10;i++){
    if(i==0)printf("%d",arr[i]);
    else printf("%d",arr[i]);
}
printf("\n");
