void selectionSort(int arr[],int n){
    int temp;
    for(int i=0;i<n;i++){
        int flag=0;
        for(int j=0;j<n;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
}