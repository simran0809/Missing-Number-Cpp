// vector is similiar like array
// so a , b , c ,d is array and f will have to insert
//data structure can change its size dynamically

 //vector is dynamically array that can grow and shrink in size .
 // Vector Denotation :  vector<dataname> var = {2,3,4,5}
 // vector<int> b ;

/*vector important methods
  . Push_back(value) : Adds an element to the end ;
  . pop_back(): Recovers the last elements.
  . size() : Returns the number of elements
  . at(index): Accesses the element at the specified index with bounds checking .
  . front(): Accesses the first element 
  . back() : Accesses the last element 
 a[i] = 4 or v[i] = 4 we can update the value */
 

   //    Missing the only  number range that is missing from array 
 // sum of array numbers and sum of all natural numbers . // subtract both of it .

// input nums = 3+0+1 and 1+2+3  = 6-4

   #include<iostream>
   #include<vector>   // vector include vector initialise ;

   using namespace std;
     class Solution {
        public : 
       int missingNumber(vector<int>& nums){
        
        int sum = 0; // sum of given array 


        int n = nums.size();

// iterate it before nums before end pt
 
        for (int i = 0; i<nums.size(); i ++){
            sum =  n+nums[i]; // or sum += nums[i];
        }

    return n*(n+1)/2 - sum; // formula missing Number 

        }
     };

int main(){
    Solution sol ;
    vector<int> nums  = {3, 0,1};

 cout << "Missing number: " << sol.missingNumber(nums) << endl;
    return 0;

}

//array has fixed size we can't add or remove element;
// vector we can add or remove element ;

/* Feature	Array (int arr[])	Vector (vector<int>)
Declaration	int arr[] = {1, 2, 3};	vector<int> nums = {1, 2, 3};
Size	Fixed	Dynamic (resizable)
Syntax for accessing elements	arr[i]	nums[i]
Adding elements	❌ (Not allowed)	✅ nums.push_back(4);
Removing elements	❌ (Not allowed)	✅ nums.pop_back();


*/
  
    
 



  

  
   


