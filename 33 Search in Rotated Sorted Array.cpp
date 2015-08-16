class Solution {
public:
    int search(int A[], int n, int target) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if(!n)
            return -1;
        int left=0, right=n-1, mid;
        while(left<=right)
        {
            mid=(left+right)/2;
            if(A[mid]==target)
                return mid;
            if(A[mid]<A[right])
            {
                if(target>A[mid]&&target<=A[right])
                    left=mid+1;
                else
                    right=mid-1;
            }
            else
            {
                if(target<A[mid]&&target>=A[left])
                    right=mid-1;
                else
                    left=mid+1;
            }
        }
        return -1;
    }
};
