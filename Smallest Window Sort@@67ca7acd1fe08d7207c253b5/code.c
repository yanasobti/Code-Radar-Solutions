int findUnsortedSubarray(int arr[],int n){
    int start=-1,end=-1
    for(int i=0;i<n-1;i++){    //index breaking from the left
        if(arr[j]>arr[j+1]){
        start=i;
        break;
        }
    }

    for(int i=0;i<n-1;i++){    //index breaking from the right
        if(arr[j]>arr[j+1]){
        end=i;
        break;
        }
    }

    if(start==-1){
        return 0;
    }

    return end-start+1 //lenth of the subarray
}

