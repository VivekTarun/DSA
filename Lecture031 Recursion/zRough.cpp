// #include <iostream>
// using namespace std;

// int factorial(int n) {

//     if(n == 0) {
//         return 1;
//     }
//     int smallerProblem = factorial(n-1);
//     int biggerProblem = n * smallerProblem;
//     return biggerProblem;
// }
 
// int main()
// {
//     int n = 5;
//     cout << "Enter the value of n";
//     // cin >> n;

//     int factorialVal = factorial(n);

//     cout << "The value of factorial is: " << factorialVal << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int power(int n) {
//     if(n==0) {
//         return 1;
//     }

//     return 2 * power(n-1);
// }
 
// int main()
// {
    
//     int n = 5;
//     cout << "Enter the value of n";
//     // cin >> n;

//     int powerVal = power(n);

//     cout << "The value of power is: " << powerVal << endl;
//     return 0;
// } 


// #include <iostream>
// using namespace std;

// void sayDigit(int n, string arr[]) {
//     //base case
//     if(n == 0) {
//         return;
//     }

//     //processing
//     int digit = n % 10;
//     n = n / 10;

//     //recursive call
//     sayDigit(n, arr);

//     //Recursive tree mein uper aane ke time pe print karenge.
//     cout << arr[digit] << " ";
// }

// int main()
// {

//     string arr[11] = {"Zero", "One", "Two", "Three", "Four", "Five", "six", "Seven", "Eight", "Nine", "Ten"};
//     int n;
//     cin >> n;

//     sayDigit(n, arr);
//     return 0;
// }



// #include <iostream>
// using namespace std;

// bool isSorted(int arr[], int size) {

//     if(size == 0 || size == 1)
//     return true;

//     if(arr[0] > arr[1]) {
//         return false;
//     } else {
//         return isSorted(arr + 1, size - 1);
//     }
    
// }
 
// int main()
// {
//     int arr[1] = {222};
//     int size = 1;

//     bool ans = isSorted(arr, size);
//     if(ans) {
//         cout << "sorted";
//     } else {
//         cout << "not sorted.";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int findSum(int arr[], int size) {
//     int ans = 0;
//     //base case
//     if(size == 0) {
//         return 0;
//     }

//     if(size == 1) {
//         return arr[0];
//     }

//     //Recursive relation
//     int remainingPart = findSum(arr+1, size-1);
//     int sum = arr[0] + remainingPart;
//     return sum;
// }
 
// int main()
// {
//     int arr[5] = {1,2,3,4,5};
//     int size = 5;

//     int ans = findSum(arr, size);

//     cout << ans;
//     return 0;
// }

//LINEAR SEARCH

// #include <iostream>
// using namespace std;

// bool search(int arr[], int size, int key) {
//     //base case
//     if(size == 0)
//     return false;
    
//     if(arr[0] == key)
//     return true;
//     else {
//         bool remainingPart = search(arr+1, size-1, key);
//         return remainingPart;
//     }
// }
 
// int main()
// {
//     int arr[5] = {1,2,3,4,5};
//     int size = 5;
//     int key = 3;

//     bool ans = search(arr, size, key);

//     if(ans)
//     cout << "found";
//     else
//     cout << "not found";


//     return 0;
// }

//BINARY SEARCH

// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int s, int e, int k) {
//     //base case
//     if(s>e)
//     return 0;

//     int mid = s + (e-s)/2;

//     if(arr[mid] == k)
//     return mid;

//     if(arr[mid] < k) {
//         return binarySearch(arr, mid+1, e, k);
//     } else {
//         return binarySearch(arr, s, mid-1, k);
//     }
// }
 
// int main()
// {
//     int arr[5] = {1,2,3,4,5};
//     int size = 5;
//     int key = 4;

//     int ans = binarySearch(arr, 0, size, key);

//     cout << ans;

//     return 0;
// }

// String Question.

// #include <iostream>
// using namespace std;

// void reverse(string &str, int i, int j) {
//     //base case
//     if(i>j)
//     return;

//     swap(str[i], str[j]);
//     i++;
//     j--;

//     //Recursive call.
//     reverse(str, i, j);
// }
 
// int main()
// {
//     string name = "vivek";
//     cout << endl;
//     reverse(name, 0, name.length()-1);
//     cout << endl;
//     cout << name <<endl;
//     return 0;
// }

//PalindromeCheck

// #include <iostream>
// using namespace std;

// bool checkPalindrome(string str, int i, int j) {
//     //base case.
//     if(i>j)
//     return true;
    

//     if(str[i] != str[j])
//     return false;
//     else
//     return checkPalindrome(str, i+1, j-1);

// }
 
// int main()
// {
//     string name = "vivviv";
//     cout << endl;

//     bool isPalindrome = checkPalindrome(name, 0, name.length()-1);

//     if(isPalindrome)
//     cout << "It is a palindrome";
//     else 
//     cout << "it is not a palindrome";

//     return 0;
// }

//find the power using the recursion.

// #include <iostream>
// using namespace std;

// int power(int a, int b) {
//     //base case
//     if(b == 0)
//     return 1;

//     if(b == 1)
//     return a;

//     //recursive call.
//     int ans = power(a,b/2);

//     // if b is even.
//     if(b%2 == 0)
//     return ans * ans;
//     else // if b is odd.
//     return a * ans * ans;
// }
 
// int main()
// {
//     int a,b;
//     cin >> a >> b;

//     int ans = power(a,b);

//     cout << "The value of ans is " << ans;
//     return 0;
// }



//Bubble sort using recursion

#include <iostream>
using namespace std;

void sortArray(int arr[], int n) {
    //base case. - already sorted.
    if(n == 0 || n == 1)
    return;

    for()
}
 
int main()
{   
    int arr[5] = {1,3,2,4,57};


    
    return 0;
}







