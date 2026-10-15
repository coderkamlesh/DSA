#include<iostream>
#include<vector>
using namespace std;

/*
DRY RUN:
Array: {1, 2, 5, 4, 10}
Step 1: Find Max (ans)
- Initial ans = -1
- i=0: 1 > -1? Yes, ans = 1
- i=1: 2 > 1? Yes, ans = 2
- i=2: 5 > 2? Yes, ans = 5
- i=3: 4 > 5? No
- i=4: 10 > 5? Yes, ans = 10
Final Max (ans) = 10

Step 2: Find Second Largest
- Initial secondLargest = -1
- i=0: 1 != 10? Yes. Is 1 > -1? Yes, secondLargest = 1
- i=1: 2 != 10? Yes. Is 2 > 1? Yes, secondLargest = 2
- i=2: 5 != 10? Yes. Is 5 > 2? Yes, secondLargest = 5
- i=3: 4 != 10? Yes. Is 4 > 5? No
- i=4: 10 != 10? No (Skip)
Final Result: 5
*/

int main(){
    vector<int> arr = {1, 2, 5, 4, 10};
    
    // Step 1: Sabse bada element (Max) nikalna
    int ans = -1;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > ans){
            ans = arr[i];
        }
    }

    // Step 2: Dusra sabse bada (Second Max) nikalna
    int secondLargest = -1;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != ans){ // Sabse bade wale ko ignore karo
            if(arr[i] > secondLargest){ // Agar current element secondLargest se bada hai
                secondLargest = arr[i];
            }
        }
    }

    cout << "Second Largest element is: " << secondLargest << endl;

    return 0;
}