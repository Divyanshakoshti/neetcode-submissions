class Solution {
public:
     int subarraySum(vector<int>& arr, int k) {
    //     int n=nums.size();   //BRUTE FORCE
    //     int count=0;
    //     for(int i=0;i<n;i++){
    //         int sum=0;
    //         for(int j=i;j<n;j++){
    //             sum+=nums[j];
    //             if(sum==k){
    //                 count++;
    //             }
    //         }
    //     }
    // return count;
   int n=arr.size();
    int count=0;
    vector<int>PS(n,0);
    PS[0]=arr[0];
    for(int i=1;i<n;i++){
        PS[i]=PS[i-1]+arr[i];
    }
    unordered_map<int,int>m;  //ps,freq
    for(int j=0;j<n;j++){
        if(PS[j]==k){
            count++;
        }
        int val=PS[j]-k;
        if(m.find(val)!=m.end()){
            count+=m[val];
        }
        if(m.find(PS[j])==m.end()){
            m[PS[j]]=0;
        }
        m[PS[j]]++;
    }
    return count;
    }
};