#include <iostream>
using namespace std;
// TLE maar jayega 
// kyun ki code Dp se chalega 
// ye jo code hai fully optimized nhi hai DP se jab karenge isko toh fully optimized ho jayega
//

int stair(long long nStrair) {
    //base case.
    if(nStrair < 0) {
        return 0;
    }
    if(nStrair == 0) {
        return 1;
    }

    //recursive relation.
    int ans = stair(nStrair-1) + stair(nStrair-2);
    return ans;
}
 
int main()
{
    
    return 0;
}