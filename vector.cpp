#include<bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // initializing 1st container
    vector<int> arr1 = { 1, 4, 6, 3, 2 };
  
    // initializing 2nd container
    vector<int> arr2 = { 6, 2, 5, 7, 1 };
  
    // declaring resultant container
    vector<int> arr3(10);
  
    // sorting initial containers
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
  
    // using merge() to merge the initial containers
    merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), arr1.begin());
  
    // printing the resultant merged container
    cout << "The container after merging initial containers is : ";
  
    for (int i = 0; i < arr1.size(); i++)
        cout << arr1[i] << " ";
    return 0;
}