class Solution {
public:
    int trap(vector<int>& height) {
        
        int water=0;
	//if we have two bars,

	int n=height.size(); //Test Case
	if(n<=2){
		return 0;
	}

	//Left Max, Right Max
        
	vector<int> left(n,0), right(n,0);
	left[0]=height[0];
	right[n-1]=height[n-1];

	for(int i=1;i<n;i++){
        
        //We we go from left, we take the largest value and update the value to all other
        //Same with right 

		left[i]=max(left[i-1],height[i]); // i-1, height[i]
		right[n-i-1]=max(right[n-i],height[n-i-1]); //n-i,n-i-1
	}
        
	//Water Summation -Trapped Rainwater
        
	for(int i=0;i<n;i++){
        
        //Water Trapped is Min(L,R) -H[i] where i is the index;
		water+=(min(left[i],right[i])-height[i]); 
	}
return water;
        
    }
};