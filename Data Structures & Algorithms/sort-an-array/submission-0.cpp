class Solution {
private:
  void merge(vector<int>&nums,int s,int m,int e){
    int n1=m-s+1;
    int n2=e-m; //e-(m+1)
    int *arr1 =new int[n1];
    int *arr2 =new int[n2];
    //copy elements into arr1 and arr2
    for(int i=0;i<n1;i++){
        arr1[i]=nums[s+i];
    }
    for(int i=0;i<n2;i++){
        arr2[i]=nums[m+1+i];
    }
    //apply two pointer
    int i=0,j=0;
    int k=s;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            nums[k]=arr1[i];
            i++;
        }
        else{
            nums[k]=arr2[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        nums[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n2){
        nums[k]=arr2[j];
        j++;
        k++;
    }
  }
  private:
   void mergeSort(vector<int>&nums,int s,int e){
    if(s<e){
        int m=s+(e-s)/2;
        mergeSort(nums,s,m);
        mergeSort(nums,m+1,e);
        merge(nums,s,m,e);
    }
   }
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};