int findTotalOccurence(int arr[], int n, int target) {
    int firstOcc = findFirstOccurence(arr, n, target);
    int lastOcc = findLastOccurence(arr, n, target);
    int total = lastOcc - firstOcc +1 ;
    return total;
}
int main(){
    int arr[]={10,20,30,30,30,40,50,60};
    int target=30;
    int n=8;
    int ans=findTotalOccurence(arr,n,target);
    cout<<ans<<endl;
    return 0;
    
}